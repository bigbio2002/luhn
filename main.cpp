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
	/* char ccNumToVerify[] = {4, 1, 4, 2,
				3, 8, 3, 3,
				3, 5, 3, 2,
				5, 1, 8, 9}; */

	cout << "Enter number to test WITHOUT Luhn digit: ";
	totalCharsInput = getline(charsInput, bufferLength, cin);
	if(totalCharsInput == -1)
		exit(EXIT_FAILURE);

	//verify input
	for(std::iter i=charsInput.begin();i<totalCharsInput-1;i++)
	{
		
	}


	bool isLuhnValid;
	int luhnDigit;

	luhnDigit = luhnCheckValid(ccNumToVerify, false);

	if(luhnDigit > 0 && luhnDigit < 10)
		cout << "This number passes the Luhn test." << endl;
	else if(luhnDigit < 0)
		cout << "This number appears to be invalid." << endl;
	else
		exit(1);

	return 0;
}
