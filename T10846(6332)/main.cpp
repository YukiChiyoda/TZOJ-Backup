#include <iostream>
#include <cstring>
#include <string>
#include <stack>
using namespace std;

void div(int num[]){
    if(num[1] & 1)
        num[1] -= 1;
    bool flag = false;
    if(!(num[num[0]] >> 1))
        flag = true;
    for(int i = num[0]; i > 0; i -= 1){
        num[i - 1] += 10 * (num[i] & 1);
        num[i] >>= 1;
    }
    if(flag)
        num[0] -= 1;
}

string DtoB(string x){
    int num[100] = {0};
    int leng = x.length();
    num[0] = leng;
    for(int i = 0, j = leng; i < leng; i += 1, j -= 1)
        num[j] = x[i] - '0';
    stack <int> s;
    while(num[0]){
        s.push(num[1] & 1);
        div(num);
    }
    string temp = "";
    while(!s.empty()){
        temp += s.top() + '0';
        s.pop();
    }
    return temp;
}

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

string And(string a, string b){
	int leng = a.length();
	int lengB = b.length();
	if(leng > lengB){
		string temp = "";
		for(int i = 0; i < leng - lengB; i += 1)
			temp += "0";
		b = temp + b;
	}else{
		string temp = "";
		for(int i = 0; i < lengB - leng; i += 1)
			temp += "0";
		a = temp + a;
		leng = lengB;
	}
	string temp = "";
	for(int i = 0; i < leng; i += 1){
		if(a[i] == '1' && b[i] == '1')
			temp += '1';
		else
			temp += '0';
	}
	int flag = leng;
	for(int i = 0; i < leng; i += 1){
		if(temp[i] == '1'){
			flag = i;
			break;
		}
	}
	return flag == leng ? "0" : temp.substr(flag, leng);
}

string Or(string a, string b){
	int leng = a.length();
	int lengB = b.length();
	if(leng > lengB){
		string temp = "";
		for(int i = 0; i < leng - lengB; i += 1)
			temp += "0";
		b = temp + b;
	}else{
		string temp = "";
		for(int i = 0; i < lengB - leng; i += 1)
			temp += "0";
		a = temp + a;
		leng = lengB;
	}
	string temp = "";
	for(int i = 0; i < leng; i += 1){
		if(a[i] == '1' || b[i] == '1')
			temp += '1';
		else
			temp += '0';
	}
	int flag = leng;
	for(int i = 0; i < leng; i += 1){
		if(temp[i] == '1'){
			flag = i;
			break;
		}
	}
	return flag == leng ? "0" : temp.substr(flag, leng);
}

string Xor(string a, string b){
	int leng = a.length();
	int lengB = b.length();
	if(leng > lengB){
		string temp = "";
		for(int i = 0; i < leng - lengB; i += 1)
			temp += "0";
		b = temp + b;
	}else{
		string temp = "";
		for(int i = 0; i < lengB - leng; i += 1)
			temp += "0";
		a = temp + a;
		leng = lengB;
	}
	string temp = "";
	for(int i = 0; i < leng; i += 1){
		if((a[i] == '1' && b[i] == '1') || (a[i] == '0' && b[i] == '0'))
			temp += '0';
		else
			temp += '1';
	}
	int flag = leng;
	for(int i = 0; i < leng; i += 1){
		if(temp[i] == '1'){
			flag = i;
			break;
		}
	}
	return flag == leng ? "0" : temp.substr(flag, leng);
}

int main(){
    //freopen("0.in", "r", stdin);
    //freopen("0.out", "w", stdout);
    string a, b;
    char o;
    while(cin >> a >> o >> b){
        switch (o){
            case '&':
                cout << BtoD(And(DtoB(a), DtoB(b))) << endl;
                break;
            case '|':
                cout << BtoD(Or(DtoB(a), DtoB(b))) << endl;
                break;
			case '^':
				cout << BtoD(Xor(DtoB(a), DtoB(b))) << endl;
			break;
        }
    }
    return 0;
}