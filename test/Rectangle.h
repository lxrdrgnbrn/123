/*������������ ���� ������ �������������*/
class Rectangle
{
protected:// ����������� ������� ����������
		double a, b;
public: // ����������� ������� ���������
	Rectangle();//����������� ��� ���������
	Rectangle(double a, double b);//����������� � ���������� 

	void SetA(double a);// ������ ������
	void SetB(double b);// ������ ������

	double GetA()const;// ������ ������
	double GetB()const;// ������ ������

	double Square()const;// ������� ������������� ������� ��������������
	double Perimeter()const; // ������� ������������� �������� ��������������


};

