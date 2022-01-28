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
	if (player
		)
}
