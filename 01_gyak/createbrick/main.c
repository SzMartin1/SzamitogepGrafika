#include "brick.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
	Brick brick;
	double surface;
	double volume;
	
	set_brick_data(&brick, 5, 10, 8);
	surface = calc_brick_surface(&brick);
	volume = calc_brick_volume(&brick);
	has_square_side(&brick);
	
	printf("Brick surface: %lf\n", surface);
	printf("Brick volume: %lf\n", volume);
	
	return 0;
}