#include <iostream>
#include "luhn.h"

using namespace std;

int main()
{
	char ccNumToVerify[] = {5, 2, 9, 0,
				9, 9, 0, 0,
				1, 5, 9, 2,
				1, 3, 8, 0};

	bool isLuhnValid;

	isLuhnValid = luhnCheckValid(ccNumToVerify);

	if(isLuhnValid)
		cout << "This number passes the Luhn test." << endl;
	else
		cout << "This number appears to be invalid." << endl;

	return 0;
}
