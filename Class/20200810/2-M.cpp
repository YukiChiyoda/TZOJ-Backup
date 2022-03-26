#include <iostream>
#include <string>
#include <map>
using namespace std;

void Input(map<string, int> &sm){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        sm[s]++;
    }
}

int main()
{
    int m;
    map<string, int> sm;
    Input(sm);
    cin>>m;
    while(m--)
    {
        string s;
        cin>>s;
        cout<<sm[s]<<endl;
    }
    return 0;
}