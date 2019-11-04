#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

}
/*
    // Задача. Дан массив. Запрос: Найти сумму на подмассиве a[l..r] 
    // (запрос на отрезке l r). НО запросов много (очень много)
    // 1 100000
    // 25000 50000
    // 2 99999
    // s[i] - сумма первых i элементов массива a
    // s[0] = 0
    // s[1] = a[0] = a[0] + 0 = a[0] + s[0]
    // s[2] = a[0] + a[1] = s[1] + a[1]
    // s[3] = a[0] + a[1] + a[2] = s[2] + a[2]
    // ...
    // s[i] = a[0] + a[1] + ... + a[i - 1] =
    // a[0] + a[1] + ... + a[i - 2] + a[i - 1] 
    // = s[i - 1] + a[i - 1]
    // ...
    // s[l..r] = a[l - 1] + a[l] + ... + a[r - 1] = s[r] - s[l - 1]
    // s[l - 1] = a[0] + ... + a[l - 2]
    // s[r] = a[0] + ... + a[l - 2] + a[l - 1] + ... + a[r - 1]
    int n;
    cin >> n;
    vector <int> a(n), s(n + 1);
    s[0] = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s[i + 1] = s[i] + a[i];
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        cout << s[r] - s[l - 1] << endl;
    }
    // Найти подотрезок в массиве, где сумма 
    // чисел в точности равна К. (все числа положительные)
    int n, K;
    cin >> n >> K;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans_l = -1, ans_r = -1;
    int s = 0, l = 0;
    for(int r = 0; r < n; r++){
        s += a[r];
        if (s > K){
            while (s > K && l <= r){
                s -= a[l];
                l++;
            }
        }
        else if (s == K){
            ans_l = l;
            ans_r = r;
        }
    }
    cout << ans_l << " " << ans_r;
    int n, a[100013];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans_i = 1, ans_j = 0, mx = a[1] - a[0], mn_ind = 0;
    for(int i = 1; i < n; i++){
        if (a[i] - a[mn_ind] > mx){
            mx = a[i] - a[mn_ind];
            ans_i = i;
            ans_j = mn_ind;
        }
        if (a[i] < a[mn_ind]){
            mn_ind = i;
        }
    }
    cout << ans_j << " " << ans_i;
    
        vector<int> a(n), b(m), c(n + m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int l, l1, l2;
    l = l1 = l2 = 0;
    while (l1 < n && l2 < m){
        if (a[l1] < b[l2]){
            c[l] = a[l1];
            l++;
            l1++;
        }
        else {
            c[l] = b[l2];
            l2++;
            l++;
        }
    }
    while (l1 < n){
        c[l] = a[l1];
        l1++;
        l++;
    }
    while (l2 < m){
        c[l] = b[l2];
        l2++;
        l++;
    }
    for(int i = 0; i < n + m; i++){
        cout << c[i] << " ";
    }
*/
