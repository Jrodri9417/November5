// November5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TicTacToe.h"


void demoPassByReference()
{

	int a = 123;

	int& aliasOfA = a; //deep copy

	std::cout << "the value os a is: " << std::endl;
	std::cout << "The value of the copy of a is: " << aliasOfA << std::endl;

	//now decide to change the value of a
	a = 456;
	std::cout << "the value of a is now: " << a << std::endl;
	std::cout << "the value of the copy of a is now: " << aliasOfA << std::endl;

}


	//std::cout << "Welcome to Tic Tac Toe!" << std::endl;
int main()
	{
		//using number = int

		//number myFavoriteNumber = 123;

		std::string fillerCharacter = "a"; //sometihing that holds the spot until x or o takes its sport 
		//so we dont have an empty space char

		std::vector<std::vector<std::string>> TicTacToeGrid(3, std::vector<std::string>(3));
		//What does the line above do?
		//it makes an empty 2D array of size 3x3

		//TicTacToeGrid[0][0] = "x";

		
		TicTacToe::playGame(TicTacToeGrid);

	
	}