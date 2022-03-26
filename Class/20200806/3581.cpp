//废稿！废稿！废稿！

#include <iostream>
#include <String>
using namespace std;

int main(){
    string temp;
    while(cin >> temp){
        string ip[8];
        int i = 0, j = 0;
        bool Error = false;
        while(temp[i] != '\0'){
            if((temp[i] >= 'A' && temp[i] <= 'F') || (temp[i] >= 'a' && temp[i] <= 'f') || (temp[i] >='0' && temp[i] <= '9') || temp[i] == ':'){
                if(temp[i] != ':'){
                    ip[j] += temp[i];
                    i += 1;
                }else{
                    i += 1;
                    j += 1;
                }
            }else{
                Error = true;
            }
        }
        if(Error == true){
            cout << "It's not a IPv6 address!" << endl;
            continue;
        }
        for(int i = 0; i < 8; i += 1){
            bool flag = false;
            int it = 0;
            for(int j = 0; j < 4; j += 1, it += 1){
                if(ip[i][it] == '0' && (flag == true || j == 0)){
                    ip[i].erase(it, it + 1);
                    it -= 1;
                    flag = true;
                }
            }
        }
        temp = "";
        for(int i = 0; i < 8; i += 1){
            if(i != 0){
                temp += ":";
            }
            temp += ip[i];
        }
        int strnum = temp.length();
        bool another_flag = false;
        for(int i = 0; i < strnum; i += 1){
            if(temp[i] == ':' && temp[i + 1] == ':' && temp[i + 2] == ':' && another_flag == false){ //连续多个双冒号
                cout << "::";
                i += 2;
                for(int j = i + 1; j < strnum; j += 1){
                    if(temp[j] == ':'){ //忽略其他的冒号结构
                        i = j;
                    }else{
                        break;
                    }
                }
                another_flag = true;
            }else if(temp[i] == ':' && temp[i + 1] == ':'){ //非首个双冒号结构，不予双冒号
                cout << temp[i] << '0';
            }else{
                cout << temp[i];
            }
        }
        cout << endl;
    }
    return 0;
}