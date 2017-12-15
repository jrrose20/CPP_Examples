// BitsetClassExample.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "clsCharacter.h"

int main()
{
	int iAttribute;
	bool bAttributeVal;
	int rc = 0;

	clsCharacter MyCharacter;

	MyCharacter.ResetAttributes();

	while (rc == 0)
	{

		MyCharacter.PrintAttributes();

		std::cout << "Enter attribute to be changed:";

		std::cin >> iAttribute;

		std::cout << "Enter bool to set it to:";

		std::cin >> bAttributeVal;

		rc = MyCharacter.SetAttribute(iAttribute, bAttributeVal);

		//std::cout << MyCharacter.bitAttributes << '\n';
		MyCharacter.PrintAttributes();

		std::cin >> rc;
	}

	return 0;
}

