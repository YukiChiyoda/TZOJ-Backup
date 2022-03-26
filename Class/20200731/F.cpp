#include <iostream>
using namespace std;

void GetValue(int *n, int a[]){
    cin >> *n;
    for(int i = 0; i < *n; i += 1){
        cin >> a[i];
    }
}