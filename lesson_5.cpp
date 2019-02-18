
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
    тип имя([параметр1, [параметр 2, ...]]){
    ...
    return ; // если функция типа void
    return x; // если функция не типа void
}



int my_max(int a, int b){ // функция для поиска максимального из 2 чисел
    if (a > b)
        return a;
    return b;
}

string my_max(string a, string b){
    if (a > b)
        return a;
    return b;
}

void func(int a){
    a += 2;
    return ;
}

void func(int &a){
    a += 2;
    return ;
}
dah*/
/*int gcd(int a, int b){
    if (a < b){
        swap(a, b);
    }
    while (a != 0 && b != 0){
        a %= b; // a = a % b;
        swap(a, b);
    }
    return a;
}*/

/*vector <int> delete_nonpositive(const vector<int> &vec){
    vector <int> ans;
    for(int  i = 0; i < vec.size(); i++){
        if (vec[i] > 0){
            ans.push_back(vec[i]);
        }
    }
    return ans;
}*/

bool is_simple(int n){
    int cnt = 1; // количество делителей числа
    for(int i = 2; i <= n / 2; i++){   
        if (n % i == 0){
            cnt++;
        }
    }
    return (cnt == 2);
}

bool is_simple_clever(int n){
    for(int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return true;
        }
    }
    return (n != 1);
}

int main(){
    int n;
    cin >> n;
    vector<int> vec(n + 13), ans;
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    ans = delete_nonpositive(vec);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}
