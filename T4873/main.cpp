#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> s;
    char o;
    int temp;
    cin >> temp;
    s.push(temp % 10000);
    while(cin >> o >> temp){
        if(o == '*'){
            int x = s.top();
            s.pop();
            s.push(x * (temp % 10000) % 10000);
        }else
            s.push(temp % 10000);
    }
    while(!s.empty()){
        if(s.size() == 1){
            cout << s.top() << endl;
            s.pop();
        }else{
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            s.push((x + y) % 10000);
        }
    }
    return 0;
}