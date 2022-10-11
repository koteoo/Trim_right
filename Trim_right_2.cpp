// Trim_right_2.cpp 
#include "pch.h"
#include <iostream>
using namespace std;


void trimright(char *str, int &size) {
	int jj = 0, amount_of_symbols = 0;
	while (jj < size) {
		jj++;
		if (str[jj] != ' ' ) {
			amount_of_symbols++;
		}
	}
	char *new_arr = new char[amount_of_symbols];

	int temp = 0;
	for (int j = 0; j < size; j++) {

		if (str[j] != ' ') {

			new_arr[temp] = str[j];
			temp++;
		}
	}

	for (int i = 0; i < amount_of_symbols; i++) {
		cout << new_arr[i];
	}
	cout << " Amount symbols of new arr :" << amount_of_symbols << endl;
	delete[] new_arr;
}

int main()
{

	char str[] = "asdhhhsdf         fghfgh       ";
	int strlen = (sizeof(str) / sizeof(str[0])-1);
	cout << str << endl;
	cout << strlen << endl;

	trimright(str, strlen);
}