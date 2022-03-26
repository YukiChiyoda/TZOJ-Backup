#include <stdio.h>

void Swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b)!=EOF)
    {
        Swap(&a, &b);
        printf("%d %d\n", a, b);       
    }
    return 0;
}