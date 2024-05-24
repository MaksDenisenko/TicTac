#include "pch.h"
#include "TicTacManager.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	TicTacManager manager;
	if (!manager.Init())
	{
		cout << "Неверные данные, выходим...";
		_getch();
		return 0;
	}
	while (true)
	{
		manager.MakeMove();
	}
}