#ifndef BRICK_H
#define BRICK_H

/**
 * Data of a brick object in Descartes coordinate system
 */
typedef struct Brick
{
	double a;
	double b;
	double c;
} Brick;

/**
 * Set the data of the brick
 */
void set_brick_data(Brick* brick, double a, double b, double c);

/**
 * Calculate the surface of the brick.
 */
double calc_brick_surface(const Brick* brick);

/**
 * Calculate the volume of the brick.
 */
double calc_brick_volume(const Brick* brick);

/**
 * Checking if the brick has a square side.
 */
void has_square_side(const Brick* brick);

#endif // BRICK_H