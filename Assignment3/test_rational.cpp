#include "rational.h"
#include "gcd.h"

int main()
{
	Rational rational1;
	Rational rational2;
	long int numerator;
	long int denominator;

	numerator = Rational1.getNumerator();

	denominator = Rational1.getDenominator();





	Rational totalHarmonic;
	//Harmonic series calculation (H10)
	for (int i = 1; i < 11; i++)
	{
		totalHarmonic = totalHarmonic.addition(new Rational(1, i));

	}
	




}

/*
Find H(10) using the proper formatting:
[For loop, simple adding statement, keep adding til 1/i = 10]
[7381/2520]
[2.92896...]

Find S(10) using the proper formatting:
[For loop, changing to addition or subtraction based on i, if statement, keep going till i = 10 for i/j and j = i+1]
[-7303/27720]
[-0.26345...]

Find the smallest positive integer n so that H(n) is larger than the rational number 301/100 = 3.01...
[n = 11]

Find the positive integer n so that S(n) = 533/840
[n = 7 ]

Find H(10) x S(10)
[-0.77165..]
[throw results through the multiplication function]

Find H(10) / S(10)
[-11.11748]
[throw results through the division function]
*/
