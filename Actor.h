#pragma once

/*
* Actor Ŭ����
* �ɹ� ���� : MoveType mType, int x, int z
* private : MoveType mType - �ʱⰪ : MoveType::Right
* private : int x - �ʱⰪ : 0
* private : int z - �ʱⰪ : 0
*
* fuction(�Լ�)
* void Tick(); //main() �Լ��� while�� �ȿ��� ȣ���� ����
* void PrintLocation(); // (x = x, z = z) <--- �̷��� ���
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

