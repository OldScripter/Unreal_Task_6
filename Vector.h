#pragma once

#include <iostream>
#include <cmath>

class Vector
{
public:
	Vector() : x(0), y(0), z(0) {};
	Vector(double px, double py, double pz) : x(px), y(py), z(pz) {};
	~Vector() { std::cout << "Vector is deleted\n"; }

	/**
	* @brief Print the vector coords in console.
	*/
	void Show() const;
	/**
	* @brief Calculate vector length.
	* @return Vector length
	*/
	double GetLength() const;

	//Setters:
	void SetX(const double x);
	void SetY(const double y);
	void SetZ(const double Z);

	//Getters:
	double GetX() const;
	double GetY() const;
	double GetZ() const;

private:
	double x;
	double y;
	double z;
};