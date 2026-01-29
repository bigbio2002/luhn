#include <iostream>
#include <cstdlib>

using namespace std;

#define LUHN_NUMBER_LENGTH 16

int luhnCheckValid(int cardNumber[LUHN_NUMBER_LENGTH], bool hasLuhnDigit=true)
{
	int sum = 0;
	bool parity;
	int calculatedLuhnDigit;

	int lengthWithoutLD = LUHN_NUMBER_LENGTH;
	if(hasLuhnDigit)
		{ lengthWithoutLD -= 1; }

	parity = lengthWithoutLD % 2;

	for(int i=0; i < lengthWithoutLD; ++i)
	{
		if((i % 2) == parity)
		{
			sum += cardNumber[i];
		}
		else if(cardNumber[i] > 4)
		{
			sum += (2 * cardNumber[i] - 9);
		}
		else
		{
			sum += 2 * cardNumber[i];
		}
		//cout << "DEBUG: index " << i+1 << ", digit: " << cardNumber[i] << ", running total: " << sum << endl;
	}
	//cout << "DEBUG: sum = " << sum << endl;

	calculatedLuhnDigit = (10 - (sum % 10)) % 10;
	if( !hasLuhnDigit || cardNumber[lengthWithoutLD] == calculatedLuhnDigit )
		{ return calculatedLuhnDigit; }
		//return (cardNumber[LUHN_NUMBER_LENGTH-1] == (9 - ((sum + 9) % 10)));
	else
		{ return -1; }	//Luhn check FAILED

}
