#include <iostream>
#include <string>
using namespace std;

void to_int(string s, int a[]){
    int leng = s.length();
    for(int i = 0; i < leng; i += 1){
        a[i] = s[leng - i - 1] - '0'; //此操作逆置了数位
    }
}

string to_string(int a[], int n){
    string s = "";
    for(int i = n - 1; i >= 0; i -= 1){ //此操作将数位逆置至正常位
        s += char(a[i] + '0');
    }
    return s;
}

bool cmp(const string a, const string b){
    if(a.length() != b.length()){
        return a.length() > b.length(); //长度不等，数位长的更大
    }
    return a >= b; //长度相等，ASCII码大的更大
}

string sub(string s1, string s2){
    string s = "";
    if(cmp(s1, s2) != true){
        swap(s1, s2); //交换后，s1始终大于s2
        s = "-";
    }
    int a[1000] = {0}, b[1000] = {0}, c[1000] = {0};
    to_int(s1, a);
    to_int(s2, b);
    int leng = s1.length();
    for(int i = 0; i < leng; i += 1){
        c[i] = a[i] - b[i];
        if(c[i] < 0){ //末次不可能发生借位，故不会越界
            c[i] += 10;
            a[i + 1] -= 1;
        }
    }
    while(leng > 1 && c[leng - 1] == 0){
        leng -= 1;
    }
    return s + to_string(c, leng);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << sub(a, b) << endl;
    }
    return 0;
}