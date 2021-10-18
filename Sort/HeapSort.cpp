#include <iostream>
#include<vector>

using namespace std;
/*
index가 i일때 자식노드 2*i+1 or 2*i+2
자식노드가 i번째 인덱스 일때 부모 노드 (i-1)/2
최대힙(max heap) : 부모노드가 항상 자식보다 크도록 유지

Heapify algoritm(힙생성 알고리즘) : 
최대 힙이 구성된 상태에서
노드의 두 자식중 더 큰 자식과 자신의 위치를 교체.

풀이 순서
1 : 배열을 완전이진트리 형태로 보고 최대힙 형태로 변환
2 : root에 있는 가장 큰 값을 맨 뒤쪽으로 보내고 힙 트리의 크기를 1씩 뺀다.
3 : 가장 큰 값을 뺀 상태로 다시 heapify 진행.
4 : 2와 3의 과정 반복.
*/

int number = 9;
int heap[9] = {7,6,5,8,3,5,9,1,6};
/*      7
    6      5
  8   3  5   9
1  6
*/

int main()
{
    //최대힙구성
    for(int i=1; i<number; i++)
    {
        int c = i; // i==1 : 6으로 테스트. i==2 : 5로 테스트. i==3 : 8로 테스트
        do{
            int root = (c-1)/2; //자식노드 index가 c일때 부모노드
            if(heap[root] < heap[c]){ //부모노드가 자식보다 작다면 교환
                int temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            c = root; //부모의 위치로 인덱스를 옮김. 밑에서부터 윗단계로 올라감.
        } while(c != 0); // 하위트리에서 상위단계보다 클수 있으므로 인덱스가 올라 갈때마다 root까지 스캔
    }
    // 크기를 줄여가며 반복적으로 힙을 구성 // heapify
    for(int i=number-1; i>=0; i--)
    {
        int temp = heap[0]; //맨뒤 노드 heap[i]와 root인 heap[0]를 교체
        heap[0] = heap[i];
        heap[i] = temp;
        int root = 0;
        int c = 1; // c : child
        do{
            c = 2 * root+1; //root의 자식노드
            //자식중에 더 큰값찾기
            if(c < i-1 && heap[c] < heap[c+1]) c++;
            //루트보다 자식이 크다면 교환
            if(c < i && heap[root] < heap[c]){
                temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c; //한단계씩 내려감
        } while(c<i);
    }

    for(int i=0; i<number; i++)
    {
        printf("%d", heap[i]);
    }

    return 0;
}