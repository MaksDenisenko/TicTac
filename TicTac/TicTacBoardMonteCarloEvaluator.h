#pragma once
#include "CellType.h" 
#include "TicTacBoard.h"
class TicTacBoardMonteCarloEvaluator
{
private:
	TicTacBoard *board;	
	int numGames;
	int numVictories;
	int numLosses;
	int numDraw;
	unsigned int xpos, ypos;
	CellType startCellType;
public:
	TicTacBoardMonteCarloEvaluator(TicTacBoard* board, int numIterations, CellType startCellType, unsigned int xpos, unsigned int ypos);
	~TicTacBoardMonteCarloEvaluator();
	void EvaluateBoard();
	void Evaluate();
};

