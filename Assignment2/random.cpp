//
// random.cpp
// Within this code is the formulas and processes for actually creating the random numbers
//

#include "random.h"
#include <process.h>

#include <cassert>
#include <sys/types.h>
#include <iostream>



// Built-in constants

const unsigned long long a = 279470273ULL;
const unsigned long long m = 4294967291ULL;

// State of the random number generator

static unsigned int X;

void initializeWithSeed(unsigned int seed) {
	X = seed;
}

void initializeWithDefaultSeed() {
	initializeWithSeed(_getpid());
}

unsigned int nextRandom() {
	unsigned long long z;
	z = X;
	z *= a;
	z %= m;
	X = z;
	return X;
}

static double nextRandomAsDoubleFloat() {

	return nextRandom() / (double)m;
}


unsigned int nextRandomInRange(unsigned int upper) {
	return (unsigned int)(upper * nextRandomAsDoubleFloat());
}