#include "rational.h"

Rational :: Rational()
{
	numerator = 0;
	denominator = 0;
}
long int Rational :: getDenominator()
{
	return denominator;
}
long int Rational::getNumerator()
{
	return numerator;
}

void Rational :: printRational()
{
	bool negative = false; //naturally off
	string sign;
	int R;
	int Q;
	unsigned int num = abs(numerator);
	unsigned int denom = abs(denominator);

	if (numerator == 0)
	{
		cout << '0' << endl;
	}
	else
	{
		if(numerator < 0 && denominator < 0)
		{ 
			//no numbers are negative
			// therefore a space will be applied infront
			negative = false;
			sign = " ";
		}
		else if(numerator < 0 && denominator > 0)
		{
			//one number will be negative
			// therefore a (-) sign will be applied infront
			negative = true;
			sign = "-";
		}
		else if(numerator > 0 && denominator < 0)
		{
			//one number will be negative
			// therefore a (-) sign will be applied infront
			negative = true;
			sign = "-";
		}

		if (num < denom)
		{
			cout << sign << numerator << "/" << denominator << endl;
		}
		else if (num > denom)
		{
			Q = num / denom;
			R = num % denom;
			//If remainder = 0
			if (R == 0)
			{
				cout << sign << Q << endl;
			}
			//If remainder is greater than 0, print the 
			else if (R > 0)
			{
				if (negative == true)
				{
					cout << Q << sign << R << "/" << denominator << endl;
				}
				else if (negative == false)
				{
					cout << Q << sign << R << "/" << denominator << endl;
				}
			}
		}
		
	}
}

bool Rational :: isSame(Rational& rational2)
{
	bool compare;
	if (numerator / denominator == rational2.numerator / rational2.denominator)
		compare = true;
	else
		compare = false;
	return compare;
}

Rational Rational::addition(Rational& rational2)
{
	Rational rational1;
	Rational sum;
	long int lowestCommonMultiple;
	//equate least common multiple
	lowestCommonMultiple = lcm(denominator, rational2.denominator);
	numerator = ((numerator*lowestCommonMultiple) / denominator);
	rational2.numerator = ((rational2.numerator*lowestCommonMultiple) / rational2.denominator);
	//solve top half
	sum.numerator = numerator + rational2.numerator;
	denominator = lowestCommonMultiple;
	//normalize

	return sum;
}
Rational Rational::subtraction (Rational& rational2)
{
	Rational rational1;
	Rational sum;
	long int lowestCommonMultiple;
	//equate least common multiple
	lowestCommonMultiple = lcm(denominator, rational2.denominator);
	numerator = ((numerator*lowestCommonMultiple) / denominator);
	rational2.numerator = ((rational2.numerator*lowestCommonMultiple) / rational2.denominator);
	//solve top half
	sum.numerator = numerator - rational2.numerator;
	denominator = lowestCommonMultiple;
	//normalize

	return sum;
}