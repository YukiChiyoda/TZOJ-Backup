#include <iostream>
#include <cstring>
using namespace std;

void pow(int n, int num[]){
    //This section of code is from the Internet.
    //It's used for calculating 'Power N of 2'.
    num[0] = 0;
    char a[1001][1001];
    a[0][0] = '1';
    int before = 1;
    for(int i = 1; i <= 100; i += 1){
        int k = 0;
        int mod = 0;
        for(int j = 0; j < before; j += 1){
            a[i][k++] = ((a[i - 1][j] - '0') * 2 + mod) % 10 + 48;
            mod = (((a[i - 1][j] - '0') * 2) + mod) / 10;
        }
        if(mod)
            a[i][k++] = mod + 48;
        before = k;
    }
    int len = strlen(a[n]);
    for(int i = len - 1; i >= 0; i -= 1)
        num[++num[0]] = a[n][i] - '0';
}

void add(int x[], int num[]){
    int temp[100] = {0};
    temp[0] = x[0];
    for(int i = 1, j = x[0]; i <= x[0]; i += 1, j -= 1)
        temp[i] = x[j];
    for(int i = 1; i <= temp[0]; i += 1){
        num[i] += temp[i];
        if(num[i] >= 10){
            num[i + 1] += 1;
            num[i] %= 10;
        }
    }
    int n = temp[0] > num[0] ? temp[0] : num[0];
    num[0] = num[n + 1] > 0 ? n + 1 : n;
}

string BtoD(string x){
    int num[100] = {0};
    int result[100] = {0};
    int leng = x.length();
    num[0] = leng;
    for(int i = 1, j = leng; i <= leng; i += 1, j -= 1)
        num[j] = x[i - 1] - '0';
    for(int i = 1; i <= num[0]; i += 1){
        if(!num[i])    continue;
        int temp[100] = {0};
        pow(i - 1, temp);
        add(temp, result);
    }
    string s = "";
    for(int i = 1, j = result[0]; i <= result[0]; i += 1, j -= 1)
        s += result[j] + '0';
    if(s == "")    s = "0";
    return s;
}

void Convert(string &s){
    string temp = "";
    temp += BtoD(s.substr(0, 8)) + "."
        + BtoD(s.substr(8, 8)) + "."
        + BtoD(s.substr(16, 8)) + "."
        + BtoD(s.substr(24, 8));
    s = temp;
}