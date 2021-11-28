#include <iostream>
#include "Vector.h"

int main()
{
	Vector* v1 = new Vector();
	v1->Show();
	v1->SetX(2);
	v1->SetY(3);
	v1->SetZ(4);
	v1->Show();
	std::cout << "Vector \"v1\" length: " << v1->GetLength() << "\n";
	delete v1;
	v1 = nullptr;

	Vector* v2 = new Vector(1, 1, 1);
	std::cout << "Vector \"v2\" length: " << v2->GetLength() << "\n";
	delete v2;
	v2 = nullptr;

	Vector* v3 = new Vector(-1, 0, 0);
	std::cout << "Vector \"v3\" length: " << v3->GetLength() << "\n";
	delete v3;
	v3 = nullptr;

	return 0;
}