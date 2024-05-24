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
	cout << "����� " << name << ", ��� ���..." << endl;
	cout << "������� ������: ";
	cin >> row;
	cout << "������� �������: ";
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