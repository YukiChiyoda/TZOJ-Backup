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

void preorder(Bitnode* s){
    if(s == NULL)    return;
    printf(" %d", s -> data);
    preorder(s -> left);
    preorder(s -> right);
}

int main(){
	Bitnode *t;
	int n;
	scanf("%d", &n);
	while(n--){
		t = CreatBitree_level();
		preorder(t);
		printf("\n");
	}
	return 0;
}