#ifndef KEY_H
#define KEY_H

#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdint>
#include <ostream>
#include <set>
#include <string>

#include "Finger.h"

int toAscii(char c)
{
	return static_cast<int>(c);
}

char toChar(int asciiCode)
{
	return static_cast<char>(asciiCode);
}

class Key
{
private:
	int m_row; // The home row is at row 0; up one row is row 1; up two rows is row 2; down one row is row -1, etc. The thumb home row = -3.
	int m_col; // There is no 0th column.
			   //   The first column at the left, where the left little finger travels on, is column 1.
			   // The second column from the left, where the left ring finger travels on, is column 2, etc.
			   // The left thumb home column = 5. The secod key for the left thumb is at column 6.
			   //   The first column from the right, where the right little finger travels on, is column -1. 
			   // The second column from the right, where the right ring finger travels on, is column -2, etc.
			   // The right thumb home column = -5. The secod key for the right thumb is at column -6.
	Finger *m_finger; // The finger that presses this key.
	double m_attenuationFactor; // Reduces the key score based on the key's distance to the home key.
	std::array<int, 3> m_asciiCodes; // [0] is the Default character on the key. (legend position on key cap: lower left)
									 // [1] with "Shift" pressed. (legend position on key cap: upper left)
									 // [2] with "Fn" key pressed. (legend position on key cap: lower right)
	std::array<bool, 3> m_modifiable; // Whether the optimization code can change each corresponding character.
	double m_score; // The higher the key score, the more comfortable it is for the finger to press it.
	int_least64_t m_pressCount; // how many times this particular key has been pressed.

public:
	Key(int row = 0, int col = 0, Finger *finger = nullptr, double attenuationFactor = 0.0)
		:m_row{ row }, m_col{ col }, m_finger{ finger }, m_attenuationFactor{ attenuationFactor }
	{
		m_asciiCodes.fill(0);
		m_modifiable.fill(true);
		setDefaultScore(m_attenuationFactor);
		m_pressCount = 0;
	}

	// The default key score is calculated based on how far away the key is from the home key from the same finger.
	// Suppose the left index finger's home key has a score of 1, unless specified,
	// a key up/down one row or one column to the right from this home key will have a score of 1*attFactor.
	// A key one row up and one column to the right will have a score of 1*attFactor^sqrt(2).
	void setDefaultScore(double attenuationFactor)
	{
		double rowDif{ static_cast<double>(m_row) - m_finger->getRow() };
		double colDif{ static_cast<double>(m_col) - m_finger->getCol() };
		double distanceToHomeKey{ sqrt(rowDif * rowDif + colDif * colDif) };
		m_score = m_finger->getStrength() * pow(attenuationFactor, distanceToHomeKey);
	}

	int getRow() const { return m_row; }
	int getCol() const { return m_col; }


	Key& setAsciiCode(int asciiCode, int position, bool modifiable)
	{
		if (!(position >= 0 && position < m_asciiCodes.size()))
		{
			std::cerr << "invalid character position for key " << *this;
		}

		m_asciiCodes[position] = asciiCode;
		m_modifiable[position] = modifiable;

		return *this;
	}

	Key& setAsciiCode(char character, int position, bool modifiable)
	{
		int asciiCode{ toAscii(character) };

		return setAsciiCode(asciiCode, position, modifiable);
	}

	// Returns the location of input character if found. Returns -1 if not found.
	int whereCharacter(int asciiCode)
	{
		auto itr = std::find(m_asciiCodes.begin(), m_asciiCodes.end(), asciiCode);

		if (itr != std::end(m_asciiCodes))
			return std::distance(m_asciiCodes.begin(), itr);
		else
			return -1;
	}

	int whereCharacter(char character)
	{
		return whereCharacter(toAscii(character));
	}

	//bool modifiable(int code)
	//{
	//	auto found{find_if(m_asciiCodes.begin(), m_asciiCodes.end(),
	//		[=](int asciiCode)
	//		{
	//			asciiCode 
	//		}
	//		
	//		}
	//}

	//Key& setLetters(std::string ll, std::string ul, std::string lr, std::string ur)
	//{
	//	m_ll = ll; m_llFixed = true;
	//	m_ul = ul; m_ulFixed = true;
	//	m_lr = lr; m_lrFixed = true;
	//	m_ur = ur; m_urFixed = true;
	//	return *this;
	//}

	Key& operator++()
	{
		++m_finger;
		++m_pressCount;

		return *this;
	}

	friend std::ostream& operator<<(std::ostream &out, Key &key)
	{
		out << "row:" << key.m_row << ", col:" << key.m_col
			<< ", (" << key.m_finger->getFinger() << ")"
			<< ", pressCount:" << key.m_pressCount
			<< ", score:" << key.m_score
			<< ", Default:" << "'" << toChar(key.m_asciiCodes[0]) << "'"
			<< ", Shift:" << "'" << toChar(key.m_asciiCodes[1]) << "'"
			<< ", Fn:" << "'" << toChar(key.m_asciiCodes[2]) << "'";
		return out;
	}
};




#endif