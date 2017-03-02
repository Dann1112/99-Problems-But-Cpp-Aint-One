/*
Temperature Converter Challenge
Credit: Denis Meyer

In this challenge, write a program that takes in three arguments,
a start temperature (in Celsius), an end temperature (in Celsius)
and a step size. Print out a table that goes from the start temperature
to the end temperature, in steps of the step size; you do not actually
need to print the final end temperature if the step size does not exactly
match.

You should perform input validation: do not accept start temperatures less
than a lower limit (which your code should specify as a constant)
or higher than an upper limit (which your code should also specify).

You should not allow a step size greater than the difference in temperatures.
(This exercise was based on a problem from C Programming Language). 

*/

#include <iostream>

int main(){

	const int LOWEST_TEMP = -10;
	const int HIGHEST_TEMP = 40;
	int initial, final, step;
	int flag = 0;

	std::cout << "=====TEMPERATURE CHALLENGE=====" << std::endl;

	do{

		if(flag == 1)
			std::cout << "Value is off limits or incorrect. Try again please." << std::endl;

		std::cout << "Type the INITIAL temperature (Higher than " << LOWEST_TEMP << " and lower than "
		<< HIGHEST_TEMP << "): ";
		std::cin >> initial;
		flag = 1;

	}while(initial < LOWEST_TEMP || initial > HIGHEST_TEMP);

	flag = 0;

	do{

		if(flag == 1)
			std::cout << "Value is off limits or incorrect. Try again please." << std::endl;

		std::cout << "Type the FINAL temperature (Higher than " << LOWEST_TEMP << " and lower than "
		<< HIGHEST_TEMP << "): ";
		std::cin >> final;
		flag = 1;

	}while(final < LOWEST_TEMP || final > HIGHEST_TEMP || final <= initial);

	flag = 0;

	do{

		if(flag == 1)
			std::cout << "Value is off limits or incorrect. Try again please." << std::endl;

		std::cout << "Type the STEP SIZE: ";
		std::cin >> step;
		flag = 1;

	}while(step >= (final-initial));

		std::cout << "\n\n******************" << std::endl;

	do{
		std::cout << initial <<"°C" << std::endl;
		
		initial += step;
	} while(initial <= final);
	
	std::cout << "******************" << std::endl;


	return 0;
}
