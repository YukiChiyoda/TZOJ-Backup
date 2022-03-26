#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[100];
    for (int i = 0; i < n; i += 1){
        cin >> num[i];
    }
    int m;
    cin >> m;
    for (int c = 0; c < m; c += 1){
        int a, b;
        cin >> a >> b;
        int s = 0;
        for (int i = 0; i < n; i += 1){
            if(num[i] == a && num[i + 1] == b){
                s += 1;
            }
        }
        if(s != 0){
            printf("(%d,%d)=%d\n", a, b, s);
        }else{
            cout << "Not Found!" << endl;
        }
    }
    return 0;
}