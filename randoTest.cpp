/**
 * Unit Tests for Rando Test
**/
//make tests in here
#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, oneChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,false,false) );
}

TEST(RandoTest, twoChildrenSmile)
{
	Rando rando;
	ASSERT_FALSE( rando.shouldWorry(true,true,false) );
}

TEST(RandoTest, noChildrenSmile)
{
	Rando rando;
	ASSERT_FALSE( rando.shouldWorry(false,false,false) );
}

TEST(RandoTest, allNums)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisbleBy(9,3));
}

TEST(RandoTest, allNums2)
{
	Rando rando;
	ASSERT_FALSE( rando.isDivisbleBy(17,9));
}

TEST(RandoTest, allNums3)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisbleBy(100,10));
}

TEST(RandoTest, allNums4)
{
	Rando rando;
	ASSERT_FALSE( rando.isDivisbleBy(169,14));
}

TEST(RandoTest, allPrimes)
{
	Rando rando;
	ASSERT_TRUE( rando.isPrime(17));
}

TEST(RandoTest, allPrimes2)
{
	Rando rando;
	ASSERT_TRUE( rando.isPrime(23));
}

TEST(RandoTest, noPrimes)
{
	Rando rando;
	ASSERT_FALSE( rando.isPrime(9));
}

TEST(RandoTest, noPrimes2)
{
	Rando rando;
	ASSERT_FALSE( rando.isPrime(42));
}

TEST(RandoTest, Zero)
{
	Rando rando;
	ASSERT_TRUE( rando.nearestToZero(12,-13));
}

TEST(RandoTest, Zero2)
{
	Rando rando;
	ASSERT_TRUE( rando.nearestToZero(14,14));
}

TEST(RandoTest, Zero3)
{
	Rando rando;
	ASSERT_TRUE( rando.nearestToZero(101,101));
}

TEST(RandoTest, Zero4)
{
	Rando rando;
	ASSERT_TRUE( rando.nearestToZero(-1,1));
}
