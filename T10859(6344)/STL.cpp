#include <iostream>
#include <list>
using namespace std;

int n, m;
list <string> l;

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i += 1){
        string temp;
        cin >> temp;
        l.push_back(temp);
    }
    int answer = 0;
    for(int i = 0; i < m; i += 1){
        string temp;
        cin >> temp;
        list <string> :: iterator it;
        int location = 0;
        for(it = l.begin(); it != l.end(); it++)
            if(*it == temp){
                l.erase(it);
                l.push_front(temp);
                break;
            }
            else
                location += 1;
        answer += location;
    }
    cout << answer << endl;
    return 0;
}