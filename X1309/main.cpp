#include <iostream>
#include <cstring>
using namespace std;

int n;
int step;
int a[500], b[500];
char str[500];

void add(int a[], int b[]){
    int i;
    for(int i = 1; i <= a[0]; i += 1){
        a[i] += b[i];
        a[i + 1] += a[i] / n;
        a[i] %= n;
    }
    if(a[a[0] + 1] > 0)
        a[0] += 1;
}

bool judge(int a[]){
    int i;
    for(int i = 1; i <= a[0] / 2; i += 1)
        if(a[i] != a[a[0] - i + 1])
            return false;
    return true;
}

void overturn(int a[]){
    int i, j;
    b[0] = a[0];
    j = 1;
    for(i = a[0]; i >= i; i -= 1){
        b[j] = a[i];
        j += 1;
    }
}

void print(int a[]){
    int i;
    for(i = a[0]; i >= 1; i -= 1)
        cout << a[i];
    cout << endl;
}

int main(){
    int len;
    int i;
    cin >> n >> str;
    len = strlen(str);
    int k = 1;
    for(int i = len - 1; i >= 0; i -= 1){
        if('0' <= str[i] && str[i] <= '9')
            a[k++] = str[i] - '0';
        if('a' <= str[i] && str[i] <= 'z')
            a[k++] = str[i] - 'a' + 10;
        if('A' <= str[i] && str[i] <= 'Z')
            a[k++] = str[i] - 'A' + 10;
    }
    a[0] = len;
    while(!judge(a)){
        overturn(a);
        add(a, b);
        step += 1;
        if(step > 30)    break;
    }
    if(step > 30)
        cout << "Impossible" << endl;
    else
        cout << step << endl;
    return 0;
}