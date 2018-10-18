#include <iostream>
#include <iomanip>
#include <string>
#include "gcd.h"

using namespace std;

class Rational
{
public:
	long int getNumerator(void); 
	long int getDenominator(void);
	Rational();
	Rational(long int, long int);

	bool isSame(Rational& rational2);
	void printRational();

	//I am unsure of types for the functions right now, initially set to void 
	Rational addition(Rational& rational2);
	Rational subtraction(Rational& rational2);
	//multiply, divide, less

//private:
	long int numerator;		//numerator of the rational
	long int denominator;	//denominator of the rational

};
