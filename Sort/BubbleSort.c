#include <stdio.h>

int main()
{
    int i, j, temp;
    int arr[10] = {1,10,5,8,7,6,4,3,2,9};
    for( i=0;i<10;i++)
    {
        for( j=0; j<9-i; j++)
        {
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i = 0; i<10; i++) printf("%d ", arr[i]);

    return 0;
}