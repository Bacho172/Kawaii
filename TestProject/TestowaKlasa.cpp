#include "TestowaKlasa.h"

int TestowaKlasa::JakasPrywatna(double y)
{
	return (int)(y*y*y);
}

TestowaKlasa::TestowaKlasa(int g)
{
	int h = g * g;
}

void TestowaKlasa::JakasPublicznaMetoda(int x)
{
	int g = 0;
	g += x*x;
	g = g * g;
	g *= 24 - 18;
}
