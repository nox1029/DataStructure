#include <stdio.h>

int number = 10;
int data[]={1,10,5,8,7,6,4,3,2,9};

void show()
{
    int i=0;
    for(i=0; i<number; i++)
    {
        printf("%d ", data[i]);
    }
}

void quickSort(int * data, int start, int end)
{
    if(start >= end) return; //원소가 1개인 경우 그대로 두기

    int key = start; //pivot?
    int i = start + 1, j=end, temp;

    while(i<=j) //엇갈릴 때까지 반복
    {
        while(i <= end && data[i] <= data[key])//키 값보다 큰 값을 만날때까지
            i++;
        while(j > start && data[j] >= data[key])//키 값보다 작은 값을 만날때까지
            j--;
        
        if(i>j){ //엇갈린 상태 발생
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        } else {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }
    quickSort(data, start, j-1);
    quickSort(data, j+1, end);
}


int main()
{
    quickSort(data, 0, number-1);
    show();
    return 0;
}

#if 0

#include <iostream>
#include <algorithm>

int N, data[1000000];

int main()
{
    std::cin>>N;
    for(int i=0; i<N; i++)
        std::cin>>data[i];
    
    std::sort(data, data+N);
    for(int i = 0; i<N; i++)
        std::cout<<data[i]<<std::endl;
    
    return 0;
}

#endif