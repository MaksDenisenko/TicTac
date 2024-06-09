#include "TicTacBoardMonteCarloEvaluator.h"

TicTacBoardMonteCarloEvaluator::TicTacBoardMonteCarloEvaluator(TicTacBoard* board, int numIterations, CellType startCellType, unsigned int xpos, unsigned int ypos)
{
	this->board = board;
	this->numGames = numIterations;
	this->numDraw = 0;
	this->numVictories = 0;
	this->numLosses = 0;
	this->xpos = xpos;
	this->ypos = ypos;
	this->startCellType = startCellType;
}
void TicTacBoardMonteCarloEvaluator::EvaluateBoard()
{
	TicTacBoard* b = new TicTacBoard(this->board);
}
