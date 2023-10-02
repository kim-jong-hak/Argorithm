#include<stdio.h>
int main()
{
    
    int array[10]={3,31,48,73,8,11,20,29,65,15};
    int size=10;

    int key=0, j=0;
    for(int i=1;i<size;i++)
    {
        key=array[i];
        j=i-1;
        while(j>=0&&array[j]>key)
        {
            array[j]=array[j+1];
            j=j-1;
        }
        array[j+1]=key;
        
    }

    
    for(int i=0;i<10;i++)
    {
        printf("%d\n",array[i]);
    }
    
    
    
    return 0;
}

/*
// 삽입 정렬 함수
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i]; // 현재 원소를 key에 저장
        j = i - 1;

        // key보다 큰 원소를 오른쪽으로 이동
        while (j >= 0 && arr[j] > key) {ß
            arr[j + 1] = arr[j]; // 큰 원소를 오른쪽으로 이동
            j = j - 1;
        }
        arr[j + 1] = key; // key를 올바른 위치에 삽입
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    printf("삽입 정렬 결과:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // 정렬된 배열 출력
    }
    printf("\n");

    return 0;
}*/
