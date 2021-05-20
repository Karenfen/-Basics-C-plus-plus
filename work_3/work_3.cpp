#include <iostream>
#include <cstdlib>
#include <cstring>



int main() {
	// Задание 1.==========================================================================
	const int a = 5;
	const int b = 10;
	const int c = 9;
	const int d = 2;
	
	double a1 = static_cast<double>(a);
	double b1 = static_cast<double>(b);
	double c1 = static_cast<double>(c);
	double d1 = static_cast<double>(d);
	double result = a1 * (b1 + (c1 / d1));
	
	std::cout << "Дано выражение:  a * (b + (c / d))\n";
	printf("При a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	printf("Результатом будет: %.2f\n", result);
	
	//Задание 2.===============================================================================
	int num;

	std::cout << "Введите целое число " << std::endl;
	scanf("%d", &num);
	std::cout << "Данно целое число: " << num << " и 21" << std::endl;
	std::cout << "Разница между числами (если первое число больше второго, то результат будет удвоен): " << ((num  > 21) ? (" разница", num - 21) * 2 : (21 - num)) << std::endl;
	
	
	return 0;
}