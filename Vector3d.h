#include "vector2d.h"

using namespace std;

class Vector3D: protected Vector2D
{
	protected:
		double z;

	public:
		Vector3D(double arg_x, double arg_y, double arg_z);
		double getZ() const;
		double length() const;
		double length(const Vector3D& w) const;
		double product(const Vector3D& w) const;
		friend Vector3D VectorSum(const Vector3D& v, const Vector3D& w);
		friend double VectorAngle(const Vector3D& v, const Vector3D& w);
};

