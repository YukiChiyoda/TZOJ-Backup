#include <iostream>

int main(){
    int long long n, m, k, x;
    std::cin >> n >> m >> k >> x;
    int long long temp = 1;
    const int base = 10;
    k = k % n;
    while(k){
        if(k & 1)
            k = temp * base % n;
        for(int i = 0; i < 10 % n; i += 1)
            x = (x + m) % n;
        k >>= 1;
        temp = base * base % n;
    }
    std::cout << x << std::endl;
    return 0;
}