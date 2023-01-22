#pragma once

class Vector2d
{
public:
	void setX(float x_)
	{
		x = x_*2; // multiplicando por 2
	}

	float getX()
	{
		return x;
	}

private:
	float x;
	float y;
};



