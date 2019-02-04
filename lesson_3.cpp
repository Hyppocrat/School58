#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int n;
  cin>> n;
  //объявить вектор на n элементов, все числа которого равны 10
  vector<int> vec(n, 10);
  //объявить вектор на n элементов, все числа которого равны 0
  vector<int> vec(n);
  //считать элементы вектора
  for(int i = 0; i < n; i++){
    cin >> vec[i];
  }
  //отсортировать вектор по возрастанию
  sort(vec.begin(), vec.end());
  //развернуть все числа в векторе
  reverse(vec.begin(), vec.end());
  //создать двумерный вектор размера n * m
  vector< vector<char> > vec(n, vector<char>(m));
  //добавить элемент в конец вектора
  vec.push_back(x);
  //удалить элемент из конца списка
  vec.pop_back();
  //вывести на экран последний элемент списка
  cout << vec.back();
}
