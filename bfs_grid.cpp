#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool valid(int c, int a, int b){
    return (a <= c && c <= b);
}

void bfs(const vector< vector<char> > &gr, vector< vector<int> > &d, pair<int, int> start, pair<int, int> finish, int INF, int n, int m){
    queue <pair<int, int> > q;
    q.push(start);
    d[start.first][start.second] = 0;
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};
    while (!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int dir = 0; dir < dx.size(); dir++){
            int nx = x + dx[dir], ny = y + dy[dir];
            if (valid(nx, 1, n) && valid(ny, 1, m) && (gr[nx][ny] != '#') && d[nx][ny] == INF){
               d[nx][ny] = d[x][y] + 1;
               q.push({nx, ny}); // q.push(make_pair(nx, ny));
            }
        }
    }
}

void restore_path(vector< vector<char> > &gr, const vector< vector<int> > &d, pair<int, int> start, pair<int, int> finish){
    if (start.first == finish.first && start.second == finish.second){
        return ;
    }
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};
    for(int dir = 0; dir < dx.size(); dir++){
        int nx = finish.first + dx[dir], ny = finish.second + dy[dir];
        if (d[nx][ny] + 1 == d[finish.first][finish.second] && (start.first != nx || start.second != ny)){
            gr[nx][ny] = '+';
            restore_path(gr, d, start, {nx, ny});
            break;
        }
    }    
}

int main() {
    int n, m;
    cin >> n >> m;
    vector < vector<char> > gr(n + 2, vector<char>(m + 2, '#'));
    vector < vector<int> > d(n + 2, vector<int>(m + 2, n * m + 13));
    int start_x, start_y, finish_x, finish_y;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> gr[i][j];
            if (gr[i][j] == 's'){
                start_x = i, start_y = j;
            }
            if (gr[i][j] == 'f'){
                finish_x = i, finish_y = j;
            }            
        }
    }
    bfs(gr, d, {start_x, start_y}, {finish_x, finish_y}, n * m + 13, n, m);
    cout << d[finish_x][finish_y] << endl;
    restore_path(gr, d, {start_x, start_y}, {finish_x, finish_y});
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << gr[i][j];
        }
        cout << endl;
    } 
    return 0;
}

4 5
.....
..#..
..#..
s.#.f
