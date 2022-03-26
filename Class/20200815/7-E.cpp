#include <iostream>
#include <stdio.h>
using namespace std;

#define N 21

typedef struct ArcNode{ //邻接表中的边表结点
    int vertex; //顶点下标
    struct ArcNode *next; //指向下一个邻接点
}ArcNode;

typedef struct{ //图结构
    ArcNode* head[N]; //邻接表边表头指针
    int vNum; //顶点数
    int eNum; //边数
}Graph;

void CreateGraph(Graph &g){
    ArcNode *e;
    cin >> g.vNum >> g.eNum;
    for(int i = 1; i <= g.vNum; i += 1){
        g.head[i] = NULL;
    }
    for(int i = 0; i < g.eNum; i += 1){
        int u, v;
        cin >> u >> v;
        e = new ArcNode;
        e -> next = NULL, e -> vertex = v;
        if(g.head[u] == NULL){
            g.head[u] = e;
        }else{
            ArcNode *p = g.head[u];
            if(v < p->vertex){
                e -> next = p;
                g.head[u] = e;
            }else{
                ArcNode *q = p;
                p = p -> next;
                while (p != NULL){
                    if(v < p -> vertex){
                        break;
                    }
                    q = p;
                    p = p -> next;
                }
                e -> next = p;
                q -> next = e;
            }
        }
    }
}

void PrintGraph(Graph& g)
{
    int i;
    for(i=1; i<=g.vNum; i++)
    {
        ArcNode *p = g.head[i];
        printf("%d", i);
        while(p)
        {
            printf("->%d", p->vertex);
            p = p->next;
        }
        printf("\n");
    }
}

int main()
{
    Graph g;
    CreateGraph(g);
    PrintGraph(g);
    return 0;
}