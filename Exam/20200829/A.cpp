#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* before;
};

int n;
Node node[1000001];

int main(){
    //freopen("suffix.in", "r", stdin);
    //freopen("suffix.out", "w", stdout);
    cin >> n;
    node[1].before = NULL;
    for(int i = 2; i <= n; i += 1){
        int x;
        cin >> x;
        node[i].before = &node[x];
    }
    for(int i = 1; i <= n; i += 1){
        int x;
        cin >> x;
        node[i].value = x;
    }
    for(int i = 1; i <= n; i += 1){
        int maxer = 0;
        int answer = 0;
        Node *temp = &node[i];
        while(temp -> before != NULL){
            if(maxer < temp -> value){
                maxer = temp -> value;
                answer = 0;
            }
            if(temp -> value == maxer)
                answer += 1;
            temp = temp -> before;
        }
        if(i != 1)    cout << " ";
        cout << answer + 1;
    }
    cout << endl;
    return 0;
}