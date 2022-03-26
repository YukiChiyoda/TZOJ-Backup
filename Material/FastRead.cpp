#include <iostream>

inline int read(){
    int cache = 0;
    bool flag = false;
    char temp = getchar();
    for( ; !isdigit(temp); temp = getchar())
        if(temp == '-')
            flag |= 1;
    for( ; isdigit(temp); temp = getchar())
        cache = (cache << 3) + (cache << 1) + (temp ^ '0');
    return flag ? -cache : cache;
}

int main(){
    for(int temp = 0; ; temp = read())
        std::cout << temp << std::endl;
    return 0;
}