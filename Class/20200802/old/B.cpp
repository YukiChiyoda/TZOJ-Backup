#include <iostream>
#include <algorithm>
using namespace std;

struct Rome{
    int w; //体积
    int v; //价值
    double r; //平均每体积的价值
};

bool function(const Rome a, const Rome b){
    return a.r > b.r;
}

int main(){
    int n, c;
    while(cin >> n >> c){
        Rome temp[200];
        for(int i = 0; i < n; i += 1){
            cin >> temp[i].w;
        }
        for(int i = 0; i < n; i += 1){
            cin >> temp[i].v;
            temp[i].r = temp[i].v * 1.00 / temp[i].w * 1.00;
        }
        sort(temp, temp + n, function);
        double s = 0.00;
        for(int i = 0; i < n; i += 1){
            int x = min(temp[i].w, c);
            c -= x;
            s += x * temp[i].r;
        }
        printf("%.1f\n", s);
    }
    return 0;
}