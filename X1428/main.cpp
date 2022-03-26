#include <iostream>

int main(){
    int n, m;
    std::cin >> n >> m;
    int answer = 0;
    for(int i = 0, sum = 0; i < n; i += 1){
        int x;
        std::cin >> x;
        sum += x;
        if(sum > m)
            answer += 1, sum = x;
    }
    std::cout << answer + 1 << std::endl;
    return 0;
}