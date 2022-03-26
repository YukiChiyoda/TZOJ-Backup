//Wrong Answer
#include <iostream>
#include <algorithm>
using namespace std;

struct Paper{
    int time;
    int value;
    double average;
};

bool function(const Paper a, const Paper b){
    return a.average > b.average;
}

int main(){
    int m, n;
    while(cin >> m >> n, m || n){
        Paper temp[20];
        for(int i = 0; i < m; i += 1){
            cin >> temp[i].time >> temp[i].value;
            temp[i].average = (temp[i].value * 1.00) / (temp[i].time * 1.00);
            cout << i << "<<" << temp[i].average << endl; 
        }
        sort(temp, temp + m, function);
        double s = 0.00;
        for(int i = 0; i < n; i += 1){
            if(n >= temp[i].time){
                s += temp[i].value;
                n -= temp[i].time;
            }else{
                s += temp[i].average * n;
                n -= n;
            }
        }
        printf("%.2f\n", s);
    }
    return 0;
}