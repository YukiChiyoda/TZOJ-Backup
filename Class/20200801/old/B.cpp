#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* CreateLinkList(int n){
    Node *head = new Node;
    head -> next = NULL;
    Node *tail = head;
    for(int i = 0; i < n; i += 1){
        Node *temp = new Node;
        cin >> temp -> data;
        tail -> next = temp;
        tail = temp;
    }
    tail -> next = NULL;
    return head;
}

Node* Find(Node* head, int x){
    Node *temp = head -> next;
    Node *last = head;
    while(temp != NULL){
        if(temp -> data == x){
            return last;
        }else{
            last = temp;
            temp = temp -> next;
        }
    }
    return NULL;
}

void Delete(Node* p){
    Node *temp = p -> next;
    p -> next = temp -> next;
    delete temp;
}


/*
【插入函数】
void Insert(Node* p, int x){
    Node *temp = new Node;
    temp -> data = x;
    temp -> next = p -> next; //注意此句与下句的顺序不可互换
    p -> next = temp;
}
*/


void PrintLinkList(Node *head)
{
    int flag = 0;
    Node *p = head->next, *q;
    while(p)
    {
        if(flag)
            printf(" ");
        flag = 1;
        cout<<p->data;
        q = p;
        p = p->next;
        delete q;
    }
    delete head;
}

int main()
{
    int n, x;
    cin>>n;
    Node *head = CreateLinkList(n);
    cin>>x;
    Node *p = Find(head, x);
    Delete(p);
    PrintLinkList(head);
    return 0;
}