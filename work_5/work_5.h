// My functions

namespace myfunc {
	
void printArray (int*arr, int s){
for (int i = 0; i < s; i++){
    std::cout << arr[i] << " ";

}
std::cout << std::endl;
}

void reversNumb (int*arr, int s){
    int a = 1;
for (int i = 0; i < s; i++){
    arr[i] = arr[i] ^ a;
}
}

void reversNumbVariabel (int size, ...){
	int a = 1;
	int arr[size];
	va_list list;
    va_start(list, size);
for (int i = 0; i < size; i++){
   arr[i] =  va_arg(list, int);
}
va_end(list);

printArray(arr, size);
reversNumb(arr, size);
printArray(arr, size);
}

void arrayInit(int*arr, int s, ...){
    va_list lst;
    va_start(lst, s);
for (int i = 0; i < s; i++){
    arr[i] = va_arg(lst, int);
}
va_end(lst);
}

bool arrayCheck(int*arr, int s){
bool res = false;
int sum_l = arr[0];
int sum_r = 0;

for (int i = 1; i < s; i++){
	sum_r += arr[i];
}
if (sum_l == sum_r){
	res = true;
} else {
	for (int j = 1; j < (s - 1); j++){
		sum_l += arr[j];
		sum_r -= arr[j];
		if (sum_l == sum_r){
			 res = true;
			 break;
		}
	}
}

return res;
}

void ArShift(int*arr, int size, signed int num){
	int clone[size];
	
	for (int i = 0; i < size; i++){
		clone[i] = arr[i];
	}
	if (num < 0){
	for (int j = 0; j < size; j++){
		((j - num) < size)? (arr[j] = clone[j-num]) : (arr[j] = clone[j-num-size]);
	}
	} else {
		for (int j = 0; j < size; j++){
		(j < num)? (arr[j] = clone[size-num+j]):(arr[j] = clone[j-num]);
	}
	}
}

}