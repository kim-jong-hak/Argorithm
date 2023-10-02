#include <stdio.h>

int getparent(int parent[], int x)// 특정한 노드의 부모를 찾을 수 있게 만든다.
{
    if(parent[x]==x) return x;
    return parent[x]  = getparent(parent, parent[x]);
}

// 두 부모 노드를 합치는 함수
void unionparent(int parent[],int a, int b)
{
    a= getparent(parent, a);
    b= getparent(parent, b);
    if(a<b)parent[b]=a;
    else parent[a]=b;
}

// 같은 부모를 가지는지 확인
int findparent(int parent[], int a, int b)
{
    a=getparent(parent, a);
    b=getparent(parent, b);
    if(a==b) return 1;
    return 0;
}
int main(void)
{
        int parent[11];
        for(int i=1; i<=10; i++)
        {
            parent[i]=i;
        }
     
        unionparent(parent,1,2);
        unionparent(parent,2,3);
        /*unionparent(parent,4,5);
        unionparent(parent,6,7);
        unionparent(parent,7,8);
*/
        printf("1과 5는 연결되어 있나요? %d\n",findparent(parent,2,3));
  //      unionparent(parent,1,5);
    return 0;
}