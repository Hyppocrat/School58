/*#include <iostream>
#include <stack>
#include <set>
#include <string>

using namespace std;

int main(){
    stack<string> messages;
    set<string> was;
    int n;
    cin >> n;
    string name;
    for(int i = 0; i < n; i++){
        cin >> name;
        messages.push(name);
    }
    while (!messages.empty()){
        if (was.find(messages.top()) == was.end()){
            cout << messages.top() << endl;
            was.insert(messages.top());
        }
        messages.pop();
    }
}*/

/*#include <iostream>
#include <stack>
#include <map>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    getline(cin, s);
    for(int i = 0; i < n; i++){
        getline(cin, s);
        int ind = -1;
        string number;
        for(int j = 0; j < s.size(); j++){
            if (isdigit(s[j])){
                ind = j;
                break;
            }
        }
        while (ind < s.size() && isdigit(s[ind])){
            number += s[ind];
            ind++;
        }
        mp[number]++;
    } 
    int ans = 0;
    for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++){
        if (it -> second >= 1 && it -> second <=5){
            ans++;
        }
    }
    cout << ans << endl;
    for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++){
        if (it -> second >= 1 && it -> second <=5){
            cout << it -> first << endl;
        }
    }
}*/



/*#include <iostream>
#include <stack>
#include <set>
#include <string>

using namespace std;

int main(){
    multiset <int> dragons;
    int n;
    cin  >> n;
    char who;
    int number;
    for(int i = 1; i < n - 1; i++){
        cin >> who >> number;
        if (who == 'd'){
            dragons.insert(number);
        }
        else {
            while (dragons.size() >= number){
                dragons.erase(dragons.begin());
            }
        }
    }
    cin >> who >> number;
    if (number > dragons.size()){
        cout << -1;
    }
    else {
        int ans = 0;
        while (!dragons.empty()){
            ans += *dragons.begin();
            dragons.erase(dragons.begin()); 
        }
        cout << ans;
    }
}*/

/*#include <iostream>
#include <stack>
#include <map>
#include <set>
#include <string>

using namespace std;

int main(){
    set <string> old_names;
    map<string, string> names;
    int n;
    cin >> n;
    string old_name, new_name;
    for(int i = 0 ; i < n; i++){
        cin >> old_name >> new_name;
        if (names.find(old_name) == names.end()){
            old_names.insert(old_name);
        }
        names[old_name] = new_name;
        names[new_name] = "-1";
    }
    cout << old_names.size() << endl;
    for(set<string>::iterator it = old_names.begin(); it != old_names.end(); ++it){
        string name = *it;
        cout << name << " ";
        while (names[name] != "-1"){
            name = names[name];
        }
        cout << name << endl;
    }
}*/
