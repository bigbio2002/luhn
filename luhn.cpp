bool luhnCheckValid(char cardNumber[16])
{
	int sum = 0;
	bool parity = cardNumber[16-1] % 2;

	for(int i=0; i < 16; ++i)
	{
		if(i % 2 != parity)
		{
			sum += cardNumber[i];
		}
		else if(cardNumber[i] > 4
		{
			sum += 2 * cardNumber[i] - 9;
		}
		else
		{
			sum += 2 * cardNumber[i];
		}
	}

	return cardNumber[16-1] == (10 - (sum % 10));
}
