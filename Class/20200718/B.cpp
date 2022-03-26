#include <iostream>
using namespace std;

double fact_sum(int x){
    double a = 0.00;
    double c[x + 1];
    for (int i = 0; i <= x; i += 1){
        if(i == 0){
            c[i] = 1;
            continue;
        }
        c[i] = c[i - 1] * i;
    }
    /*
    for (int i = 0; i <= x; i += 1){
        cout << c[i] << endl;
    }
    */
    for (int i = 0; i <= x; i += 1){
        a += 1.00 / c[i];
    }
    return a;
}

int main()
{
    int n;
    while(cin>>n)
    {
        printf("%.3f\n", fact_sum(n));
    }
    return 0;
}