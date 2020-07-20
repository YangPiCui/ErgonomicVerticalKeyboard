#ifndef KEYBOARD_H
#define KEYBOARD

#include <ostream>
#include <vector>
#include "Key.h"

class Keyboard
{
private:
	std::vector<Key> m_keys;
	int m_score;  // The overall score of this particular keyborad
public:
	Keyboard();

	Keyboard& addKey(const Key &key)
	{
		m_keys.push_back(key);
		return *this;
	}

	// Save the keyboard layout to an external file.

	// Print the keyboard score and its layout
	friend std::ostream& const operator<<(std::ostream &out, const Keyboard &keyboard)
	{
		
	}

};

#endif