#include <iostream>
#include <algorithm>
using namespace std;

struct Data{
    int num;
    int site;
};

bool function(Data a, Data b){
    return a.num < b.num;
}


int main(){
    Data temp[10];
    for(int i = 0; i < 10; i += 1){
        cin >> temp[i].num;
        temp[i].site = i + 1;
    }
    sort(temp, temp + 10, function);
    for(int i = 0; i < 10; i += 1)
        cout << temp[i].num << (i < 9 ? ' ' : '\n');
    for(int i = 0; i < 10; i += 1)
        cout << temp[i].site << (i < 9 ? ' ' : '\n');
    return 0;
}