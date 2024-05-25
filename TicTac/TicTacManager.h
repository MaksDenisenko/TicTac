#pragma once
#include "TicTacBoard.h"
#include "TicTacPlayer.h"
class TicTacManager
{
private:
	TicTacBoard* board;
	TicTacPlayer* player1;
	TicTacPlayer* player2;
	TicTacPlayer* currentPlayer;
	bool bGameFinished = false;
public: 
	TicTacManager();
	virtual ~TicTacManager();
	bool Init();
	void ShowBoard();
	void MakeMove();	
	bool IsGameFinished();
};

