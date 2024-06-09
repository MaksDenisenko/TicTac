#include "TicTacComputerPlayer.h"

TicTacComputerPlayer::TicTacComputerPlayer()
{
}

TicTacComputerPlayer::~TicTacComputerPlayer()
{
}

bool TicTacComputerPlayer::MakeMove()
{
	unsigned int row, col;
	cout << "Игрок " << name << ", ваш ход..." << endl;
	cout << "Введите строку: ";
	cin >> row;
	cout << "Введите столбец: ";
	cin >> col;
	if (this->board->CheckLegal(row, col))
	{
		this->board->SetCell(row, col, this->cellType);
		return true;
	}

	return false;
}
