#include <iostream>

using namespace std;

#define LUHN_NUMBER_LENGTH 16

int luhnCheckValid(char cardNumber[LUHN_NUMBER_LENGTH], bool hasLuhnDigit=true)
{
	int sum = 0;
	bool parity;
	int calculatedLuhnDigit;

	if(hasLuhnDigit)
		{ parity = LUHN_NUMBER_LENGTH % 2; }
	else
		{ parity = LUHN_NUMBER_LENGTH-1 % 2; }

	for(int i=0; i < LUHN_NUMBER_LENGTH-1; ++i)
	{
		if((i % 2) != parity)
		{
			sum += cardNumber[i];
		}
		else if(cardNumber[i] > 4)
		{
			sum += (2 * cardNumber[i] - 9);
		}
		else
		{
			sum += (2 * cardNumber[i]);
		}
		//cout << "DEBUG: index " << i+1 << ", digit: " << cardNumber[i] << ", running total: " << sum << endl;
	}
	//cout << "DEBUG: sum = " << sum << endl;

	calculatedLuhnDigit = (10 - (sum % 10)) % 10;
	if( !hasLuhnDigit || cardNumber[LUHN_NUMBER_LENGTH-1] == calculatedLuhnDigit )
		{ return calculatedLuhnDigit; }
		//return (cardNumber[LUHN_NUMBER_LENGTH-1] == (9 - ((sum + 9) % 10)));
	else
		{ return -1; }	//Luhn check FAILED

}
