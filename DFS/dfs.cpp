#include <iostream>
#include <vector>

using namespace std;

int num = 7;
int c[7]; // c는 queue에 들어간 노드를 나타냄. 방문처리목적

vector<int> v[8];

void dfs(int start)
{
    if(c[start]) return;
    c[start] = true;
    cout<<start<<" ";
    for(int i=0; i<v[start][i]; i++){
        int y = v[start][i];
        dfs(y);
    }

}

int main()
{
    // 1과 2를 연결
    v[1].push_back(2);
    v[2].push_back(1);
    // 1과 3를 연결
    v[1].push_back(3);
    v[3].push_back(1);
    // 2과 3를 연결
    v[2].push_back(3);
    v[3].push_back(2);
    // 2과 4를 연결
    v[2].push_back(4);
    v[4].push_back(2);
    // 2과 5를 연결
    v[2].push_back(5);
    v[5].push_back(2);
    // 4과 5를 연결
    v[4].push_back(5);
    v[5].push_back(4);
    // 3과 6를 연결
    v[3].push_back(6);
    v[6].push_back(3);
    // 3과 7를 연결
    v[3].push_back(7);
    v[7].push_back(3);
    // 6과 7를 연결
    v[6].push_back(7);
    v[7].push_back(6);

    dfs(1);
    
    return 0;
}