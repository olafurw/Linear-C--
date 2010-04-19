#include "Vector3d.h"

Vector3D::Vector3D(double arg_x, double arg_y, double arg_z): Vector2D(arg_x, arg_y), z(arg_z)
{
}

double Vector3D::getZ() const
{
	return z;
}

double Vector3D::length() const
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

double Vector3D::length(const Vector3D& w) const
{
	return sqrt(pow((w.getX() - x), 2) + pow((w.getY() - y), 2) + pow((w.getZ() - z), 2));
}

double Vector3D::product(const Vector3D& w) const
{
	return x * w.getX() + y * w.getY() + z * w.getZ();
}

Vector3D VectorSum(const Vector3D& v, const Vector3D& w)
{
	return Vector3D(v.x + w.x, v.y + w.y, v.z + w.z);
}

double VectorAngle(const Vector3D& v, const Vector3D& w)
{
	return v.product(w) / (v.length() * w.length());
}
