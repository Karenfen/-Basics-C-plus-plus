#include <iostream>
#include <cstdlib>
#include <cstring>



int main() {
	// ������� 1.==========================================================================
	const int a = 5;
	const int b = 10;
	const int c = 9;
	const int d = 2;
	
	double a1 = static_cast<double>(a);
	double b1 = static_cast<double>(b);
	double c1 = static_cast<double>(c);
	double d1 = static_cast<double>(d);
	double result = a1 * (b1 + (c1 / d1));
	
	std::cout << "���� ���������:  a * (b + (c / d))\n";
	printf("��� a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	printf("����������� �����: %.2f\n", result);
	
	//������� 2.===============================================================================
	int num;

	std::cout << "������� ����� ����� " << std::endl;
	scanf("%d", &num);
	std::cout << "����� ����� �����: " << num << " � 21" << std::endl;
	std::cout << "������� ����� ������� (���� ������ ����� ������ �������, �� ��������� ����� ������): " << ((num  > 21) ? (" �������", num - 21) * 2 : (21 - num)) << std::endl;
	
	
	return 0;
}