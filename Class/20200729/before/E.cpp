#include <iostream>
using namespace std;

string temp;
char little[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z'};

void function(int n){
    if(n == 0){
        return;
    }
    function(n - 1);
    temp += little[n - 1];
    function(n - 1);
    return;
}

int main(){
    int n;
    cin >> n;
    function(n);
    cout << temp << endl;
    return 0;
}