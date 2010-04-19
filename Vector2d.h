#include <iostream>
#include <cmath>

const double PI = 3.141592653589793238;

using namespace std;

// Base vector class for 2D vectors
class Vector2D
{
	protected:
		double x;
		double y;

	public:
		Vector2D(double arg_x, double arg_y);
		double getX() const;
		double getY() const;
		virtual double length() const;
		virtual double length(const Vector2D& w) const;
		virtual double product(const Vector2D& w) const;
		friend Vector2D VectorSum(const Vector2D& v, const Vector2D& w);
		friend double VectorAngle(const Vector2D& v, const Vector2D& w);
};
