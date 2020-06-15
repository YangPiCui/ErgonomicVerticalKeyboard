#include <algorithm> // find
#include <cctype> // toupper()
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Finger.h"
#include "Key.h"
#include "Timer.h"


Key& getKeyByPosition(std::vector<Key> &keys, int row, int col)
{
	std::vector<Key>::iterator keyPtr{ std::find_if(keys.begin(), keys.end(),
		[=](Key &key)
		{
			return (key.getRow() == row) && (key.getCol() == col);
		}) };

	if (keyPtr == keys.end())
		std::cerr << "key at row:" << row << ", col:" << col << " not found\n";

	return *keyPtr;
}

//Key& getKeyByCharacter(std::vector<Key> &keys, char character)
//{
//	std::vector<Key>::iterator keyPtr{ std::find_if(keys.begin(), keys.end(),
//		[=](Key &key)
//		{
//			return (key.getRow() == row) && (key.getCol() == col);
//		}) };
//
//	if (keyPtr == keys.end())
//		std::cerr << "key at row:" << row << ", col:" << col << " not found\n";
//
//	return *keyPtr;
//}

//std::vector<Key&> getKeysByAsciiCode(const std::vector<Key> &keys, int asciiCode)
//{
//	std::vector<Key&> keysFound;
//
//	std::for_each(keys.begin(), keys.end(),
//		[](const Key &key)
//		{
//			if ()
//		}
//
//
//	return *std::find_if(keys.begin(), keys.end(),
//		[=](Key &key)
//		{
//			return (key.getRow() == row) && (key.getCol() == col);
//		});
//}

int main()
{
	// #######################################
	// ## Optimization Parameters 
	// #######################################
	double evenFingerUsage = 1.0; // How evenly should be fingers be used according to their strengths?
	double keyScore = 1.0; // How important is it for the desired keys, which have higher key scores, to be pressed more frequently? 
	double handTravel = 1.0;

	// ############################################
	// Create the Finger class variables.
	// The strength of a finger is approximately proportional to the qube of the finger's width.
	// The tip knuckle of my little finger has a width of 13.3mm; and that of my index finger is 16.0mm. (16.0/13.3)^3 = 1.74.
	// Therefore, the total load on the index finger should be 1.74 times more than that on the little finger.
	// In other words, total key press on the index finger should be ideally 1.74 times more than on the little finger.
	Finger leftLittle{ Hand::left, Digit::little, 1.0, 0, 1 };  Finger rightLittle{ Hand::right, Digit::little, 1.0, 0, -1 };
	Finger leftRing{ Hand::left, Digit::ring, 1.32, 0, 2 };	    Finger rightRing{ Hand::right, Digit::ring, 1.32, 0, -2 };
	Finger leftMiddle{ Hand::left, Digit::middle, 1.58, 0, 3 }; Finger rightMiddle{ Hand::right, Digit::middle, 1.58, 0, -3 };
	Finger leftIndex{ Hand::left, Digit::index, 1.74, 0, 4 };   Finger rightIndex{ Hand::right, Digit::index, 1.74, 0, -4 };
	Finger leftThumb{ Hand::left, Digit::thumb, 1.74, -3, 5 };  Finger rightThumb{ Hand::right, Digit::thumb, 1.74, -3, -5 };

	std::vector<Finger*> fingers{ &leftLittle,  &leftRing,  &leftMiddle,  &leftIndex,  &leftThumb
								,&rightLittle, &rightRing, &rightMiddle, &rightIndex, &rightThumb };

	// =================================
	// =================================
	std::vector<Key> keys;
	double attenuationFactor{ 0.7 }; // A key two columns right to the index finger's home key would have a score of 1.74*0.7^2 = 0.85,
									 // making it slightly less desirable than the little finger's home key to be pressed 
	std::vector<int> lowerCaseLetters{};
	std::vector<int> upperCaseLetters{};
	std::vector<int> symbols{};
	std::vector<int> controlKeys{};


	// ---------------------------------
	// Create the keys with their corresponding fingers and scores.
	// See "Key.h" for the meaning of parameters

	// each finger's vertical home column
	int row{}; int col{};
	for (int row{ -2 }; row <= 2; ++row)
	{
		{   // left little finger's key column
			col = 1; Key key{ row, col, &leftLittle, attenuationFactor };
			keys.push_back(key);
		}

		{   // right little finger's key column
			col = -1; Key key{ row, col, &rightLittle, attenuationFactor };
			keys.push_back(key);
		}

		{   // left ring finger
			col = 2; Key key{ row, col, &leftRing, attenuationFactor };
			keys.push_back(key);
		}

		{   // right ring finger
			col = -2; Key key{ row, col, &rightRing, attenuationFactor };
			keys.push_back(key);
		}

		{   // left middle finger
			col = 3; Key key{ row, col, &leftMiddle, attenuationFactor };
			keys.push_back(key);
		}

		{   // right middle finger
			col = -3; Key key{ row, col, &rightMiddle, attenuationFactor };
			keys.push_back(key);
		}

		{   // left index finger
			col = 4; Key key{ row, col, &leftIndex, attenuationFactor };
			keys.push_back(key);
		}

		{   // right index finger
			col = -4; Key key{ row, col, &rightIndex, attenuationFactor };
			keys.push_back(key);
		}
	}

	// Extra columns for the index fingers
	for (int row{ 0 }; row <= 2; ++row)
	{
		for (int col{ 5 }; col <= 6; ++col)
		{
			// left index finger
			Key key{ row, col, &leftIndex, attenuationFactor };
			keys.push_back(key);

			// right index finger
			int colRight{ -col };
			Key keyRight{ row, colRight, &rightIndex, attenuationFactor };
			keys.push_back(keyRight);
		}
	}

	// Thumb keys
	row = -3;
	for (int col{ 5 }; col <= 6; ++col)
	{
		Key key{ row, col, &leftThumb, attenuationFactor };
		keys.push_back(key);

		// right index finger
		int colRight{ -col };
		Key keyRight{ row, colRight, &rightThumb, attenuationFactor };
		keys.push_back(keyRight);
	}

	//for (auto key : keys)
	//	std::cout << key << '\n';

	// ---------------------------------
	// Assign characters to keys.

	// Set the number characters 0 1 2 3 4 5 6 7 8 9 0
	row = 2;
	for (int col{ 1 }; col <= 5; ++col)
	{
		std::cout << getKeyByPosition(keys, 2, col).setAsciiCode('0' + col, 0, false) << '\n';
	}

	for (int col{ -5 }, digit{ 6 }; col <= -1; ++col, ++digit)
	{
		std::cout << getKeyByPosition(keys, 2, col).setAsciiCode(static_cast<int>('0' + digit % 10), 0, false) << '\n';
	}

	// Set 'space' and 'enter' on the thumb keys
	std::cout << getKeyByPosition(keys, -3, 5).setAsciiCode(' ', 0, false) << '\n';
	std::cout << getKeyByPosition(keys, -3, -5).setAsciiCode(' ', 0, false) << '\n';
	std::cout << getKeyByPosition(keys, -3, 6).setAsciiCode(10, 0, false) << '\n';
	std::cout << getKeyByPosition(keys, -3, 6).setAsciiCode(10, 0, false) << '\n';

	std::cout << getKeyByPosition(keys, -3, 5).whereCharacter(' ');











	return 0;
}