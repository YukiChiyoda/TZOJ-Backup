//找到的某神奇面向对象(?)写法
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

class CSS{

private:
    int M, N;
    struct node{
        int T, V;
        double p;
    }paper[25];

    static bool compare_node(node a, node b) {
        return a.p > b.p;
    }

public:
    bool Do(){
        cin >> M >> N;
        if(M == 0 && N == 0)
            return false;
        for(int i = 0; i < M; i += 1){
            int T, V;
            cin >> T >> V;
            paper[i].T = T;
            paper[i].V = V;
            paper[i].p = (double) V / (double) T;
        }
        sort(paper, paper + M, compare_node);
        double ans = 0;
        for(int i = 0; i < M; i += 1){
            int temp = N - paper[i].T;
            ans += paper[i].V;
            if(temp < 0){
                ans += temp * paper[i].p;
                break;
            }
            N = temp;
        }
        printf("%.2f\n", ans);
        return true;
    }

};

int main() {
    CSS function;
    while(function.Do());
    return 0;
}