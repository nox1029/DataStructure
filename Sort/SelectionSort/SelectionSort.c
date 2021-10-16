#include<stdio.h>

//주어진 배열의 원소들을 오름차순으로 나열하기

int main()
{
    int i, j, min, index, temp;
    int arr[10] = {1,10,5,8,7,6,4,3,2,9};
    for(i = 0; i<10; i++)
    {
        min=10000;
        for(j=i; j<10; j++)
        {
            if(min>arr[j]){
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i]; //원래 앞에 있던 숫자
        arr[i] = arr[index]; // 원래 앞에있던 자리에 작은 숫자를 옮김
        arr[index]=temp; //작은 숫자가 있던 자리에 앞의 큰 숫자를 옮김
    }

    for(i=0; i<10; i++) printf("%d ", arr[i]);

    return 0;
}