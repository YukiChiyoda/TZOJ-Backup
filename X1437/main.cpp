#include <iostream>
#include <vector>
#define Pair std::pair <int, int>

int n;
std::vector <Pair> v;

bool judge(Pair x){
    std::vector <Pair> :: iterator it;
    for(it == v.begin(); it != v.end(); it ++)
        if(x.first == it -> first && x.second == it -> second)
            return true;
    return false;
}

int main(){
    std::cin >> n;
    while(n--){
        int x, y;
        std::cin >> x >> y;
        v.push_back({x, y});
    }
    return 0;
}