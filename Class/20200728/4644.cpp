//Runtime Error

#include <iostream>
#include <String>
using namespace std;

int main(){
    int a, b, c;
    char little[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z'};
    char caps[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z'};
    char num[10] = {'0', '1' ,'2' ,'3' ,'4' ,'5' ,'6' ,'7' ,'8' ,'9'};
    while(cin >> a >> b >> c){
        string str;
        getline(cin, str);
        getline(cin, str);
        for(int i = 0 ; i < str.length(); i += 1){
            if(str.at(i) == '-'){
                string temp; //待替换的字符串
                char before = str.at(i - 1);
                char after = str.at(i + 1);
                if(before == after){
                    goto END;
                }
                //temp = "temp";
                if(str[i - 1] >= 'a' && str[i - 1] <= 'z' && str[i + 1] >= 'a' && str[i + 1] <= 'z' && str[i - 1] < str[i + 1]){
                    before -= 'a';
                    after -= 'a';
                    if(a == 1){
                        //填充小写字母
                        if(c == 1){
                            //顺序填充
                            for(int j = before + 1; j < after; j += 1){
                                for(int k = 0; k < b; k += 1){
                                    temp += little[j];
                                }
                            }
                            str.replace(str.find('-', i), 1, temp);
                        }else if(c == 2){
                            //逆序填充
                            for(int j = after - 1; j > before; j += 1){
                                for(int k = 0; k < b; k += 1){
                                    temp += little[j];
                                }
                            }
                            str.replace(str.find('-', i), 1, temp);
                        }
                    }else if(a == 2){
                        //填充大写字母
                        if(c == 1){
                            //顺序填充
                            for(int j = before + 1; j < after; j += 1){
                                for(int k = 0; k < b; k += 1){
                                    temp += caps[j];
                                }
                            }
                            str.replace(str.find('-', i), 1, temp);
                        }else if(c == 2){
                            //逆序填充
                            for(int j = after - 1; j > before; j += 1){
                                for(int k = 0; k < b; k += 1){
                                    temp += caps[j];
                                }
                            }
                            str.replace(str.find('-', i), 1, temp);
                        }
                    }else if(a == 3){
                        //填充星号
                        for(int i = 0; i < b * (after - before - 1); i += 1){
                            temp += "*";
                        }
                        //cout << int(after) << '/' << int(before) << endl;
                        /*
                        if(int(after) - 1 == int(before)){
                            goto END;
                        }
                        */
                        str.replace(str.find('-', i), 1, temp);
                    }
                }else if(str[i - 1] >= '0' && str[i - 1] <= '9' && str[i + 1] >= '0' && str[i + 1] <= '9' && str[i - 1] < str[i + 1]){
                    before -= '0';
                    after -= '0';
                    if(a == 1 || a == 2){
                        //填充数字
                        if(c == 1){
                            //顺序填充
                            for(int j = before + 1; j < after; j += 1){
                                for(int k = 0; k < b; k += 1){
                                    temp += num[j];
                                }
                            }
                            str.replace(str.find('-', i), 1, temp);
                        }else if(c == 2){
                            //逆序填充
                            for(int j = after - 1; j > before; j += 1){
                                for(int k = 0; k < b; k += 1){
                                    temp += num[j];
                                }
                            }
                            str.replace(str.find('-', i), 1, temp);
                        }
                    }else if(a == 3){
                        //填充星号
                        for(int i = 0; i < b * (after - before - 1); i += 1){
                            temp += "*";
                        }
                        //cout << int(after) << '/' << int(before) << endl;
                        /*
                        if(int(after) - 1 == int(before)){
                            goto END;
                        }
                        */
                        str.replace(str.find('-', i), 1, temp);
                    }
                }
            }
            END:
                continue;
        }
        cout << str << endl;
    }
    return 0;
}