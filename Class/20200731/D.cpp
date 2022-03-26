#include <iostream>
#include <algorithm>
using namespace std;

struct Member{
    string Name;
    int Score;
    int Flag;
};

bool function(const Member a, const Member b){
    if(a.Flag != b.Flag)    return a.Flag > b.Flag;
    if(a.Score != b.Score)      return a.Score > b.Score;
    return a.Name < b.Name;
}

int main(){
    int n;
    while(cin >> n){
        Member temp[2000];
        for(int i = 0; i < n; i += 1){
            cin >> temp[i].Name >> temp[i].Score >> temp[i].Flag;
        }
        sort(temp, temp + n, function);
        for(int i = 0; i < n; i += 1){
            cout << temp[i].Name << " " << temp[i].Score << " " << temp[i].Flag << endl;
        }
    }
    return 0;
}