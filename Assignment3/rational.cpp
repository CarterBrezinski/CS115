#include "rational.h"

Rational :: Rational()
{
	numerator = 0;
	denominator = 0;
}
long int Rational :: getDenominator(void)
{
	return denominator;
}
long int Rational :: getNumerator(void)
{
	return numerator;
}

/*
Print out format:
- If the numerator is zero, then a zero character ('0') is printed.
- Otherwise, the following printing procedure is applied.
- If the numerator and the denominator have the same sign then no sign
will be printed.
- Otherwise, a negative sign ('-') is printed.
*/

void Rational :: printRational() const
{
	bool negative = false; //naturally off
	unsigned int num = abs(numerator);
	unsigned int denom = abs(denominator);

	if (numerator == 0)
	{
		cout << '0' << endl;
	}
	else
	{
		if()
		{ 
			
			//N < 0 && D < 0
			//no signs applied infront
			
		}
		else if()
		{
			
			//N < 0 && D > 0
			//(-) sign applied infront
			//negative = true;
			
		}
		else if()
		{
			
			//N > 0 && D < 0
			//(-) sign applied infront
			//negative = true
			
		}

		/*
		- Following the above, let N be the absolute value of the numerator and
		D be the absolute value of the denominator.
		- If N < D then "N/D" should be printed after the sign (if there is
		one).
		- If N ? D then the following printing procedure is applied.
		Let Q = N / D and R = N % D.
		If R = 0, simply print Q after the sign (if there is one).
		If R > 0 then
		print "Q+R/D" if a negative sign has NOT been printed
		print "Q-R/D" if a negative sign has been printed
		*/

		if ()
		
	}
}

bool Rational :: isSame(const Rational& rational2) const
{
	bool compare;
	if (numerator / denominator == rational2.numerator / rational2.denominator)
		compare = true;
	else
		compare = false;
	return compare;
}

void Rational::addition(const Rational& rational2) const;
{
	//equate least common multiple
	//solve
	//normalize
}
void Rational::subtraction(const Rational& rational2) const;
{
	//equate least common multiple
	//solve
	//normalize
}