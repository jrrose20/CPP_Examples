#include "stdafx.h"
#include "clsCharacter.h"


clsCharacter::clsCharacter()
{
	bitAttributes = c_attrib;
}


clsCharacter::~clsCharacter()
{

}

void clsCharacter::PrintAttributes()
{
	std::cout << bitAttributes << '\n';

	//Print out if the character is Poisoned
	if (bitAttributes.test(isPoisoned) == 1)
	{
		std::cout << "Character Is Poisoned" << std::endl;
	}

	//Print out if character is Asleep
	if (bitAttributes.test(isAsleep) == 1)
	{
		std::cout << "Character is Asleep" << std::endl;
	}

	//Print out if the character is Blind
	if (bitAttributes.test(isBlind) == 1)
	{
		std::cout << "Character is Blind" << std::endl;
	}

	//Print out if the character is Stunned
	if (bitAttributes.test(isStunned) == 1)
	{
		std::cout << "Character is Stunned" << std::endl;
	}

}

void clsCharacter::ResetAttributes()
{
	bitAttributes = c_attrib;
}

int clsCharacter::SetAttribute(int intAttribute, bool boolSetAttribute)
{

	if (bitAttributes.test(intAttribute) != boolSetAttribute)
	{
		bitAttributes.flip(intAttribute);
	}

	return 0;
}
