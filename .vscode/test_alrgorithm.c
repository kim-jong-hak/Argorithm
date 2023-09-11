#include <stdio.h>
int main(void)
{

    int add [] = {1,2,3,4,5,6,7,8,9,10};

    int key=100; // 찾는 값
    int midi_i=0; // 중간값
    int start=0; // 배열의 첫번째 인덱스 값
    int end=(sizeof(add)/sizeof(int))-1; // 배열의 마지막 인덱스 값
    int loop_num=end/2; // for함수가 배열의 2분의 1정도만 돌 수 있게 값을 지정

    for(int i=0;i<=loop_num;i++)
    {
        midi_i=(start+end)/2;
      
        if(add[midi_i]>key)
        {
            end=midi_i-1;
        }
        
        if(add[midi_i]<key)
        {
            start=midi_i+1;
        }
        
        if(add[midi_i]==key) 
        {
            printf("%d의 데이터는 [%d]번 인덱스에 저장되어 있습니다.",add[midi_i],midi_i);
            break;
        }else if (i==loop_num)
        {
            printf("데이터를 찾지 못했습니다.");
        }
        
    }

    return 0;
}