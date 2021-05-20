#include <iostream>
#include <cstdlib>
#include <cstring>

extern int a2, b2, c2, d2;
static double result;

int main() {
	// ������� 1.==========================================================================
	
	const int a = 5;
	const int b = 10;
	const int c = 9;
	const int d = 2;

	double d1 = static_cast<double>(d);
	result = a * (b + (c / d1));
	
	std::cout << "���� ���������:  a * (b + (c / d))\n";
	printf("��� a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	printf("����������� �����: %.2f\n", result);
	puts(" ");
	
	//������� 2.===============================================================================
	
	int num;

	std::cout << "������� ����� ����� " << std::endl;
	scanf("%d", &num);
	std::cout << "����� ����� �����: " << num << " � 21" << std::endl;
	std::cout << "������� ����� ������� (���� ������ ����� ������ �������, �� ��������� ����� ������): " << ((num  > 21) ? (" �������", num - 21) * 2 : (21 - num)) << std::endl;
	puts(" ");
	
	//������� 3.=================================================================================
	
	d1 = static_cast<double>(d2);
	result = a2 * (b2 + (c2 / d1));
	
	std::cout << "���� ���������:  a * (b + (c / d))\n";
	printf("��� a = %d, b = %d, c = %d, d = %d\n", a2, b2, c2, d2);
	printf("����������� �����: %.2f\n", result);
	puts(" ");
	
	//������� 4.==================================================================================
	
	int index, x, y, z;
	const int s = 3;
	int cub[s][s][s] = {
		            {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
		            {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
		            {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
						};
	int *ptr = &cub[0][0][0];
	
	x = 1;  //std::cout << "������� ������ �������� ��� ������ ��� ��������" << std::endl;
	y = 1;  //scanf("%d %d %d", &x, &y, &z);
	z = 1;
	
	index = x*s*s + y*s + z;
	
	//std::cout << *(ptr + index) << std::endl;
    printf ("�������� �������� ������� cub[%d][%d][%d] = %d", x, y, z, *(ptr + index));
	return 0;
}