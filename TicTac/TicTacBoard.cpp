#include "TicTacBoard.h"

TicTacBoard::TicTacBoard(unsigned int size)
{
	this->boardsize = size;
	cells = new CellType* [size];
	for (unsigned int i = 0; i < size; i++)
		cells[i] = new CellType[size];
	for (unsigned int i = 0; i < size; i++)
		for (unsigned int j = 0; j < size; j++)
			cells[i][j] = CellType_Empty;
}

TicTacBoard::~TicTacBoard()
{
	for (unsigned int i = 0; i < boardsize; i++)
		delete[]cells[i];
	delete[]cells;
}

void TicTacBoard::Show()
{
	cout << "  ";
	for (unsigned int i = 0; i < boardsize; i++)
		cout << i << " ";
	cout << endl;
	for (unsigned int i = 0; i < boardsize; i++)
	{
		cout << i << " ";
		for (unsigned int j = 0; j < boardsize; j++)
		{
			switch (cells[i][j])
			{
			case CellType_X:
				cout << "X";
				break;
			case CellType_O:
				cout << "O";
				break;
			case CellType_Empty:
				cout << "-";
				break;
			}
			cout << " ";
		}
		cout << endl;
	}
}

void TicTacBoard::SetCell(unsigned int xpos, unsigned int ypos, CellType ct)
{
	cells[xpos][ypos] = ct;
}

