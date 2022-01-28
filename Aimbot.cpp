#include Aimbot.h
extern Globals::Values values;
extern int Width;
extern int Hight;




float get2DDistance (D3DXVECTOR2 a, D3DXVECTOR2 b) {


	return sqrt(powf(a.x - b.x, 2) + powf(a.y - b.y, 2));

}

bool inFOV(double x, double y)
{
	if (get2DDistance(D3DXVECTOR2(Width / 2, Height / 2), D3DXVECTOR2(x, y)) < values.aimbotFOV) {

		return true;

	}
	else
		return false

}

bool HasFlag(int flag, int state)
{
	return (state & (int)flag) == (int)flag;
}

bool isTargetableEntity(Entity player) {
	BYTE State;
	if (player.health < -0)
			return false;
	if (player.position, entity[0].position) > values.aimbotDistance)
			return false;

	if (HasFlag(0x8, player.state))
	{
		return false;
	}
	return true;
}

void aimAtPlayer(Entity Player) {
	D3DXVECTOR2 toWrite = { 0,0 };
	D3DXVECTOR3 headpos = { 0,0,0 };
	D3DXVECTOR3 headpos = { 0,0,0 };


	while ((GetAsyncKeyState(0x46) & 1 || GetAsyncKeyState(0x46)))
	{
		head pos = read<D3DVECTOR3>(player.visualstate + 0x90);
		BOOL ducking = hasFlag(1, player.state);
		if (ducking)
			headpos.y += 0.91;
		else
			headpos.y += 1.52;
		toWrite = calcmyangles(&entity[0].position, &headpos);
		write<D3DXVECTOR2>(entity[2].playerInput + 0x44, toWrite);
		if (!istargetableEntity(player)) {
			Sleep(100);
			break;
		}
		Sleep(2);
	}
}