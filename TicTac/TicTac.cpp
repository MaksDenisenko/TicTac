#include "pch.h"
#include "TicTacBoard.h"

int main()
{
	TicTacBoard* board;
	board = new TicTacBoard(5);
	board->Show();
	_getch();
	delete board;
}