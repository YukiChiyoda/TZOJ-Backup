#include <iostream>
#include <string>
using namespace std;

int main(){
    char s[255];
    while(cin >> s){
        bool flag = false;
        for(int i = 0; s[i] != '\0'; i += 1){
            if(! ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'F') || (i % 5 == 4 && s[i] == ':'))){
                flag = true;
            }
        }
        if(flag == true){
            cout << "It's not a IPv6 address!" << endl;
        }else{
            int a[8];
            bool flag_A = false;
            //卧槽原来16进制可以直接用%X
            sscanf(s, "%X:%X:%X:%X:%X:%X:%X:%X", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7]);
            for(int i = 0; i < 8; i += 1){
                if(a[i] == 0 && flag != true){
                    //该位全部为零时的操作
                    bool flag_B = false;
                    for(i = i + 1; i < 8; i += 1){ //处理多位全部为零的操作
                        if(a[i] != 0){
                            break;
                        }else{
                            flag_B = true;
                        }
                    }
                    i -= 1;
                    if(flag_B == true){
                        flag = true;
                        if(flag_A != true && i == 7){
                            cout << "::";
                        }else if(flag_A != true || i == 7){
                            cout << ":";
                        }
                    }else{
                        cout << "0";
                    }
                }else{
                    printf("%X", a[i]); //使用%X输出，前导零都不用管了！！
                }
                if(i == 7){
                    cout << endl;
                }else{
                    cout << ":";
                    flag_A = true;
                }
            }
        }
    }
    return 0;
}