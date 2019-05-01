#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <vector <int> > g(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }
}

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m;
    cin >> m;
    vector < pair <int, int> > g(m);
    for(int i = 0; i < m; i++){
        cin >> g[i].first >> gr[i].second;
    }
}

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m;
    cin >> m;
    vector < pair <int, int> > g(m);
    for(int i = 0; i < m; i++){
        pair<int, int> t;
        cin >> t.first >> t.second;
        g.push_back(t);
    }
}

#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n;
    cin >> n >> m;
    vector <vector <int> > g(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
}
