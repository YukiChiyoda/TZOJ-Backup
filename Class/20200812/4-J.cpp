#include <iostream>
#include <map>
using namespace std;

const int k = 479001600;

int main(){
    map<int, int> M;
    int x;
    while(cin >> x){
        M[x]++;
    }
    map<int, int>::iterator it;
    int answer = 0;
    for(it = M.begin(); it != M.end(); it++){
        if(k % it -> first == 0){
            int y = k / it -> first;
            if(y == it -> first){
                answer += M[y] - 1;
            }else{
                answer += M[y];
            }
        }
    }
    cout << answer / 2 << endl;
    return 0;
}