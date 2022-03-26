#include <stdio.h>
#include <malloc.h>

typedef struct btnode{
    int data;
    struct btnode *left, *right;
}Bitnode;

Bitnode* CreatBitree_level(){
    Bitnode *root = NULL, *t, *s[1005];
    int x;
    int cur = 1, tot = 0;
    while(scanf("%d", &x), x != -1){
        if(x == 0){
            t = NULL;
        }else{
            t = (Bitnode*)malloc(sizeof(Bitnode));
            t -> data = x;
            t -> left = NULL;
            t -> right = NULL;
        }
        s[++tot] = t;
        if(tot == 1){
            root = t;
        }else{
            if(s[cur] != NULL){
                if(tot % 2 == 0){ //左子树
                    s[cur] -> left = t;
                }else{
                    s[cur] -> right = t;
                }
            }
			if(tot % 2 == 1)    cur += 1;
        }
    }
    return root;
}

int depth(Bitnode *t){
	if(t == NULL)    return 0;
	int t1 = depth(t -> left) + 1;
	int t2 = depth(t -> right) + 1;
	if(t1 > t2)    return t1;
	else    return t2;
}

int main(){
	Bitnode *t; 
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    t=CreatBitree_level();
	    printf("%d\n",depth(t));
	}
	return 0;
}