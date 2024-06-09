#include "TicTacManager.h"
#include "TicTacHumanPlayer.h"
#include "TicTacComputerPlayer.h";

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
	int playertype;

	cout << "������� ����� ������ ���� (3-6): ";
	cin >> boardsize;
	if ((boardsize < 3) || (boardsize > 6))
	{
		cout << "�������� ����� ������ ����" << endl;
		return false;
	}
	this->board = new TicTacBoard(boardsize);

	cout << "������� ��� ������ �1 (1 - �������, ����� ������ ����� - ���������): ";
	cin >> playertype;
	if (playertype == 1)
		this->player1 = new TicTacHumanPlayer();
	else
		this->player1 = new TicTacComputerPlayer();
	cout << "������� ��� ������ �2 (1 - �������, ����� ������ ����� - ���������): ";
	cin >> playertype;
	if (playertype == 1)
		this->player2 = new TicTacHumanPlayer();
	else
		this->player2 = new TicTacComputerPlayer();
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
	if (this->board->CheckEndCondition())
	{
		if (this->board->IsVictory())
			cout << "����� " << currentPlayer->GetName() << " �������!" << endl;
		else
			cout << "�����" << endl;
		this->bGameFinished = true;
		ShowBoard();
		return;
	}
	currentPlayer = (currentPlayer == player1) ? player2 : player1;
}

bool TicTacManager::IsGameFinished()
{
	return bGameFinished;
}