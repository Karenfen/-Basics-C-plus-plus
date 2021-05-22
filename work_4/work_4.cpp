#include <cstdlib>
#include <iostream>
#include <cstring>

int main (){
	fseek(stdin, 0, SEEK_END);
// TASK - 1 =====================================================================
	
	// int num_1, num_2, sum, lim_1 = 0, lim_2 = 10;
	
	// std::cout << "Enter two numbers whose sum will be >= " << lim_1 << " and <= " << lim_2 << std::endl;
	// std::cin >> num_1 >> num_2;
	
	// sum = num_1 + num_2;
	
	// if (sum >= 0 && sum <=10){
		// std::cout << "TRUE" << std::endl;
	//}
	// else {
		// std::cout << "FALSE" << std::endl;
	//}
	// puts(" ");
	
// TASK - 2 =====================================================================

// int number, result = 0;

// do {
//    std::cout << "Inter a namber > 1 to check or '0' for exit: ";
//    std::cin >> number;
// if (number == 1 || number < 0){
//     std::cout << "Error..." << std::endl;
//     continue;
// }
// for (int i = 1; i <= number; i++){
	// if (number % i == 0){
		// result++;
		// }
	// if (result == 3){
		// std::cout << "number " << number << " is not prime." << std::endl;
		// break;
	    // }		
// }
// if (result == 2 || result == 1){
    // std::cout << "number " << number << " is prime." << std::endl;
//}
// else if (result > 3){
	// std::cout << "ERROR" << std::endl;
//}
// result = 0;
// }while (number != 0);
	// puts(" ");
	
// TASK - 3 =====================================================================

// const int a = 6, b = 12, V = 10;
// int c = a + b;

// switch  (V){
	// case (a):
	     // std::cout << "TRUE" << std::endl;
	     // break;
	// case (b):
	     // std::cout << "TRUE" << std::endl;
	     // break;
    // case (c):
	     // std::cout << "TRUE" << std::endl;
	     // break;
    // default:
		 // std::cout << "FALSE" << std::endl;
// }
	// puts(" ");
	
// TASK - 4 =====================================================================

int year;

std::cout << "Inter a year to check or '0' to exit:" << std::endl;

do  {
	std::cin >> year;
 if (year > 0 && year % 400 == 0) {
    std::cout << "Is leap year!" << std::endl;
 } else if (year > 0 && year % 100 == 0){
	 std::cout << "Is not leap year!" << std::endl;
 } else if (year > 0 && year % 4 == 0) {
	 std::cout << "Is leap year!" << std::endl;
 } else if (year > 0 ){
	 std::cout << "Is not leap year!" << std::endl;
 } else if (year < 0 ){
	 std::cout << "ERROR" << std::endl;	
}} while (year != 0);
 
	return 0;
}