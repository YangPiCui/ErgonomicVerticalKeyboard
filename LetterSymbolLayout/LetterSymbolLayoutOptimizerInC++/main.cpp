#include <iostream>
#include <string>
#include <vector>

enum class Hand
{
	left,
	right,

	MAX_COUNT
};

std::string getHand(Hand hand)
{
	switch (hand)
	{
	case Hand::left:
		return "left";
		break;
	case Hand::right:
		return "right";
		break;
	case Hand::MAX_COUNT:
	default:
		return "unspecified";
		break;
	}
}

enum class Digit
{
	thumb,
	index,
	middle,
	ring,
	little,

	MAX_COUNT
};

std::string getDigit(Digit digit)
{
	switch (digit)
	{
	case Digit::thumb:
		return "thumb";
		break;
	case Digit::index:
		return "index";
		break;
	case Digit::middle:
		return "middle";
		break;
	case Digit::ring:
		return "ring";
		break;
	case Digit::little:
		return "little";
		break;
	case Digit::MAX_COUNT:
	default:
		return "unspecified";
		break;
	}
}

class Key; // forward declare the Key class

class Finger
{
private:
	Hand m_hand;
	Digit m_digit;
	Key m_homeKey; // The default home key for the finger
	int_least64_t m_count; // number of finger presses
	long double m_travel; // finger travel
public:
	Finger(Hand hand, Digit digit, Key &homeKey) : m_hand{hand}, m_digit{digit}, m_homeKey{homeKey}
	{
		m_count = 0;
		m_travel = 0;
	}

	Finger& operator++()
	{
		++m_count;
		++m_travel;

		return *this;
	}

	void addCount(int count)
	{
		m_count += count;
	}

	void addTravel(long double travel)
	{
		m_travel += travel;
	}

	friend std::ostream& operator<<(std::ostream& out, Finger &finger)
	{
		out << getHand(finger.m_hand) << " " << getDigit(finger.m_digit) << " - "
			<< "count: " << finger.m_count << ", " 
			<< "travel: " << finger.m_travel;

		return out;
	}
};

class Key
{
private:
	int m_row; // The home row is at row 0; up one row is row 1; up two rows is row 2; down one row is row -1, etc.
	int m_col; // The first column at the left, where the left little finger travels on, is column 1.
			   // The second column from the left, where the left ring finger travels on, is column 2.
			   // The first column from the right, where the right little finger travels on, is column -1. 
			   // The second column from the right, where the right ring finger travels on, is column -2, etc.
			   // There is no 0th column.
	char m_lr; // The lower right key. This returns the default key without any modifier keys, such as the 'shift' key, being pressed together.
	char m_ur; // The upper right key. This is returned together with the 'shift' key.
	char m_ll; // 'Fn' key
	char m_ul; // 'Fn' + 'shift'
	Finger m_finger;
public:
	Key(int row, int col, char lr, char ur, char ll, char ul, Finger finger)
	{}
};


int main()
{
	std::vector<Finger> fingers;

	for (int i{ 0 }; i < static_cast<int>(Hand::MAX_COUNT); ++i)
	{
		for (int j{ 0 }; j < static_cast<int>(Digit::MAX_COUNT); ++j)
		{
			Finger finger{ static_cast<Hand>(i), static_cast<Digit>(j) };
			fingers.push_back(finger);
		}
	}

	for (Finger f : fingers)
	{
		std::cout << f << "\n";
	}



	// load the data
	// use the initial assignment to iterate through the data and calculate a score
	  // constraints, like a particular key only accepts certain letters.



	return 1;
}