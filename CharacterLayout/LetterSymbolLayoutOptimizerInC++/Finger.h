#ifndef  FINGER_H
#define FINGER_H

#include <cstdint>
#include <ostream>
#include <string>

enum class Hand
{
	left,
	right,

	MAX_COUNT
};

enum class Digit
{
	thumb,
	index,
	middle,
	ring,
	little,

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

class Finger
{
private:
	Hand m_hand;
	Digit m_digit;
	double m_strength; // the higher the number, the stronger the finger.
	int m_row; // current row of the finger on the keyboard. See "Key.h" for how the rows and columns are defined.
	int m_col; // current column of this finger.
	int_least64_t m_count; // number of finger presses
	long double m_travel; // finger travel
public:
	Finger(Hand hand = Hand::left, Digit digit = Digit::little, double strength = 1.0, int row=0, int col=0) 
		: m_hand{ hand }, m_digit{ digit }, m_strength{strength}, m_row{row}, m_col{col}
	{
		m_count = 0;
		m_travel = 0;
	}

	std::string getFinger() const { return getHand(this->m_hand) + " " + getDigit(this->m_digit); }
	double getStrength() const { return m_strength; }
	int getRow() const { return m_row; }
	int getCol() const { return m_col; }

	Finger& operator++()
	{
		++m_count;
		return *this;
	}

	Finger& addTravel(long double travel)
	{
		m_travel += travel;
		return *this;
	}

	friend std::ostream& operator<<(std::ostream& out, Finger &finger) 
	{
		out << getHand(finger.m_hand) << " " << getDigit(finger.m_digit) << " - "
			<< "strength: " << finger.m_strength
			<< ", count: " << finger.m_count
			<< ", travel: " << finger.m_travel;

		return out;
	}
};

#endif