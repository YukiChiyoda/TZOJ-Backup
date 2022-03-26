#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    int Begin;
    int End;
}num[1000000];

bool function(const Node a, const Node b){
    if(a.End != b.End)    return a.End < b.End;
    return a.Begin < b.Begin;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i += 1)
        cin >> num[i].Begin >> num[i].End;
    sort(num, num + n, function);
    int temp = -1;
    int answer = 0;
    for(int i = 0; i < n; i += 1)
        if(temp < num[i].Begin)
            temp = num[i].End, answer += 1;
    cout << answer << endl;
    return 0;
}