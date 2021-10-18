#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int arr[10001]={0};

    cin>>N;
    for(int i = 0; i<N; i++)
    {
        int temp;
        cin>>temp;
        arr[temp]++;
    }

    for(int i=0; i<10000; i++)
    {
        for(int j=0; j<arr[j]; j++)
            cout<< i <<'\n';
    }
    
    return 0;
}