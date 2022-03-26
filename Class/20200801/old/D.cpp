#include <iostream>
using namespace std;

struct Node{
    int coeff;
    int index;
};

Node a[101], b[101], c[201];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i += 1){
        cin >> a[i].coeff >> a[i].index;
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i += 1){
        cin >> b[i].coeff >> b[i].index;
    }
    int i = 0, j = 0, k = 0;
    while(i < n && j < m){
        if(a[i].index < b[j].index){
            c[k++] = b[j++];
        }else if(a[i].index > b[j].index){
            c[k++] = a[i++];
        }else{
            if(a[i].coeff + b[j].coeff != 0){
                c[k].coeff = a[i].coeff + b[j].coeff;
                c[k].index = a[i].index;
                k += 1;
            }
            i += 1, j += 1;
        }
    }
    while(i < n){
        c[k++] = a[i++];
    }
    while(j < m){
        c[k++] = b[j++];
    }
    for(int t = 0; t < k; t += 1){
        if(t != 0){
            cout << " ";
        }
        cout << c[t].coeff << " " << c[t].index;
    }
    cout << endl;
    return 0;
}