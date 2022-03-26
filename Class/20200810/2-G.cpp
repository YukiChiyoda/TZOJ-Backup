#include <iostream>
#include <string>
#include <queue>
using namespace std;

void Op(queue<int> &qu){
    string command;
    cin >> command;
    if(command == "push"){
        int x;
        cin >> x;
        qu.push(x);
    }else if(command == "pop"){
        if(!qu.empty())     qu.pop();
    }else if(command == "clear"){
        while(!qu.empty())      qu.pop();
    }else if(command == "first"){
        if(!qu.empty())     cout << qu.front() << endl;
    }else if(command == "last"){
        if(!qu.empty())     cout << qu.back() << endl;
    }
}

int main()
{
    queue<int> qu;
    int n;
    cin>>n;
    while(n--)
    {
        Op(qu);
    }
    while(!qu.empty())
    {
        cout<<qu.front()<<endl;
        qu.pop();
    }
    return 0;
}