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
	
	enum status {zero='O', cross='X', empty='_'};
	
	status array[x][y]= {
		{empty, empty, empty}, 
	    {empty, empty, empty}, 
		{empty, empty, empty}};
	
	array[1][0]= zero;
	array[2][1]= cross;
	array[0][1]= cross;
	
	std::cout<<(char)array[0][0]<<" "<<(char)array[0][1]<<" "<<(char)array[0][2]<< std::endl;
	std::cout<<(char)array[1][0]<<" "<<(char)array[1][1]<<" "<<(char)array[1][2]<< std::endl;
	std::cout<<(char)array[2][0]<<" "<<(char)array[2][1]<<" "<<(char)array[2][2]<< std::endl;
	
	struct field {
		int coordinateX;
		int coordinateY;
		status array[x][y];
	};
		struct {
		union value {
			char value1;
		    int value2;};
				unsigned is_int : 1;
				unsigned is_char : 1;
			}flag;

	
	
	return 0;
};