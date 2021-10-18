#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int c[7]; // c는 queue에 들어간 노드를 나타냄. 방문처리목적
vector<int> v[8];

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    c[start] = true; //맨 위에 값을 삽입. 방문처리.
    while(!q.empty()){ // q가 비어있지 않으면
        int x = q.front(); //첫번째 넣었던 노드를 x에 대입
        q.pop(); //q에서 타겟이 되는 노드를 뺌.
        printf("%d ", x); // 타겟이 되는 노드 표츌.
        for(int i=0; i < v[x].size(); i++){ // 타겟이 되는 노드에 연결된 노드를 검색
            int y = v[x][i];
            //printf("y:%d ", y);
            //printf("c[y]:%d ", c[y]);
            if( !c[y] ){ //방문처리 됐는지 확인 후 큐에도 넣어주고 방문처리도 해줌.
                q.push(y); //검색된 노드를 차례대로 q에 넣음.
                c[y] = true; // 큐에 들어간 노드는 방문처리해줌.
            }
        }
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

    bfs(1);
    
    return 0;
}