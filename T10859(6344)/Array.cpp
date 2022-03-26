//错误的std示例：朴素的数组模拟应当被判定为超时。
#include <iostream>
using namespace std;

int n, m;
string book[10000];

int find(){
    string temp;
    cin >> temp;
    int key = 0;
    for(key = 0; key < n; key += 1)
        if(book[key] == temp)
            break;
    for(int i = key; i > 0; i -= 1)
        book[i] = book[i - 1];
    book[0] = temp;
    return key;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i += 1)
        cin >> book[i];
    int answer = 0;
    for(int i = 0; i < m; i += 1)
        answer += find();
    cout << answer << endl;
    return 0;
}