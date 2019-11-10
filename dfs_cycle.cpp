#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

bool dfs(int v, const vector< vector<int> > &gr, vector<char> &col, int color){
    col[v] = color;
    for(int i = 0; i <gr[v].size(); i++){
        int to = gr[v][i];
        if (col[to] == 0){
            return dfs(to, gr, col, 3 - color);
        }
        if (col[to] == col[v]){
            return false;
        }
    }
}

bool dfs1(int v, const vector< vector<int> > &gr, vector<char> &col, int p = -1){
    col[v] = 1;
    for(int i = 0; i < gr[v].size(); i++){
        int to = gr[v][i];
        if (col[to] == 0){
            return dfs1(to, gr, col, v);
        }
        else if (col[to] == 1 && p != to){
            return true;
        }
    }
    col[v] = 2;
    return false;
}

pair<int, int> dfs2(int v, const vector< vector<int> > &gr, vector<char> &col, vector<int> &p){
    col[v] = 1;
    for(int i = 0; i < gr[v].size(); i++){
        int to = gr[v][i];
        if (col[to] == 0){
            p[to] = v;
            return dfs2(to, gr, col, p);
        }
        else if (col[to] == 1 && p[v] != to){
            return make_pair(to, v);
        }
    }
    col[v] = 2;
    return make_pair(-1, -1);
}

int main(){
    int n, m;
    cin >> n >> m;
    vector< vector <int> > gr(n + 13);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    vector<char> col(n + 13, 0);
    vector<int> p(n + 13, -1);
    if (dfs1(1, gr, col)){
        col.assign(n + 13, 0);
        pair<int, int> ans = dfs2(1, gr, col, p);
        for(int i = 1; i <= n; i++){
            cout << p[i] << " ";
        }
        cout << endl;
        stack<int> path;
        path.push(ans.second);
        int v = ans.second;
        while (p[v] != -1){
            path.push(p[v]);
            v = p[v];
        }
        cout << ans.first << " " << ans.second << endl;
        while (!path.empty()){
            cout << path.top() << " ";
            path.pop();
        }
        cout << endl;
    }
    else {
        cout << "NO";
    }
    
}
