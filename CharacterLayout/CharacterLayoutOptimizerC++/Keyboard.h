#ifndef KEYBOARD_H
#define KEYBOARD

#include <ostream>
#include <vector>
#include "Key.h"

class Keyboard
{
private:
	std::vector<Key> m_keys;
public:
	Keyboard();

	Keyboard& addKey(const Key &key)
	{
		m_keys.push_back(key);
		return *this;
	}

	friend std::ostream& const operator<<(std::ostream &out, const Keyboard &keyboard)
	{
		
	}

};

#endif