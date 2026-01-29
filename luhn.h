#ifndef _LUHN_H_
#define _LUHN_H_

/* the first parameter takes an array of digits to check, as their written ASCII
   representation. this array must include a slot for the Luhn digit at the end,
   whether it is present or needs to be calculated. if the Luhn is unknown and
   needs calculation, the value of the placeholder does not matter. the second
   parameter indicates whether the Luhn digit is part
   of the input digits and a check is requested, or if the Luhn digit is to be
   calculated. function returns the calculated Luhn digit if 2nd param is false.
   if second parameter is true, return the Luhn digit if it is correct, otherwise
   return a negative number to indicate a failed check */

int luhnCheckValid(int[], bool=true);

#endif
