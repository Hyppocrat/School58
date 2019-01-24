// шаблон для программы на c++
#include <iostream> // подключение ввода-вывода
#include <string>   // подключение библиотеки для работы со строками

using namespace std; // использование стандартного пространства имен

int main(){
	string s, s1, s2; // объявление строки	
	cin >> s; // считывание одной переменной
	cout << s; // вывод одной переменной
	cin >> s >> s1 >> s2; // считывание нескольких переменных
	cout << s << ' ' << s1 << ' ' << s2; // вывод переменных через пробел
	cout << s << endl << s1 << endl << s2 << endl; // вывод каждой переменной в отдельной строке
	// подсчёт количества больших букв в строке
	int cnt_up = 0;
	for(int i = 0; i < s.size(); i++){
		if (isupper(s[i])){
			cnt_up++;
		}
	}
	// подсчёт количества маленьких букв в строке
	int cnt_low = 0;
	for(int i = 0; i < s.size(); i++){
		if (islower(s[i])){
			cnt_low++;
		}
	}
	// подсчёт количества цифр в строке
	int cnt_dig = 0;
	for(int i = 0; i < s.size(); i++){
		if (isdigit(s[i])){
			cnt_dig++;
		}
	}
	// подсчёт количества букв (маленьких и больших) в строке
	int cnt_al = 0;
	for(int i = 0; i < s.size(); i++){
		if (isalpha(s[i])){
			cnt_al++;
		}
	}
	// подсчёт количества букв и цифр в строке
	int cnt_alnum = 0;
	for(int i = 0; i < s.size(); i++){
		if (isalnum(s[i])){
			cnt_alnum++;
		}
	}
	// обращение всех букв в строке в маленькие
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	// обращение всех букв в строке в большие
	for(int i = 0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}
}

