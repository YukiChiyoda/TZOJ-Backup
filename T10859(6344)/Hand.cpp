#include <iostream>
using namespace std;

struct Node{
    string Name;
    Node *Next;
};

class Book{
    private:
        Node *head = NULL;

    public:
        void init(int n){
            head = new Node;
            head -> Next = NULL;
            Node *cur = head;
            for(int i = 0; i < n; i += 1){
                string temp;
                cin >> temp;
                Node *p = new Node;
                p -> Name = temp;
                p -> Next = NULL;
                cur -> Next = p;
                cur = p;
            }
        }

        int find(string x){
            Node *cur = head;
            Node *before = NULL;
            int temp = -1; //The head of the list is empty.
            while(cur != NULL)
                if(cur -> Name == x){
                    before -> Next = cur -> Next;
                    cur -> Next = head -> Next;
                    head -> Next = cur;
                    return temp;
                }
                else
                    before = cur, cur = cur -> Next, temp += 1;
            return temp;
        }

        void free(Node *p){
            if(p == NULL)
                p = head;
            if(p -> Next != NULL)
                free(p -> Next);
            delete p;
        }
};

int main(){
    int n, m;
    cin >> n >> m;
    Book element;
    element.init(n);
    int result = 0;
    for(int i = 0; i < m; i += 1){
        string temp;
        cin >> temp;
        result += element.find(temp);
    }
    cout << result << endl;
    element.free(NULL);
    return 0;
}