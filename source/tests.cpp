#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
//GCD
int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

TEST_CASE("describe_gcd","[gcd]")
{
REQUIRE( gcd (2 ,4) == 2);
REQUIRE( gcd (6 ,9) == 3);
REQUIRE( gcd (3 ,7) == 1);
}
//CHECKSUM
int checksum(int a)
{	
	int result = 0;
	while(a!=0)
	{		
		int temp = a%10;
		result= result+temp;
		a = (a-temp)/10;
	}
	return result;
}

TEST_CASE("describe_checksum","[checksum]")
{
REQUIRE( checksum (1234) == 10);
REQUIRE( checksum (7896) == 30);
REQUIRE( checksum (6611) == 14);

}
//sumMultiples
int sumMultiples()
{	
	int result = 0;
	for(int i=1; i<= 1000; i++)
	{
		if(i%3==0 || i%5==0)
		{
			result= result+i;
		}
	}
	return result;
}

TEST_CASE("describe_sumMultiples","[sumMultiples]")
{
REQUIRE( sumMultiples() == 234168);
}


//fract
float fract(float a)
{	
	int b = floor(a);
	float result = a-b;
	return result;
}

TEST_CASE("describe_fract","[fract]")
{
REQUIRE(0.3 == Approx(fract(1.3)));
REQUIRE(0.234 == Approx(fract(1.234)));
REQUIRE(0.557 == Approx(fract(2.557)));
}


//rodvol
float rodvol(float r, float h)
{	
	return 3.1415*pow(r,2)*h;
}

TEST_CASE("describe_rodvol","[rodvol]")
{
REQUIRE(6.283 == Approx(rodvol(1,2)));
REQUIRE(153.9335021973 == Approx(rodvol(3.5,4)));
REQUIRE(950.3037719727 == Approx(rodvol(5.5,10)));
}
int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}