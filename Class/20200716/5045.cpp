#include <iostream>
using namespace std;

int main(){
    int score[101]{0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1){
        int k;
        cin >> k;
        score[k] += 1;
    }
    cin >> n;
    for (int i = 0; i < n; i += 1){
        int k;
        cin >> k;
        if(i != n - 1){
            cout << score[k] << " ";
        }else{
            cout << score[k] << endl;
        }
    }
    return 0;
}