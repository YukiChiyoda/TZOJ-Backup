#include <iostream>
#include <string>
#include <list>
using namespace std;

void Insert(list<int> &lister, int pos, int x){
    int n = 0;
    list<int>::iterator it;
    for(it = lister.begin(); it != lister.end(); it++){
        if(n + 1 == pos){
            break;
        }
        n += 1;
    }
    lister.insert(it, x);
}

void Delete(list<int> &lister, int pos){
    int n = 0;
    list<int>::iterator it;
    for(it = lister.begin(); it != lister.end(); it++){
        if(n + 1 == pos){
            break;
        }
        n += 1;
    }
    lister.erase(it);
}

int Find(list<int> &lister, int x){
    int n = 0;
    list<int>::iterator it;
    for(it = lister.begin(); it != lister.end(); it++){
        if(*it == x){
            return n + 1;
        }
        n += 1;
    }
    return -1;
}

void Update(list<int> &lister, int pos, int x){
    int n = 0;
    list<int>::iterator it;
    for(it = lister.begin(); it != lister.end(); it++){
        if(n + 1 == pos){
            break;
        }
        n += 1;
    }
    *it = x;
}

void Reverse(list<int> &lister){
    lister.reverse();
}

void PrintLinkList(list<int> &iList)
{
    list<int>::iterator it;
    int flag = 0;
    for(it=iList.begin();it!=iList.end();it++)
    {
        if(flag)
            cout<<" ";
        flag = 1;
        cout<<*it;
    }
    cout<<endl;
}

int main()
{
    list<int> iList;
    int n, x, pos;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        iList.push_back(x);
    }
    string cmd;
    while(cin>>cmd)
    {
        if(cmd=="Insert")
        {
            cin>>pos>>x;
            Insert(iList, pos, x);
            PrintLinkList(iList);
        }
        else if(cmd=="Delete")
        {
            cin>>pos;
            Delete(iList, pos);
            PrintLinkList(iList);
        }
        else if(cmd=="Find")
        {
            cin>>x;
            pos = Find(iList, x);
            cout<<pos<<endl;
        }
        else if(cmd=="Update")
        {
            cin>>pos>>x;
            Update(iList, pos, x);
            PrintLinkList(iList);
        }
        else if(cmd=="Reverse")
        {
            Reverse(iList);
            PrintLinkList(iList);
        }
        else
            break;
    }
    return 0;
}