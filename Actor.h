#pragma once

/*
* Actor 클래스
* 맴버 변수 : MoveType mType, int x, int z
* private : MoveType mType - 초기값 : MoveType::Right
* private : int x - 초기값 : 0
* private : int z - 초기값 : 0
*
* fuction(함수)
* void Tick(); //main() 함수에 while문 안에서 호출할 예정
* void PrintLocation(); // (x = x, z = z) <--- 이렇게 출력
*/

enum class MoveType {
	Right,
	Up,
	Left,
	Down
};

class Actor
{
private:
	MoveType mType;
	int x;
	int z;

public:
	Actor();
	void Tick();
	void PrintLocation();
};

