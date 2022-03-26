//Wrong Answer

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a, b;
    while(cin >> a){
        bool flagA = false;
        bool flag_Error = false;
        for(int i = 0; a[i] != '\0'; i += 1){
            if((a[i] >= 'A' && a[i] <= 'F') || (a[i] >= 'a' && a[i] <= 'f') || (a[i] >='0' && a[i] <= '9') || (i % 5 == 4 && a[i] == ':')){
                if(a[i] == ':'){
                    flagA = false;
                }else if(a[i] == '0' && flagA == false){
                    a[i] = '*'; //打标记符
                }else if(a[i] != '0' && flagA == false){
                    flagA = true;
                }
            }else{
                cout << "It's not a IPv6 address!" << endl;
                flag_Error = true;
                break;
            }
        }
        if(flag_Error == true){
            continue;
        }
        int k = 0;
        bool flag = false;
        for(int i = 0; a[i] != '\0'; i += 1){
            if(a[i] != '*'){
                b[k] = a[i];
                k += 1;
            }
        }
        b[k] = '\0'; //缩减长度，直接打结束符
        for(int i = 0; i < k; i += 1){
            if(b[i] == ':' && b[i + 1] == ':' && b[i + 2] == ':' && flag == false){ //连续多个双冒号
                cout << b[i] << b[i + 1];
                i += 2;
                for(int j = i + 1; j < k; j += 1){
                    if(b[j] == ':'){ //忽略其他的冒号结构
                        i = j;
                    }else{
                        break;
                    }
                }
                flag = true;
            }else if(b[i] == ':' && b[i + 1] == ':'){ //非首个双冒号结构，不予双冒号
                cout << b[i] << '0';
            }else{
                cout << b[i];
            }
        }
        cout << endl;
    }
    return 0;
}