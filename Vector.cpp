#include "Vector.h"

void Vector::Show() const
{
	std::cout << "(" << x << "; " << y << "; " << z << ")\n";
}

double Vector::GetLength() const
{
	return std::sqrt(x * x + y * y + z * z);
}

void Vector::SetX(const double value)
{
	x = value;
}

void Vector::SetY(const double value)
{
	y = value;
}

void Vector::SetZ(const double value)
{
	z = value;
}

double Vector::GetX() const
{
	return x;
}

double Vector::GetY() const
{
	return y;
}

double Vector::GetZ() const
{
	return z;
}