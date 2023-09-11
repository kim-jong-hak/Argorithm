import java.util.*;
import java.io.*;


    //   V=노드의 개수, E 에지,간선의 개수
    // dfs 시간복잡도 O(V+E)

    /*
    *   1. 노드를 다시 방문해서 안됨
    *   2. dfs방식은 후입선출 특성을 가지고 있다.
    *   3. 인접 리스트관계를 가지고 있다.
    * */


public class dfs_1 {

    static int N; // 노트가 입력될 변수
    static int E; // 에지(간선)이 입력될 변수
    static boolean door[]; // 방문자 입력 변수
    static boolean no_of=false; // DFS 중단여부 확인 변수
    static ArrayList<ArrayList<Integer>> list=new ArrayList<>();
    public static void main(String[] args)throws IOException
    {
        BufferedReader in =new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st=new StringTokenizer(in.readLine()," ");

        N= Integer.parseInt(st.nextToken());
        E= Integer.parseInt(st.nextToken());
        door=new boolean[N];

        for(int i=0;i<N;i++)
        {
            list.add(new ArrayList<>());
        }


        for(int i=0;i<E;i++)
        {
            st=new StringTokenizer(in.readLine()," ");
            int x=Integer.parseInt(st.nextToken());
            int y=Integer.parseInt(st.nextToken());

            list.get(x).add(y);
            list.get(y).add(x);
        }


        for(int i=0;i<N;i++)
        {
            dfs(i,1);
            if(no_of)
            {
                break;
            }
        }

        if(no_of)
        {
            System.out.println("1");
        }else {
            System.out.println("0");
        }

        for(int i=0;i<list.size();i++)
            System.out.println(list.get(i).toString());

    }

    static void dfs(int i, int line)
    {
        if(line==5||no_of)
        {
            no_of=true;
            return;
        }

        door[i]=true;

        for(int v:list.get(i))
        {
            if(door[v]==false)
            {
                dfs(v, line + 1);
            }
        }

        door[i]=false;

    }

}

