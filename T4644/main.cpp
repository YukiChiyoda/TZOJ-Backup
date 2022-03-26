#include <iostream>
#include <string>
using namespace std;

int input1, input2, input3;
string a;

int Judge(int x){
    if(a[x + 1] <= a[x - 1])
        return 0;
    if(a[x - 1] >= '0' && a[x - 1] <= '9' && a[x + 1] >= '0' && a[x + 1] <= '9')
        return 1; 
    if(a[x - 1] >= 'a' && a[x - 1] <= 'z' && a[x + 1] >= 'a' && a[x + 1] <= 'z')
        return 2;
    return 0;
}

string Do(int g, int s, int t, int x, int y, int z){
    string temp;
    temp.clear();
    if(x == 3){
        temp.append((a[t] - a[s] - 1) * y, '*');
        return temp;
    }
    if(g == 1){
        for(int i = 1; i <= a[t] - a[s] - 1; i += 1)
            temp.append(y, a[s] + i);
    }
    if(g == 2){
        if(x == 1){
            for(int i = 1; i <= a[t] - a[s] - 1; i += 1)
                temp.append(y, a[s] + i);
        }
        else if(x == 2){
            for(int i = 1; i <= a[t] - a[s] - 1; i += 1)
                temp.append(y, a[s] + i - 32);
        }
    }
    if(z == 2){
        string b = temp;
        int l = temp.size();
        for(int i = 0; i < l; i += 1)
            b[l - i - 1] = temp[i];
        return b;
    }
    return temp;
}

int main(){
    while(cin >> input1 >> input2 >> input3){
        cin >> a;
        int flag = 0;
        while(true){
            int f = a.find('-', flag);
            if(f == -1)
                break;
            int g = Judge(f);
            if(g){
                if(a[f - 1] + 1 == a[f + 1]){
                    a.erase(f, 1);
                    continue;
                }
                string t = Do(g, f - 1, f + 1, input1, input2, input3);
                a.replace(f, 1, t);
            }
            flag = f + 1;
        }
        cout << a << endl;;
    }
    return 0;
}