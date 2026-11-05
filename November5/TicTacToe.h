#pragma once
#include <string>
#include <vector>

namespace TicTacToe
{
	using twoDGrid = std::vector<std::vector<std::string>>; //making a type alias for a 2D vector of strings (convient for tic tac toe grid)
	//std::vector<std::vector<std::string>> TicTacToeGrid = (3, std::vector<std::string>(3));

	//this function calls several other functions (helpers) and returns void (it just prints things)

	void playGame(twoDGrid& TicTacToeGrid);

	//this is a helper that is called by playeGame (because it would be too complicated otherwise)
	void updateGrid(twoDGrid& TicTacToeGrid, std::string theMove, std::string playerID);

	void printTheGrid(twoDGrid& TicTacToeGrid);

}