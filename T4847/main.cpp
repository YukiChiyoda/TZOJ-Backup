#include <iostream>
#include <set>
using namespace std;

int n;
set <int> s;

int main(){
    cin >> n;
    for(int i = 0; i < n; i += 1){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;
    bool flag = false;
    set <int> :: iterator it;
    for(it = s.begin(); it != s.end(); it++){
        if(flag)
            cout << " ";
        cout << *it;
        flag = true;
    }
    return 0;
}