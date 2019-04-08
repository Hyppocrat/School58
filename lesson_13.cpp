#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(){
    // map <тип1, тип2> имя;
    /*map<string, int> mp;
    string name;
    int value, n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> name >> value;
        mp[name] = value;
    }*/
    /*map<string, vector<int> > mp;
    string name;
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> name >> m;
        vector<int> values(m);
        for(int j = 0; j < m; j++){
            cin >> values[j];
        }
        mp[name] = values;
    }*/
    /*map<int, int> mp;
    int t, n;
    for(int i = 0; i < n; i++){
        cin >> mp[i];
    }
    cout << mp[5];
    cout << mp["Ilya"];*/
    /*map <char, int> mp;
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    for(map <char, int>::iterator it = mp.begin(); it != mp.end(); it++){
        cout << it -> first << " - " << it-> second << endl;
    }*/
    /*map<int, int> mp;
    int n, t;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        mp[t]++;
    }    
    for(map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it){
        for(int i = 0; i < it -> second; ++i){
            cout << it -> first << " ";
        }
    }*/
    /*map <string, int> mp;
    int n;
    cin >> n;
    string command, name;
    for(int i = 0; i < n; i++){
        cin >> command >> name;
        if (command == "ADD"){
            if (mp.find(name) == mp.end()){
                mp[name] = 1;
            }
            else {
                cout << "Error: user already exists" << endl;
            }
        }
        if (command == "DELETE"){
            if (mp.find(name) == mp.end()){
                cout << "Error: user not found" << endl;
            }
            else {
                mp.erase(name);
                cout << "User successfully deleted" << endl;
            }
        }
        if (command == "CONTAINS"){
            if (mp.find(name) == mp.end()){
                cout << "User not found" << endl;
            }
            else {
                cout << "User is in chat" << endl;
            }
        }
    }*/
    // cout << mp.size();
    // set <тип> имя;
    set <int> st;
    /*st.insert(10);
    st.erase(10);
    if (st.find(10) == st.end()){
        cout << "No 10" << endl;
    }
    else {
        cout << "YES 10" << endl;
    }*/
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> t;
        st.insert(t);
    }
    cout << st.size() << endl;
    for(set<int>::iterator it = st.begin(); it != st.end(); ++it){
        cout << *it << " ";
    }
}



int n;
cin >> n;
string s;
map<string, int> mp;
for(int i = 0; i < n; i++){
    cin >> s;
    if (mp.find(s) == mp.end()){
        cout << "OK" << endl;
        mp[s] = 1;
    }
    else {
        cout << s << mp[s] << endl;
        mp[s]++;
    }
}

















