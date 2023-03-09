#include "brick.h"

#include <math.h>

void set_brick_data(Brick* brick, double a, double b, double c)
{
	brick->a = a;
	brick->b = b;
	brick->c = c;
}

double calc_brick_surface(const Brick* brick)
{
	double surface = 2*(brick->a * brick->b + brick->a * brick->c + brick->b * brick->c);
	return surface;
}

double calc_brick_volume(const Brick* brick)
{
	double volume = brick->a * brick->b * brick->c;
	return volume;
}

void has_square_side(const Brick* brick)
{
	if(brick->a == brick->b || brick->a == brick->c)
	{
		printf("It has a square side!\n");
	}
	else if(brick->b == brick->a || brick->b == brick->c)
	{
		printf("It has a square side!\n");
	}
	else if(brick->c == brick->a || brick->c == brick->b)
	{
		printf("It has a square side!\n");
	}
	else
	{
		printf("It doesn't have a square side");
	}
}