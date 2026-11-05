#include "TicTacToe.h"

#include <iostream>
#include <string>

void TicTacToe::playGame(twoDGrid& TicTacToeGrid)
{
	std::cout << "Player x, enter your move: " << std::endl;
	std::cout << "Enter the row number (0-2) " << std::endl; //doing this prevents the user from having to say "row 0 column 1" or "row 2 column 0" and instead just say "01" or "20"
	std::cout << "Enter the column nu (0-2): " << std::endl;
	std::cout << "Enter your move in the for " << std::endl;


	std::string playerxMove;

	std::getline(std::cin, playerxMove);

	updateGrid(TicTacToeGrid, playerxMove, "x");

	printTheGrid(TicTacToeGrid);


	//Player o's turn
	std::cout << std::endl << std::endl;
	std::cout << "Player o, enter your move: " << std::endl;

	std::string playeroMove;

	std::getline(std::cin, playeroMove);

	updateGrid(TicTacToeGrid, playeroMove, "o");

	printTheGrid(TicTacToeGrid);


	//this is the end of the playGame function, it will return to main and end the progra
}

void TicTacToe::updateGrid(twoDGrid& TicTacToeGrid, std::string theMove, std::string playerID)
{
	if (theMove == "a")
	{
		TicTacToeGrid[0][0] = playerID;
	}
	else if (theMove == "b")
	{
		TicTacToeGrid[0][1] = playerID;
	}
	else if (theMove == "c")
	{
		TicTacToeGrid[0][2] = playerID;
	}
	else if (theMove == "d")
	{
		TicTacToeGrid[1][0] = playerID;
	}
	else if (theMove == "e")
	{
		TicTacToeGrid[1][1] = playerID;
	}
	else if (theMove == "f")
	{
		TicTacToeGrid[1][2] = playerID;
	}
	else if (theMove == "g")
	{
		TicTacToeGrid[2][0] = playerID;
	}
	else if (theMove == "h")
	{
		TicTacToeGrid[2][1] = playerID;
	}
	else if (theMove == "i")
	{
		TicTacToeGrid[2][2] = playerID;
	}
}

void TicTacToe::printTheGrid(twoDGrid& TicTacToeGrid)
{
	for (int row = 0; row < TicTacToeGrid.size(); ++row)
	{
		for (int col = 0; col < TicTacToeGrid[0].size(); ++col)
		{
			std::cout << TicTacToeGrid[row][col] << " ";
		}
		std::cout << std::endl;
	}
}