#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
//Задача 1
void typeOF(int num) {
	cout << "INT";
}
void typeOF(double num) {
	cout << "DOUBLE";
}
//рекурсивная фу-ция Задача 2
int recSum(int n1, int n2) {
	
	if (n1 == n2)
		return n2;
	return recSum(n1 + 1, n2)+n1;
}
//вывод массива
template <typename T> void arr(T arr[], int size) {
	cout << "[";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ", ";
	}
	cout << "\b\b]";
}

//Задача 3
template<typename T > void sortArr(T arr[], int size) {
	 int index=-1, lastindex=-1;
	for (int i = 0; i < size; i++)
		if (arr[i] < 0) {
			index = i;
			break;
		}
	for (int i = size - 1; i >= 0; i--)
		if (arr[i] < 0) {
			lastindex = i;
			break;
		}

	if (index != -1)
		for (int i = lastindex; i > index; i--)
			for (int j = index; j < i; j++)
				if (arr[j] > arr[j + 1])
					swap(arr[j], arr[j + 1]);
	
}
//Задача 4 (сдвиг по кругу)
template <typename T > void moveArray(T array[], int lenght, int shift) {
	for (int i = 0; i < shift; i++) {
			T tmp = array[lenght - 1];
			for (int i = lenght - 1; i > 0; i--)
				array[i] = array[i - 1];
			array[0] = tmp;
	}
}



int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n, m;
	//Задача 1
	/*cout << "Задача 1.\n5-->";
	typeOF(5);
	cout << "\n1.2-->";
	typeOF(1.2);
	cout << endl;*/

	//Задача 2
	/*cout << "Задача2\nВведите начало и конец диапазона: ";
	cin >> n >> m;
	cout << "Сумма чисел от " << n << " до " << m << " = " <<recSum(n, m) << "\n\n";*/

	//Задача 3
	/*cout << "Задача 3\n";
	cout << "Изначальный массив:\n";
	int z3[20];
	for (int i = 0; i < 20; i++)
	z3[i] = rand() % (20 + 1 - (-20)) + (-20);
	arr(z3, 20);
	cout << "\nОтсортированный массив:\n";
	sortArr(z3, 20);
	arr(z3, 20);
	cout << "\n\n";*/

	//Задача 4
	/*cout << "Задача 4\nИзначадьный массив\n";
	int z4[10] = {1,2,3,4,5,6,7,8,9,10};
	arr(z4, 10);
	cout << "\nВведите число---> ";
	cin >> n;
	moveArray(z4, 10, n);
	cout << "Итоговый массив:\n";
	arr(z4, 10);
	cout << "\n\n";*/

	//Задача 5
	


	cout << endl;

	












	system("pause");
	return 0;
}