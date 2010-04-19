#include "vector2d.h"

Vector2D::Vector2D(double arg_x, double arg_y): x(arg_x), y(arg_y)
{
}

double Vector2D::getX() const
{
	return x;
}

double Vector2D::getY() const
{
	return y;
}

// The length of a vector is the square root of (x*x)+(y*y)
double Vector2D::length() const
{
	return sqrt(pow(x, 2) + pow(y, 2));
}

// The length between two vectors is
// the square root of (x_2 - x_1) * (x_2 - x_1) + (y_2 - y_1) * (y_2 - y_1)
double Vector2D::length(const Vector2D& w) const
{
	return sqrt(pow((w.getX() - x), 2) + pow((w.getY() - y), 2));
}

// The product of two vectors is x_1 * x_2 + y_1 * y_2
double Vector2D::product(const Vector2D& w) const
{
	return x * w.getX() + y * w.getY();
}

// The sum of a vector is a new vector with x_1 + x_2 and y_1 + y_2
Vector2D VectorSum(const Vector2D& v, const Vector2D& w)
{
	return Vector2D(v.x + w.x, v.y + w.y);
}

// The angle between two vectors is the product of v and w divided by v length and w length
double VectorAngle(const Vector2D& v, const Vector2D& w)
{
	return v.product(w) / (v.length() * w.length());
}

