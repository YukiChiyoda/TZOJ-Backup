#include <iostream>
using namespace std;

void function(int n, string a, string b, string c){
    if(n == 0){
        return;
    }
    function(n - 1, a, c, b);
    cout << "Move disk " << n << " from " << a << " to " << c << endl;
    function(n - 1, b, a, c);
}

int main(){
    int n;
    cin >> n;
    function(n, "A", "B", "C");
    return 0;
}