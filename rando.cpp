#include "rando.h"
#include <stdlib.h>

//write functions in here
/**
 * Worry if only one child is smiling or if all children are smiling
**/
bool Rando::shouldWorry(bool childASmile, bool childBSmile, bool childCSmile)
{
	if( childASmile && childBSmile && childCSmile )
		return true;
	else if( childASmile ^ childBSmile ^ childCSmile )
		return true;
	else
		return false;
}
/**
 * Determines if first or second are evenly divisible by the other.
**/
bool Rando::isDivisbleBy(int first, int second)
{
	if(first % second == 0)
	{
		return true;
	}
	else
	{
	        return false;
	}
}

/**
 * Given a number, num, says whether or not that number is prime
 * (that is, only evenly divisible by itself and 1. For the sake
 * of this function, do NOT consider 0 prime)
**/
bool Rando::isPrime(int num)
{
	for(int i=2; i<num; i++)
	{
		if( num % i == 0)
		{
	 		return false;
		}
	}

	return true;
}

/**
 * Given two numbers, first and second, return the value of the one
 * that is closest to zero without actually being zero.
**/
int Rando::nearestToZero(int a, int b)
{
	int c = 0-a;
	int d = 0-b;
        int e,f;
	e = abs(c);
	f = abs(d);
	if( e < f)
	{
		return e;
	}
	else if( f < e)
	{ 
		return f;
	}
	else // at this point, f=e so doesn't matter which return
	{
		return -1;
	}
	return 0;
}
