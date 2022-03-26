#include <iostream>

int dfs(int n, int k){
    if(!n || !k || n < k)
        return 0;
    if(k == 1 || n == k)
        return 1;
    return dfs(n - 1, k - 1) + dfs(n - k, k);
}

int main(){
    int n, k;
    std::cin >> n >> k;
    std::cout << dfs(n, k) << std::endl;
    return 0;
}