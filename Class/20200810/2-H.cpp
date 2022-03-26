#include <iostream>
#include <string>
#include <deque>
using namespace std;

void Op(deque<int> &qu){
    string s;
    cin >> s;
    if(s == "pushb"){
        int x;
        cin >> x;
        qu.push_back(x);
    }else if(s == "pushf"){
        int x;
        cin >> x;
        qu.push_front(x);
    }else if(s == "popb"){
        if(!qu.empty())     qu.pop_back();
    }else if(s == "popf"){
        if(!qu.empty())     qu.pop_front();
    }else if(s == "clear"){
        while(!qu.empty())     qu.pop_back();
    }else if(s == "first"){
        if(!qu.empty())     cout << qu.front() << endl;
    }else if(s == "last"){
        if(!qu.empty())     cout << qu.back() << endl;
    }
}

int main()
{
    deque<int> qu;
    int n;
    cin>>n;
    while(n--)
    {
        Op(qu);
    }
    deque<int>::iterator it;
    for(it=qu.begin();it!=qu.end();it++)
        cout<<*it<<endl;
    return 0;
}