#include <iostream>
using namespace std;


#if 0
다음의 5이하의 자연수 데이터들을 오름차순으로 정렬 하세요.
1 3 2 4 3 2 5 3 1 2 3 4 4 3 5 1 2 3 5 2 3 1 4 3 5 1 2 1 1 1
#endif

int main()
{
    int arr[30] = {1, 3, 2, 4, 3, 2, 5, 3, 1, 2,
                   3, 4, 4, 3, 5, 1, 2, 3, 5, 2, 3, 1,
                   4, 3, 5, 1, 2, 1, 1, 1};
    
    int cnt[5]={0,};
    
    for(int i=0; i<30; i++)
    {
        for(int j=1; j<=5; j++)
            if(arr[i]==j) cnt[j-1] +=1;
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<cnt[i]; j++)
        {
            cout<<i+1<<' ';
        }
    }

    return 0;
}