#include <iostream>
#include "luhn.h"

using namespace std;

int main()
{
	char ccNumToVerify[] = {4, 1, 4, 2,
				3, 8, 3, 3,
				3, 5, 3, 2,
				5, 1, 8, 999};

	bool isLuhnValid;
	int luhnDigit;

	luhnDigit = luhnCheckValid(ccNumToVerify, false);

	if(luhnDigit > 0 && luhnDigit < 10)
		cout << "This number passes the Luhn test." << endl;
	else if(luhnDigit < 0)
		cout << "This number appears to be invalid." << endl;
	else
		abort(1);

	return 0;
}
