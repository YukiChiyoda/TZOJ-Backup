#include <iostream>
#include <string>
#include <queue>
using namespace std;

void Input(priority_queue<char> &qu){
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i += 1){
        qu.push(s[i]);
    }
}

int main()
{
    priority_queue<char> qu;
    int n;
    cin>>n;
    while(n--)
    {
        Input(qu);
        while(!qu.empty())
        {
            cout<<qu.top();
            qu.pop();
        }
        cout<<endl;
    }
    return 0;
}