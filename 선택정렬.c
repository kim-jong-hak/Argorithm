#include <stdio.h>
int bing_array_index(int *array,int i)
{
    int bing_value=0;
    int index;

    for(int ii=0;ii<i;ii++)
    {
        if(bing_value<array[ii])
        {
            bing_value=array[ii];
            index=ii;
        }
    }


    return index;
}
void array_chain(int *array,int bing_index,int end_index)
{
    int tem=0;
    tem=array[bing_index];

    array[bing_index]=array[end_index];
   array[end_index]=tem;

    
}

int main()
{
   int array[]={8,31,48,73,3,65,20,29,11,15};

    int bing_value_index;
 
 for(int i=10;i>1;i--)
 {
    bing_value_index=bing_array_index(array,i);
     array_chain(array,bing_value_index,i-1);

    for(int i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

 }



    return 0;
}