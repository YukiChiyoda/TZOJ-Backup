#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    stringstream s;
    for(n++; --n; s << n) ;
    string temp = s.str();
    cout << count(temp.begin(), temp.end(), x + '0') << endl;
    return 0;
}