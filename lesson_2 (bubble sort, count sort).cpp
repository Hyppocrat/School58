#include <iostream>
#include <string>

using namespace std;

int main(){
	int n, a[1013];
	//сортировка пузырьком
	...
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if (a[i] > a[j]){
				swap(a[i], a[j]);
			}
		}
	}
	...
	//сортировка подсчётом (только неотрицательные числа до 1000)
	int n, a[1013];
	memset(a, 0, sizeof(a)); // заполнить массив a нулями
	...
	for(int i = 0; i < n; i++){
		cin >> t;
		a[t]++;
	}
	for(int i = 0; i < 1000; i++){
		for(int j = 0; j < a[i]; j++){
			cout << i << " ";
		}
	}
	//сортировка подсчётом (числа, по модулю не большие 1000)
	int n, a[2013];
	memset(a, 0, sizeof(a)); // заполнить массив a нулями
	...
	for(int i = 0; i < n; i++){
		cin >> t;
		a[t + 1000]++;
	}
	for(int i = 0; i < 2001; i++){
		for(int j = 0; j < a[i]; j++){
			cout << i - 1000 << " ";
		}
	}
}
