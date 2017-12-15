#pragma once

#include <bitset>

class clsCharacter
{
public:
	clsCharacter();
	~clsCharacter();

	const int c_attrib = 7;


	int SetAttribute(int intAttribute, bool boolSetAttribute);
	void PrintAttributes();
	void ResetAttributes();

protected:
	std::bitset<4> bitAttributes;
	const int isPoisoned = 0;
	const int isBlind = 1;
	const int isAsleep = 2;
	const int isStunned = 3;

private:


};

