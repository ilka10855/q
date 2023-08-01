//����������� ��������� ������� swap, ������� ������ ������� �������� ���� ���������� ������ ����.
#include <iostream>
template<typename T1, typename T2>
void swap(T1& a, T2& b)
{
	T1 H = a;
	a = b;
	b = H;
}
int main()
{
	char R = 3;
	int R1 = 6;
	float Y = 13.13;
	double Y1 = 16.1234;
	std::cout << R << std::endl << R1 << std::endl << Y << std::endl << Y1 << std::endl;
	swap(R, R1);
	swap(Y, Y1);
	std::cout << R << std::endl << R1 << std::endl << Y << std::endl << Y1 << std::endl;
	return 0;
}