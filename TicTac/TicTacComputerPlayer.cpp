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
	cout << "����� " << name << ", ��� ���..." << endl;
	cout << "������� ������: ";
	cin >> row;
	cout << "������� �������: ";
	cin >> col;
	if (this->board->CheckLegal(row, col))
	{
		this->board->SetCell(row, col, this->cellType);
		return true;
	}

	return false;
}
