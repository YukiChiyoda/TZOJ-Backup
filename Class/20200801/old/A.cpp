#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* CreateLinkList(int n){
    Node *head = NULL;
    Node *tail = NULL;
    for(int i = 0; i < n; i += 1){
        Node *temp = new Node;
        cin >> temp -> data;
        if(head == NULL){ //此时temp是第一个节点
            head = temp;
        }else{
            tail -> next = temp;
        }
        tail = temp;
    }
    tail -> next = NULL;
    return head;
}

void PrintLinkList(Node *head)
{
    int flag = 0;
    Node *p = head, *q;
    while(p)
    {
        if(flag)
            cout<<" ";
        flag = 1;
        cout<<p->data;
        q = p;
        p = p->next;
        delete q;
    }
}

int main()
{
    int n;
    cin>>n;
    Node *h = CreateLinkList(n);
    PrintLinkList(h);
    return 0;
}