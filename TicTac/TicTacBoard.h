#pragma once
#include "CellType.h";
#include "pch.h"
class TicTacBoard
{
private:
	unsigned int boardsize;
	CellType** cells;  
public:
	TicTacBoard(unsigned int size);
	virtual ~TicTacBoard();
	void Show();
	void SetCell(unsigned int xpos, unsigned int ypos, CellType ct);
};



