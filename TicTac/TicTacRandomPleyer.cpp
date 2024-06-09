#include "TicTacRandomPleyer.h"

TicTacRandomPleyer::TicTacRandomPleyer()
{
}

TicTacRandomPleyer::~TicTacRandomPleyer()
{
}

bool TicTacRandomPleyer::MakeMove()
{
	unsigned int row, col;

	row = rand() % 6;
	col = rand() % 6;

	if (this->board->CheckLegal(row, col))
	{
		this->board->SetCell(col, row, this->cellType);
		return true;
	}

	return false;
}
