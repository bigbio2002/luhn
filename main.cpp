#include <iostream>
#include "luhn.h"

using namespace std;

int main()
{
	char ccNumToVerify[] = {4, 1, 4, 2,
				3, 8, 3, 3,
				3, 5, 3, 2,
				5, 1, 8, 0};

	bool isLuhnValid;

	isLuhnValid = luhnCheckValid(ccNumToVerify);

	if(isLuhnValid)
		cout << "This number passes the Luhn test." << endl;
	else
		cout << "This number appears to be invalid." << endl;

	return 0;
}
