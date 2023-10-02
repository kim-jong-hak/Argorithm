#include <stdio.h>


int divition(int array[],int start ,int size)
{
      if(start<=size)
     {
        int mid= start+(start-size)/2;


     } 
}


int main()
{

    int array[]={3,5,1,2,8,5,3,4,9,4,10};
    int size= sizeof(array)/sizeof(int)-1;
    printf("초기 배열 원소들 ");
    for(int i=0;i<=size;i++)
    printf("%d ",array[i]);

divition(array,0,size);


    return 0;
}