#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int number = 7;
int c[7];
vector<int> a[8];

void bfs(int start){
    queue<int> q;
    q.push(start);

    c[start] = true; // 방문 처리
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << endl;
        for (int i = 0; i < a[x].size();i++){
            int y = a[x][i];
            if(!c[y]){
                q.push(y);
                c[y] = true;
            }
        }
    }
}
int main(){

    a[1].push_back(2);
    a[2].push_back(1);
    
    a[1].push_back(3);
    a[3].push_back(3);

    a[2].push_back(3);
    a[3].push_back(2);

    a[2].push_back(4);
    a[4].push_back(2);

    a[2].push_back(5);
    a[5].push_back(2);

    bfs(1);
};