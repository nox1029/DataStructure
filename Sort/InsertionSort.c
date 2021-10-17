#include <stdio.h>

int main()
{
    int i, j, temp;
    int arr[10] = {1,10,5,8,7,6,4,3,2,9};
    for( i=0;i<9;i++) //큰값을 오른족으로 밀어내는 방식이기 때문에 마지막 10번째는 안해도 됨 9가 마지막
    {
        j=i;
        while(arr[j]>arr[j+1])
        {
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    for(i = 0; i<10; i++) printf("%d ", arr[i]);
    return 0;
}