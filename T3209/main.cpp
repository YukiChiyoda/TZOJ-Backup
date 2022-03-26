#include <cstdio>
#include <cstring>
using namespace std;

struct Node{
	char data;
	Node *left, *right;
};

int t;
char a[27], b[27];

void settree(char *InOrder, char *PreOrder, int length){
	if(length == 0)
		return;
	Node *node = new Node;
	node -> data = *PreOrder;
	int root = -1;
	while(root < length)
		if(InOrder[++root] == *PreOrder)
			break;
	/*
	int root = 0;
	for( ; root < length; root += 1)
		if(InOrder[root] == *PreOrder)
			break;
	*/
	settree(InOrder, PreOrder + 1, root);
	settree(InOrder + root + 1, PreOrder + root + 1, length - root - 1);
	printf("%c", node -> data);
	delete node;
	return;
}

int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%s", a); //InOrder
		scanf("%s", b); //PreOrder
		settree(a, b, strlen(a));
		printf("\n");
	}
	return 0;
}