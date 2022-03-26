#include <iostream>
#include <string>
#include <queue>
using namespace std;

priority_queue<char, vector<char>, greater<char> > qu;

void Input(){
    string s;
    cin >> s;
    int i;
    for(i = 0; i < s.length(); i += 1){
        qu.push(s[i]);
    }
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        Input();
        while(!qu.empty())
        {
            cout<<qu.top();
            qu.pop();
        }
        cout<<endl;
    }
    return 0;
}