#include <iostream>
#include <string>
#include <map>
using namespace std;

void SortOutput(map<string, int> &sm){
    map<string, int>::iterator it;
    map<int, string> M1;
    for(it = sm.begin(); it != sm.end(); it++){
        cout << it -> first << " " << it -> second << endl;
        M1[it -> second] = it -> first;
    }
    map<int, string>::iterator it1;
    for(it1 = M1.begin(); it1 != M1.end(); it1++){
        cout << it1 -> second << " " << it1 -> first << endl;
    }
}

int main()
{
    map<string, int> sm;
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        int x;
        cin>>s>>x;
        sm[s] = x;
    }
    SortOutput(sm);
    return 0;
}