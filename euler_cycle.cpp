#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

vector<int> path;

void dfs(int v, vector< map<int, int> > &gr){
    path.push_back(v);
    for(auto i: gr[v]){
        int num = i.first, cnt = i.second;
        //cout << num << " " << cnt << endl;
        if (cnt > 0){
            gr[v][num]--;
            gr[num][v]--;
            dfs(num, gr);
        }
    }
}

//http://acm.timus.ru/problem.aspx?space=1&num=1137
//http://acm.timus.ru/problem.aspx?space=1&num=1176

int main(){
    int n, m;
    cin >> n >> m;
    vector< map<int, int> > gr(n + 13);
    vector<int> deg(n + 13, 0);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        gr[u][v]++;
        gr[v][u]++;
        deg[u]++;
        deg[v]++;
    }
    for(int i = 1; i <= n; i++){
        if (deg[i] % 2){
            cout << "NO";
            return 0;
        }
    }
    dfs(1, gr);
    for(int i = 0; i < path.size(); i++){
        cout << path[i] << " ";
    }
}
