#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int c = (a / 10 * 1000) + (a % 10 * 10) + (b / 10 * 100) + (b % 10 * 1);
    cout << "The result is: " << c << endl;
    return 0;
}