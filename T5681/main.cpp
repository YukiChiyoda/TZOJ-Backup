#include <iostream>
#include <string>
using namespace std;

int main(){
    string temp;
    getline(cin, temp);
    cout << "name:" << temp << endl;
    getline(cin, temp);
    cout << "age:" << temp << endl;
    getline(cin, temp);
    cout << "NO:" << temp << endl;
    return 0;
}