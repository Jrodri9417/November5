#include "TicTacToe.h"

#include <iostream>
#include <string>

void TicTacToe::playGame(twoDGrid& TicTacToeGrid)
{
	//for(), this is not a good idea
	bool isGameWon = false;
	int moveCount = 0;

	while (isGameWon == false)
	{
		//prompt players for moves
		printTheGrid(TicTacToeGrid);

		std::cout << "Player x, enter your move: " << std::endl;
		std::cout << "Enter the row number (0-2) " << std::endl; //doing this prevents the user from having to say "row 0 column 1" or "row 2 column 0" and instead just say "01" or "20"
		std::cout << "Enter the column number (0-2): " << std::endl;
		std::cout << "Enter your move in the for " << std::endl;


		std::string playerxMove;

		std::getline(std::cin, playerxMove);

		updateGrid(TicTacToeGrid, playerxMove, "x");
		moveCount = moveCount + 1;

		if (moveCount >= 0)
		{
			isGameWon = checkForWin(TicTacToeGrid);

			if (isGameWon == true)
			{
				break;
			}
		}

		std::cout << "After the player x made a move, the grid looks like: " << std::endl;
		printTheGrid(TicTacToeGrid);


		//Player o's turn
		std::cout << std::endl << std::endl;
		std::cout << "Player o, enter your move: " << std::endl;

		std::string playeroMove;

		std::getline(std::cin, playeroMove);

		updateGrid(TicTacToeGrid, playeroMove, "o");
		moveCount++;

		printTheGrid(TicTacToeGrid);

		if (moveCount >= 5)
		{
			isGameWon = checkForWin(TicTacToeGrid);
		}



		//this is the end of the playGame function, it will return to main and end the progra
	}

	void TicTacToe::updateGrid(twoDGrid& TicTacToeGrid, std::string theMove, std::string playerID)
	{
		//1st row
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

		//2nd row 
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

		//3rd row
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
				std::cout << "|" << TicTacToeGrid[row][col];
			}
			std::cout << std::endl;
			//std::cout <<
			//std::cout << "______" << std::endl;
		}
	}


}

bool TicTacToe::checkForHorizontalWin(const twoDGrid& TicTacToeGrid)
{
	for (int row = 0; row < 3; ++row)
	{
		if (TicTacToeGrid[row][0] == TicTacToeGrid[row][1] 
			&& 
			TicTacToeGrid[row][1] == TicTacToeGrid[row][2])
		{
			std::cout << "Player " << TicTacToeGrid[row][0] << " Victory" << std::endl;
			return true;
		}
	}

	return false; 
	//if (checkForHorizonatalWin(TicTacToeGrid)) == true)
	//for (int variableName; sadfasdf; asdfasdf)
	//{

	//}
	
	//return false; 
//	if (TicTacToeGrid[0[0] == TicTacToe])
//
//}
//bool TicTacToe::checkForVerticalalWin(const twoDGrid& TicTacToeGrid) 
//	{
//		return true;
//	}
//
//bool TicTacToe::checkForDiagonalWin(cont twoDGrid& TicTacToeGrid) == true)
//	{
//		return true:
//	}
//
//	else 
//	{
//		return false;
//	}
//
//	//return false;//unreachable code, but the compiler will complain if we dont have it

}