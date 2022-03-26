#include <iostream>
#include <queue>
using namespace std;

struct List{
    string Name;
    int long long Priority;
};

struct Cmp{
    bool operator()(List a, List b){
        return a.Priority < b.Priority;
    }
};

int main(){
    priority_queue <List, vector<List>, Cmp> q;
    int t;
    cin >> t;
    while(t--){
        string Command;
        cin >> Command;
        if(Command == "pop"){
            if(q.empty())
                cout << "none" << endl;
            else{
                cout << q.top().Name << " " << q.top().Priority << endl;
                q.pop();
            }
        }else if(Command == "push"){
            List temp;
            cin >> temp.Name >> temp.Priority;
            q.push(temp);
        }
    }
    return 0;
}