#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	const int number_of_elements = 4;
	int static_array1[number_of_elements];
	cout << &static_array1[0] << endl <<
		&static_array1[1] << endl <<
		&static_array1[2] << endl <<
		&static_array1[3] << endl << endl;
	const int number_of_rows = 2;
	const int number_of_columns = 2;
	int static_array2[number_of_rows][number_of_columns];
	cout << &static_array2[0][0] << endl <<
		&static_array2[0][1] << endl <<
		&static_array2[1][0] << endl <<
		&static_array2[1][1] << endl << endl;	
	int* dinamic_array1 = new int [number_of_elements];
	for (int i = 0; i < number_of_elements; i++) {
		cout << (dinamic_array1 + i) << endl;
	};
	cout << endl;
	cout << "Enter count of rows" << endl;
	int count_of_rows;
	cin >> count_of_rows;
	cout << "Enter count of columns " << endl;
	int count_of_columns;
	cin >> count_of_columns;
	int** dinamic_array2 = new int* [count_of_rows];
	for (int i = 0; i < count_of_rows; i++) {
		dinamic_array2[i] = new int [count_of_columns];
		for (int j = 0; j < count_of_columns; j++) {
			cout << (dinamic_array2[i] + j) << endl;
		};
		cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	};
	system("pause");
}
