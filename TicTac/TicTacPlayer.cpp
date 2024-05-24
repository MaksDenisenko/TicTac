#include "TicTacPlayer.h"
TicTacPlayer::TicTacPlayer()
{

}
TicTacPlayer::~TicTacPlayer()
{

}


void TicTacPlayer::SetupPlayer(string name, CellType cellType)
{
	this->name = name;
	this->cellType = cellType;
}

void TicTacPlayer::SetBoard(TicTacBoard* board)
{
	this->board = board;
}

bool TicTacPlayer::MakeMove()
{
	unsigned int row, col;
	cout << "Игрок " << name << ", ваш ход..." << endl;
	cout << "Введите строку: ";
	cin >> row;
	cout << "Введите столбец: ";
	cin >> col;
	if (this->board->CheckLegal(col, row))
	{
		this->board->SetCell(col, row, this->cellType);
		return true;
	}
	
	return false;
}

string TicTacPlayer::GetName()
{
	return this->name;
}