#pragma once
#include "TicTacPlayer.h"
class TicTacRandomPleyer :
    public TicTacPlayer
{
public:
    TicTacRandomPleyer();
    virtual ~TicTacRandomPleyer();
    virtual bool MakeMove();
};

