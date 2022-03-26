#include <iostream>
#include <math.h>
using namespace std;

int Prime(int n){ 
    for(int i = 2; pow(i, 2) <= n; i += 1){ //素数只需判定算术平方根以内即可
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF)
	{
		printf("%d\n", Prime(n));
	}
	return 0;
}