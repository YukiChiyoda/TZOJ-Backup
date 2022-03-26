#include <iostream>
using namespace std;

int main(){
    string week[7] {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int n;
    cin >> n;
    n = n % 7;
    cout << week[n] << endl;
    return 0;
}