/*Заголовочный файл класса Прямоугольник*/
class Rectangle
{
protected:// модификатор доступа защищенный
		double a, b;
public: // модификатор доступа публичный
	Rectangle();//конструктор без параметра
	Rectangle(double a, double b);//конструктор с параметром 

	void SetA(double a);// Сеттер Ширины
	void SetB(double b);// Сеттер Высоты

	double GetA()const;// Геттер Ширины
	double GetB()const;// Геттер Высоты

	double Square()const;// Функция расчитывающая площадь прямоугольника
	double Perimeter()const; // Функция расчитывающая периметр прямоугольника


};

