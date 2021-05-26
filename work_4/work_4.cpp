#include <cstdlib>
#include <iostream>
#include <cstring>

int main (){
	fseek(stdin, 0, SEEK_END);
// TASK - 1 =====================================================================

	int num_1, num_2, lim_1 = 10, lim_2 = 20;

	std::cout << "Enter two numbers whose sum will be >= " << lim_1 << " and <= " << lim_2 << std::endl;
	std::cin >> num_1 >> num_2;

	if ((num_1 + num_2) >= lim_1 && (num_1 + num_2) <= lim_2){
		std::cout << "TRUE" << std::endl;
	}
	else {
		std::cout << "FALSE" << std::endl;
	}
	puts(" ");

// TASK - 2 =====================================================================

int number, result = 0;

do {
   std::cout << "Inter a namber > 1 to check or '0' for exit: ";
   std::cin >> number;
if (number == 1 || number < 0){
    std::cout << "Error..." << std::endl;
    continue;
}
for (int i = 1; i <= number; i++){
	if (number % i == 0){
		result++;
		}
	if (result == 3){
		std::cout << "number " << number << " is not prime." << std::endl;
		break;
	    }
}
if (result == 2){
    std::cout << "number " << number << " is prime." << std::endl;
}
else if (result > 3){
	std::cout << "ERROR" << std::endl;
}
result = 0;
}while (number != 0);
	puts(" ");

// TASK - 3 =====================================================================

const int a = 6, b = 4, V = 10;

printf("%d = %d = %d  or  %d + %d = %d : ", a, b, V, a, b, V);

if (a == V && b == V) {
	std::cout << "TRUE" << std::endl;
} else if ((a + b) == V) {
    std::cout << "TRUE" << std::endl;
} else {
	std::cout << "FALSE" << std::endl;
}
	puts(" ");

// TASK - 4 =====================================================================

const int x = 12, y = 12;
int matrix[x][y] = {0};

std::cout << "Before" << std::endl;

for (int i = 0; i < x; i++){
   for (int j = 0; j < y; j++){
   std::cout << matrix[i][j] << " ";
   }
   std::cout << std::endl;
}
puts(" ");

for (int i = 0; i < x; i++){
   matrix[i][i] = 1;
   matrix[i][y-i-1] = 1;
}
std::cout << "After" << std::endl;

for (int i = 0; i < x; i++){
   for (int j = 0; j < y; j++){
   std::cout << matrix[i][j] << " ";
   }
   std::cout << std::endl;
}
puts(" ");

<<<<<<< HEAD
// TASK - 5 =====================================================================
=======
// // TASK - 5 =====================================================================
>>>>>>> 0b667a1d39197178793ec2cc165fe6b104004ca1

int year;

do  {
	std::cout << "Inter a year to check or '0' to exit:" << std::endl;
	std::cin >> year;
	
if (year < 0 ){
	std::cout << "ERROR" << std::endl;
	continue;
} else if (year == 0){
	continue;
<<<<<<< HEAD
} else if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
    std::cout << "Is leap year!" << std::endl;
 } else {
 std::cout << "Is not leap year!" << std::endl;
 }
	
} while (year != 0);


=======
} else {
	if (year % 4 == 0){
		if (year % 100 == 0){
			if (year % 400 == 0){
				std::cout << "Is leap year!" << std::endl;
			} else {
				std::cout << "Is not leap year!" << std::endl;
			}
		} else {
			std::cout << "Is leap year!" << std::endl;
		}
	} else {
		std::cout << "Is not leap year!" << std::endl;
	}
}
} while (year != 0);

// or ...
 // if (year % 400 == 0) {
    // std::cout << "Is leap year!" << std::endl;
 // } else if (&& year % 100 == 0){
	 // std::cout << "Is not leap year!" << std::endl;
 // } else if (year > 0 && year % 4 == 0) {
	 // std::cout << "Is leap year!" << std::endl;
 // } else if (year > 0 ){
	 // std::cout << "Is not leap year!" << std::endl;
 // } else if (year < 0 ){
	 // std::cout << "ERROR" << std::endl;
>>>>>>> 0b667a1d39197178793ec2cc165fe6b104004ca1

	return 0;
}
