#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    //stack <тип данных> имя;
    //stack <int> st;
    //st.push(5);z
    //st.push(-5);
    //st.pop();
    //st.pop();
    //int t = st.top();
    //cout << t;
    //Дана последовательность чисел, заканчивающаяся 0. Вывести её элементы в обратном порядке
    /*stack <int> ans;
    int t;
    cin >> t;
    while (t != 0){
        st.push(t);
        cin >> t;
    }
    while (!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }*/
    /*string s;
    cin >> s;*/
    /*int balance = 0;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == '('){
            balance++;
        }
        else {
            balance--;
        }
        if (balance < 0){
            break;
        }
    }
    if (balance != 0){
        cout << "NO";
    }
    else {
        cout << "YES";
    }*/
    /*stack <char> br;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == '('){
            br.push(s[i]);
        }
        else {
            if (br.empty()){
                cout << "NO";
                return 0;
            }
            else {
                br.pop();
            }
        }
    }
    if (br.empty()){
        cout << "NO";
    }
    else {
        cout << "YES";
    }*/
    /*pair <int, int> test;
    //cin >> test.first >> test.second;
    int x, y;
    cin >> x >> y;
    test = make_pair(x, y);*/
    /*int t;
    cin >> t;
    stack <pair <int, int> > st;
    while (t != 0){
        if (st.empty()){
            st.push(make_pair(t, t));
        }
        else {
            st.push(make_pair(t, min(t, st.top().second)));
        }
        cin >> t;
    }
    while (!st.empty()){
        cout << st.top().first << " " << st.top().second << endl;
        st.pop();
    }*/
    queue <int> q;
    int t;
    cin >> t;
    while (t != 0){
        q.push(t);
        cin >> t;
    }
    cout << q.back() << endl;
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}                                                                                     
