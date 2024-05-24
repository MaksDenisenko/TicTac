#include "pch.h"
#include "TicTacBoard.h"

int main()
{
	TicTacBoard* board;
	board = new TicTacBoard(5);
	board->SetCell(0, 1, CellType_O);
	board->Show();
	_getch();
	delete board;
}