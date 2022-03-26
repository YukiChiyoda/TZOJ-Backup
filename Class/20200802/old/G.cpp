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
    while(cin >> m >> n, m != 0 && n != 0){
        Paper temp[20];
        for(int i = 0; i < m; i += 1){
            cin >> temp[i].time >> temp[i].value;
            temp[i].average = temp[i].value * 1.00 / temp[i].time * 1.00;
        }
        sort(temp, temp + m, function);
        double s = 0.00;
        for(int i = 0; i < n; i += 1){
            int x = min(temp[i].time, n);
            n -= x;
            s += x * temp[i].average;
        }
        printf("%.2f\n", s);
    }
    return 0;
}