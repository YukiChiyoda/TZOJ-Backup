#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    char temp;
    bool flag = false;
    int answer = 0;
    int leng = s.length();
    for(int i = 0; i < leng; i += 1){
        temp = s[i];
        if(temp == ' '){
            if(!flag)
                answer += 1;
            flag = true;
        }else
            flag = false;
    }
    if(s[0] == ' ' && answer)
        answer -= 1;
    if(s[leng - 1] != ' ')
        answer += 1;
    cout << answer << endl;
    return 0;
}