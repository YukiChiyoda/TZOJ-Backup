#include <iostream>
#include <algorithm>

struct Homework{
    int Date;
    int Value;
};

int n;
Homework node[10000];

bool function(const Homework a, const Homework b){
    return a.Value > b.Value;
}

int main(){
    std::cin >> n;
    for(int i = 0; i < n; i += 1)
        std::cin >> node[i].Date >> node[i].Value;
    std::sort(node, node + n, function);
    int long long answer = 0;
    for(int i = 0; i < n; i += 1)
        //if(node[i].Date <= i)
            answer += node[i].Value;
    std::cout << answer << std::endl;
    return 0;
}