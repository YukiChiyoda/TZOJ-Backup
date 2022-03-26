#include <iostream>
#include <string>
using namespace std;

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
                cout << And(a, b) << endl;
                break;
            case '|':
                cout << Or(a, b) << endl;
                break;
			case '^':
				cout << Xor(a, b) << endl;
			break;
        }
    }
    return 0;
}