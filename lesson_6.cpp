#include <iostream>
#include <vector>

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

long long lcm(long long a, long long b){
    return a / gcd(a, b) * b;
}

long long pow(int a, int n){ // возведение числа a в степень n
    long long ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= a;
    }
    return ans;
}

long long binpow(int a, int n){
    long long ans = 1;
    while (n > 0){
        if (n % 2 == 0){
            a *= a;
            n /= 2;
        }
        else {
            ans *= a;
            n--;
        }
    }
    return ans;
}

long long binpow_recursive(int a, int n){
    if (n == 0){
        return 1;
    }
    if (n % 2 == 1){
        return a * binpow_recursive(a, n - 1);
    }
    else {
        long long t = binpow_recursive(a, n / 2); // a^n = (a ^ (n / 2)) ^ 2, т. к. n - четное
        return t * t;
    }
}

    vector<int> divisors(int n){
    vector<int> ans;
    for(int i = 2; i * i <= n; i++){
        if (n % i == 0){
            while (n % i == 0){
                n /= i;
                ans.push_back(i);
            }
        }
    }
    if (n != 1){-
        ans.push_back(n);
    }
    return ans;
}

int main(){
    cout << -11 % 4; // остаток - отрицательный!
    cout << -11 - 4 * (-11 / 4);
    long long t = 1e18; //хитрое присвоение 10^18
    cout << (t * t) % (t + 1);
    int a, b;
    cin >> a >> b;
    t = (a % b + b) % b; // остаток будет всегда положительный
    (a + b) % m = (a % m + b % m) % m
    (a * b) % m = (a % m * b % m) % m
    cout << lcm(6, 9);
    vector <int> div = divisors(2836);
    for(int i = 0; i < div.size(); i++){
        cout << div[i] << " ";
    }
    int n;
    cin >> n;
    vector<int> is_prime(n + 1, 1); //is_prime[i] = 0, если число i - составное, и 1, если простое
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= n; i++){
        if (prime[i] == 1){
            for(long long j = i * i; j <= n; j += i){
                prime[j] = 0;
            }
        }
    }
}
