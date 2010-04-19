#include "Vector3d.h"

using namespace std;

double rad2deg(double num)
{
	return acos(num) * (180 / PI);
}

// Simple tests for the linear functions
int main()
{
	Vector3D v(5.0, 2.0, -1.0);
	Vector3D w(4.0, 3.0, -3.0);
	double x = VectorAngle(v,w);

	cout << rad2deg(x) << endl;

	return 0;
}
