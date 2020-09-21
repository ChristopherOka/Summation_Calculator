#include "functions.h"
#include <iostream>

/*
1. Recieve first number from user
2. Recieve ending number from user
3. Check if the second number is smaller than the first, and give an error message if it is
4. Perform a calculation using the Sum = (n/2) (2a + (n-1)d) formula (assume d = 1) 
5. Output the answer
*/

void input() { //function for inputting starting and ending values
	char y_n = 'y'; //declare char variable 'y_n' for the user to answer if they want to continue using the program
	while (y_n == 'y') {
		double START; //declaring starting number variable
		double END; //declaring final number variable
		std::cout << "Enter a starting number and an ending number and this program will sum all the numbers from the starting number to the ending number.\n";
		std::cout << "Enter a starting number: ";
		std::cin >> START; //user inputs the starting number
		std::cout << "Enter the final number: ";
		std::cin >> END; //user inputs the final number
		if (END < START) { //checks if the final number is smaller than the initial number, ends the function if it is
			std::cout << "Sorry, the final number must be greater than the starting number\n";
			return;
		}
		summation(START, END); //summation function is run with the starting and ending numbers as its parameters
		std::cout << "Would you like to try again? (y/n): ";
		std::cin >> y_n; //user inputs y/n if they would like to try again. If 'y', the function is repeated

	}
}
void summation(double FIRST_NUMBER, double FINAL_NUMBER) { //summation function for summing all numbers from the starting to the ending number
	double n = FINAL_NUMBER - FIRST_NUMBER + 1; //declare variable 'n' as the number of terms that are being summed (n is easier to read with the formula)
	double& a = FIRST_NUMBER; //declare variable 'a' as a reference to the starting number, 'a' is easier to read with the formula
	double sum; //declare variable sum which will be the final summation of all the terms
	sum = (n / 2) * ((2 * a) + (n - 1)); //summation calculation

	

	std::cout << "The summation of all numbers from " << FIRST_NUMBER << " to " << FINAL_NUMBER << " is: " << sum << std::endl; //outputs results

}

