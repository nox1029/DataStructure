#include <stdio.h>

int num = 8;

int size;
int sorted[8];
int cnt = 0;

void merge(int arr[], int start, int middle, int end)
{
    int i = start; // i : 첫번째 배열의 index
    int j = middle + 1; // j : 두번째 배열의 index
    int k = start; //합쳐질 배열 sorted의 인덱스

    while( i <= middle && j<= end) // 두 배열 모두 끝까지 스캔이 안끝났을 경우 계속 진행
    {
        if(arr[i] <= arr[j]){
            sorted[k] = arr[i];
            i++;
        }else{
            sorted[k] = arr[j];
            j++;
        }
    }

    if(i>middle){ //두 군데로 분할된 하위 배열을 하나로 합치는 작업이 마무리됨
        for(int t = j; t<= end; t++){
            sorted[k] = arr[t];
            k++;
        }
    }else{
        for(int t = i; t<= middle; t++){
            sorted[k] = arr[t];
            k++;
        }
    }

    for(int t = start; t<= end; t++){
        arr[t] = sorted[t];
    }
}

int mergeSort(int arr[], int start, int end)
{
    if(start<end){
        int middle = (start + end)/2;
        mergeSort(arr, start, middle);
        mergeSort(arr, middle+1, end);
        merge(arr, start, middle, end);
    }
}

int main()
{
    int array[num] = {7,6,5,8,3,5,9,1};
    mergeSort(array, 0, num-1);
    for(int i=0; i<num; i++){
        printf("%d ", array[i]);
    }

    return 0;
}