#include <iostream>

using namespace std;

class Rational
{
public:
	long int getNumerator(void); 
	long int getDenominator(void);
	Rational();
	Rational(long int, long int);

	bool Rational :: isSame(const Rational& rational2) const;
	void Rational :: printRational() const;

	//I am unsure of types for the functions right now, initially set to void 
	void Rational :: addition(const Rational& rational2) const;
	void Rational :: subtraction(const Rational& rational2) const;
	//multiply, divide, less

private:
	long int numerator;		//numerator of the rational
	long int denominator;	//denominator of the rational

};
