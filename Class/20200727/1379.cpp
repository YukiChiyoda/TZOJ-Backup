#include <bits/stdc++.h>
using namespace std;

bool judge(char a){
    return (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9') || (a == '_');
}

int main(){
    int n;
    cin >> n;
    getchar();
    while(n--){
        char a[51];
        gets(a);
        char c;
        c = a[0];
        if((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c != '_')){
            cout << "no" << endl;
            goto END;
        }
        for (int i = 1; i < strlen(a); i += 1){
            if (judge(a[i]) == false){
            	cout << "no" << endl;
                goto END;
            }
        }
        cout << "yes" << endl;
        END:
            continue;
    }
    return 0;
}
