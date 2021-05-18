#include <iostream>
#include <cstdlib>
#include <cstring>

int main (){
	const int x = 3;
	const int y = 3;
	double pi = 3.14;
	char height = 'Y';
	char width = 'X';
	bool a = true;
	
	enum status {zero=79, cross=88, empty=32};
	
	status array[x][y]= {
		{cross, zero, empty},
		{zero, zero, cross},
		{cross, zero, empty},
	};
	
	// array[1][0]= zero;
	// array[2][1]= cross;
	// array[0][1]= empty;
	
	// std::cout<<array[0][0]<<" "<<array[0][1]<<" "<<array[0][2]<< std::endl;
	// std::cout<<array[1][0]<<" "<<array[1][1]<<" "<<array[1][2]<< std::endl;
	// std::cout<<array[2][0]<<" "<<array[2][1]<<" "<<array[2][2]<< std::endl;
	
	struct field {
		enum status {zero=79, cross=88, empty=32};
		status array[x][y];
	};
		
		union value {
			char value1;
			int value2;
			struct {
				unsigned is_int : 1;
				unsigned is_char : 1;
			}flag;
		};

	
	
	return 0;
};