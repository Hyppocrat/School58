#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    stack <char> br;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == '(' || s[i] == '['){
            br.push(s[i]);
        }
        else {
            if (br.empty()){
                cout << "NO";
                return 0;
            }
            
            if (s[i] == ')' && br.top()== '(' || s[i] == ']' && br.top()== '['){
                br.pop();
                continue;
            }
            else {
                cout << "NO";
                return 0;
            }
        }
    }    
    if (br.empty()){
        cout << "YES";
    }
    else {
        cout <<  "NO";
    }
}


#include <iostream>
#include <vector>
#
using namespace std;

int gcd(int a, int b){
    if (a < b){
        swap(a, b);
    }
    while (a != 0 && b != 0){
        a %= b; // a = a % b;
        swap(a, b);
    }
    return a;
}

struct fraction{
    int num; // числитель дроби
    int denom; // знаменатель дроби
    
    void simplify(){
        int x = this -> num;
        int y = this -> denom;
        int g = gcd(x, y);
        x /= g;
        y /= g;
        this -> num = x;
        this -> denom = y;
    }
};

fraction sum(fraction a, fraction b){
        fraction ans;
        ans.num = a.num * b.denom + a.denom * b.num;
        ans.denom = a.denom * b.denom;
        ans.simplify();
        return ans;
}

fraction mul(fraction a, fraction b){
        fraction ans;
        ans.num = a.num * b.num;;
        ans.denom = a.denom * b.denom;
        ans.simplify();
        return ans;
}

bool cmp(fraction a, fraction b){
    return (a.num * b.denom >= a.denom * b.num);
}

int main(){
    /*fraction a, b;
    cin >> a.num >> a.denom;
    cin >> b.num >> b.denom;
    a.simplify();
    b.simplify();
    fraction c = sum(a, b);
    cout << c.num << '/' << c.denom << endl;
    c = mul(a, b);
    cout << c.num << '/' << c.denom;*/    
    int n;
    cin >> n;
    vector<fraction> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i].num >> vec[i].denom;
    }    
    sort(vec.begin(), vec.end(), cmp)
}
