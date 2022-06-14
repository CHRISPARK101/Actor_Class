#include<iostream>
#include "Actor.h"
using namespace std;

Actor::Actor():x{0},z{0},mType{MoveType::Right} //초기화
{

}

void Actor::Tick()
{
	switch (mType)
	{
	case MoveType::Right:
		if (x < 20) {
			x++;
		}
		else if (x >= 20) {
			mType = MoveType::Up;
		}
		break;
	case MoveType::Up:
		if (z < 20) {
			z++;
		}
		else if (z >= 20)
		{
			mType = MoveType::Left;
		}
		break;
	case MoveType::Left:
		if (x > 0) {
			x--;
		}
		else if (x <= 0)
		{
			mType = MoveType::Down;
		}
		break;
	case MoveType::Down:
		if (z > 0) {
			z--;
		}
		else if (z <= 0)
		{
			mType = MoveType::Right;
		}
	}
}

// (x = x, z = z) <--- 이렇게 출력
void Actor::PrintLocation()
{
	cout << "(x = " << x << " z = " << z << ")" << endl;
}
