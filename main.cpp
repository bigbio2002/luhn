#include <iostream>
#include <cstdlib>
#include <cctype>
#include "luhn.h"

using namespace std;

int main(void)
{
	ssize_t totalCharsInput, bufferLength = 0;
	char **charsInput = NULL;

	// Note: we are working with the numerical integer value
	// of the chars, NOT the ASCII character representations
	// 4432522610104948
	int ccNumToVerify[16] = {4, 4, 3, 2,
				5, 2, 2, 6,
				1, 0, 1, 0,
				4, 9, 4, 8};

	bool isLuhnValid;
	int luhnDigit;

	luhnDigit = luhnCheckValid(ccNumToVerify);

	if(luhnDigit > 0 && luhnDigit < 10)
		cout << "This number passes the Luhn test." << endl;
	else if(luhnDigit < 0)
		cout << "This number appears to be invalid." << endl;
	else
	{
		cerr << "something weird happened..." << endl;
		exit(1);
	}

	return 0;
}
