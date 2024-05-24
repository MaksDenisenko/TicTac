#include "TicTacManager.h"

TicTacManager::TicTacManager()
{

}
TicTacManager::~TicTacManager()
{
	delete this->board, this->player1, this->player2;
}

bool TicTacManager::Init()
{
	unsigned int boardsize;
	string playerName;
	cout << "������� ����� ������ ���� (3-6): ";
	cin >> boardsize;
	if ((boardsize < 3) || (boardsize > 6))
	{
		cout << "�������� ����� ������ ����" << endl;
		return false;
	}
	this->board = new TicTacBoard(boardsize);
	this->player1 = new	TicTacPlayer();
	this->player2 = new TicTacPlayer();
	cin.ignore();
	cout << "������� ��� ������� ������ (��������� �): ";
	getline(cin, playerName);
	player1->SetupPlayer(playerName, CellType_X);
	cout << "������� ��� ������� ������ (��������� O): ";
	getline(cin, playerName);
	player2->SetupPlayer(playerName, CellType_O);
	player1->SetBoard(this->board);
	player2->SetBoard(this->board);
	currentPlayer = player1;

	return true;
}

void TicTacManager::ShowBoard()
{
	this->board->Show();
}

void TicTacManager::MakeMove()
{
	ShowBoard();
	while (!currentPlayer->MakeMove())
	{
		cout << "������������ ���, ���������� ��� ���" << endl;
		ShowBoard();
	}
	currentPlayer = (currentPlayer == player1) ? player2 : player1;
}