#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// a1, a2, ..., an S
// 1 2 1 2
// 1+2-1
char ch[35];
int a[35];
bool b[35]; 
string s;
// b[i] = 0, если элемент i ещё не добавляли в перестановку
// b[i] = 1, если элемент i уже добавили в перестановку
/*void rec(int k, int n, int S, bool &pp){
    if (k == n - 1){
        int s = a[1];
        for(int i = 0; i < n - 1; i++){
            if (ch[i] == '-'){
                s -= a[i + 2];
            }
            else {
                s += a[i + 2];
            }
        }
        if (s == S){
            pp = 1;
            cout << a[1] << ' ';
            for(int i = 0; i < n - 1; i++){
                cout << ch[i] << ' ' << a[i + 2] << ' ';
            }
            cout << endl;
        }
    }
    else {
        ch[k] = '-';
        rec(k + 1, n, S, pp);
        ch[k] = '+';
        rec(k + 1, n, S, pp);
    }
}*/
    /*int n, S;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cin >> S;
    bool flag = 0;
    rec(0, n, S, flag);
    if (!flag){
        cout << -1;
    }*/
    
// n, k
// 1 1 ... 1 1 (k единиц)
// 1 1 ... 1 2
// 1 1 ... 1 n
// 1 1 ... 2 1
// ...........
// n n ... n n
/*void rec(int k1, int k, int n){
    if (k1 == k){
        for(int i = 0; i < k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else {
        for(int i = 1; i <= n; i++){
            a[k1] = i;
            rec(k1 + 1, k, n);
        }
    }
}
    int n, k;
    cin >> n >> k;
    rec(0, k, n);*/
//3
// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1

// 1 2 3
// 2 1 3
// 1 3 2
// 3 1 2
// 2 3 1
// 3 2 1

void rec(int k, int n){
    if (k == n){
        for(int i = 0; i < n; i++){
            cout << s[a[i]];
        }
        cout << endl;
    }
    else {
        for(int i = 0; i < n; i++){
            if (!b[i]){
                b[i] = 1;
                a[k] = i;
                rec(k + 1, n);
                b[i] = 0;
            }
        }
    }
}

/*void rec(int k, int n){
    if (k == n){
        for(int i = n - 1; i >= 0; i--){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else {
        for(int i = n; i >= 1; i--){
            if (!b[i]){
                b[i] = 1;
                a[k] = i;
                rec(k + 1, n);
                b[i] = 0;
            }
        }
    }
}*/

int main(){
    int n;
    cin >> s;
    sort(s.begin(), s.end()); // сортировка символов строки
    n = s.size();
    memset(b, 0, sizeof(b));
    rec(0, n);
}

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// a1, a2, ..., an S
// 1 2 1 2
// 1+2-1
char ch[35];
int a[35];
bool b[35]; 
int cn[300];
string s;

/*void rec(int k, int n, int S, bool &pp){
    if (pp){
        return ;
    }
    if (k == n - 1){
        int s = a[1];
        for(int i = 0; i < n - 1; i++){
            if (ch[i] == '-'){
                s -= a[i + 2];
            }
            else {
                s += a[i + 2];
            }
        }
        if (s == S){
            pp = 1;
            cout << a[1] << ' ';
            for(int i = 0; i < n - 1; i++){
                cout << ch[i] << ' ' << a[i + 2] << ' ';
            }
            cout << endl;
        }
    }
    else {
        ch[k] = '-';
        rec(k + 1, n, S, pp);
        ch[k] = '+';
        rec(k + 1, n, S, pp);
    }
}*/

/*void rec(int k1, int k, int n){
    if (k1 == k){
        for(int i = 0; i < k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else {
        for(int i = 1; i <= n; i++){
            a[k1] = i;
            rec(k1 + 1, k, n);
        }
    }
}*/

/*void rec(int k, int n){
    if (k == n){
        for(int i = 0; i < n; i++){
            cout << s[a[i]];
        }
        cout << endl;
    }
    else {
        for(int i = 0; i < n; i++){
            if (b[i] == 0){
                a[k] = i;
                b[i] = 1;
                rec(k + 1, n);
                b[i] = 0;
            }
        }
    }
}*/

void rec(int k, int n){
    if (k == n){
        for(int i = 0; i < n; i++){
            cout << ch[i];
        }
        cout << endl;
    }
    else {
        for(int i = 0; i < 256; i++){
            if (cn[i] > 0){
                ch[k] = i;
                cn[i]--;
                rec(k + 1, n);
                cn[i]++;
            }
        }
    }
}

int main(){
    cin >> s;
    memset(cn, 0, sizeof(cn));
    for(int i = 0; i < s.size(); i++){
        cn[s[i]]++;
    }
    int n = s.size();
    rec(0, n);
    /*int n = s.size();
    sort(s.begin(), s.end());
    rec(0, n);*/
    /*int n;
    cin >> n;
    memset(b, 0, sizeof(b));
    rec(0 , n);*/
    /*int n, k;
    cin >> n >> k;
    rec(0, k, n);*/
    /*int n;
    cin >> s;
    sort(s.begin(), s.end()); // сортировка символов строки
    n = s.size();
    memset(b, 0, sizeof(b));
    rec(0, n);*/
    /*int n, S;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cin >> S;
    bool flag = 0;
    rec(0, n, S, flag);
    if (!flag){
        cout << -1;
    }*/
}
