#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
   int n;
   cin >> n;
   getline(cin, s);
   getline(cin, s);
   cout << s;
   s.clear();
   s.resize(n);*/
   /*string s, t;
   cin >> s >> t;
   if (s.rfind(t) != -1){
       cout << s.rfind(t);
   }
   else {
       cout << -1;
   }*/
   string s, t = "aeoiuy", ans;
   cin >> s;
   for(int  i = 0; i < s.size(); i++){
       if (t.find(tolower(s[i]))!= -1){
           ans += s[i];
       }
   }
   if (ans.size() == 0){
       cout << "No glasnykh";
   }
   else {
       cout << ans;
   }
}
