#include <iostream>

using namespace std;

bool luhnCheckValid(char cardNumber[16])
{
	int sum = 0;
	bool parity = 16 % 2;

	for(int i=0; i < 16-1; ++i)
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

	return (cardNumber[16-1] == (10 - (sum % 10)) % 10);
	//return (cardNumber[16-1] == (9 - ((sum + 9) % 10)));
}
