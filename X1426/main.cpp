#include <iostream>
#include <algorithm>
#include <queue>

struct Node{
    int Time;
    int Cost;
};

int n, m;
Node node[500];
std::priority_queue <int, std::vector<int>, std::less<int> > q;

bool function(const Node a, const Node b){
    return a.Time > b.Time;
}

int main(){
    std::cin >> m >> n;
    for(int i = 0; i < n; i += 1)
        std::cin >> node[i].Time;
    for(int i = 0; i < n; i += 1)
        std::cin >> node[i].Cost;
    std::sort(node, node + n, function);
    for(int i = n - 1, flag = 0; i; i -= 1){
        while(node[flag].Time >= i)
            q.push(node[flag++].Cost);
        if(!q.empty())
            q.pop();
    }
    while(!q.empty())
        m -= q.top(), q.pop();
    std::cout << m << std::endl;
    return 0;
}