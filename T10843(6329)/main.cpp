#include <iostream>
#include <string>
using namespace std;

string Left(string x, int n){
	if(x == "0")
		return "0";
	for(int i = 0; i < n; i += 1)
		x += "0";
	return x;
}

string Right(string x, int n){
	int leng = x.length();
	return leng <= n ? "0" : x.substr(0, leng - n);
}

int main(){
    //freopen("0.in", "r", stdin);
    //freopen("0.out", "w", stdout);
    string a;
	int b;
    char o;
    while(cin >> a >> o >> o >> b){
        switch (o){
            case '<':
                cout << Left(a, b) << endl;
                break;
            case '>':
                cout << Right(a, b) << endl;
                break;
        }
    }
    return 0;
}