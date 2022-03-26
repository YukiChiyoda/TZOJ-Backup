#include <iostream>
#include <math.h>
using namespace std;

int Count(int n, int m){
    int t = 0;
    for (int i = n; i <= m; i += 1){
        int a, b, c;
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if(pow(a, 3) + pow(b, 3) + pow(c, 3) == i){
            t += 1;
        }
    }
    return t;
}

int main()
{ 
	int n, m, num;
	scanf("%d%d", &n, &m);
	num = Count(n, m);//调用Count函数计算水仙花数个数
	printf("%d\n", num); 
	return 0;
}