#include <iostream>
#include "Rectangle.h";
using namespace std;

int main()
{
	Rectangle rec;
	double a,b;
	cin >> a;
	cin >> b;
	rec.SetA(a);
	rec.SetB(b);
	cout <<"Square: "<< rec.Square() << endl;
	cout << "Perimeter: " << rec.Perimeter() << endl;
	
	//вывод фигуры на экран 
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < a; j++)
			cout << "*";
		cout << endl;
	}

}

