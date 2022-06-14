#include<iostream>
#include"Actor.h"
#include<Windows.h>
using namespace std;

int main()
{
	Actor actor;
	while (1)
	{
		system("cls");	

		actor.PrintLocation();
		actor.Tick();
		Sleep(150);
	}
}

