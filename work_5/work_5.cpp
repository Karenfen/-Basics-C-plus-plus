// Kiselev Ilia
// homework 5
// MinGW + CMD + Notepad++ 

#include <iostream>
#include <stdarg.h>
#include "work_5.h"


int main (){
    fseek(stdin, 0, SEEK_END);
	using namespace myfunc;
// Task - 1 =====================================================
std::cout << "Task - 1" << std::endl;

const int size_1  = 8;
int array_1[size_1] = {1, 1, 0, 1, 0, 0, 1, 0};

 printArray(array_1, size_1);
 reversNumb(array_1, size_1);
 printArray(array_1, size_1);

puts(" ");
// Task - 2 =====================================================
std::cout << "Task - 2" << std::endl;

const int size_2 = 8;
int step = 3;
int array_2[size_2];

 printArray(array_2, size_2);
 arrayInit(array_2, size_2, step);
 printArray(array_2, size_2);

puts(" ");
// Task - 3 =====================================================
std::cout << "Task - 3" << std::endl;

const int size_3 = 5;
bool result;

int array_3_1[size_3] = {10, 2, 3, 3, 2};
 result = arrayCheck(array_3_1, size_3);
 printArray(array_3_1, size_3);
 std::cout << result << std::endl;

int array_3_2[size_3] = {10, 2, 2, 1, 10};
 printArray(array_3_2, size_3);
 result = arrayCheck(array_3_2, size_3);
 std::cout << result << std::endl;

puts(" ");
// Task - 4 =====================================================
std::cout << "Task - 4" << std::endl;

signed int n;
const int size_4 = 9;
int array_4[size_4] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

 n = -3;
 ArShift(array_4, size_4, n);
 printArray(array_4, size_4);

 n = 2;
 ArShift(array_4, size_4, n);
 printArray(array_4, size_4);

puts(" ");
// Task - 5 =====================================================
std::cout << "Task - 5" << std::endl;

 reversNumbVariabel(5, 1, 1, 0, 0,1);

return 0;
}

