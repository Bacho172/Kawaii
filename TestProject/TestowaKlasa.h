#ifndef TestowaKlasa

#include <string>
#include<iostream>


class TestowaKlasa
{
	private:
		int JakasPrywatna(double y);

	public:
		TestowaKlasa(int g);
		void JakasPublicznaMetoda(int x);
		void Napis1(int a) {  std::cout << "Wprowadzona liczba to: " << a << std::endl; };
};


#endif
class TestowaKlasa;