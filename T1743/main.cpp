#include <iostream>
#include <sstream>
#include <set>
using namespace std;

void Do(string s, int a[], int &n){
	stringstream ss(s);
	n = 0;
	while(ss >> a[n])    n += 1;
}

bool Judge(int b[], int n, int q){
	for(int i = 0; i < n; i += 1)
		if(b[i] == q)
			return true;
	return false;
}

void Printer(set <int> s){
	set <int> :: iterator it;
	for(it = s.begin(); it != s.end(); it++){
		if(it != s.begin())
			cout << " ";
		cout << *it;
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	cin.get();
	while(t--){
		string s;
		getline(cin, s);
		int a[100], b[100];
		int an, bn;
		Do(s, a, an);
		getline(cin, s);
		Do(s, b, bn);
		set <int> S0;
		for(int i = 0; i < an; i += 1)
			if(Judge(b, bn, a[i]))
				S0.insert(a[i]);
		set <int> S1;
		for(int i = 0; i < an; i += 1)
			S1.insert(a[i]);
		for(int i = 0; i < bn; i += 1)
			S1.insert(b[i]);
		set <int> S2;
		for(int i = 0; i < an; i += 1)
			if(!Judge(b, bn, a[i]))
				S2.insert(a[i]);
		Printer(S0);
		Printer(S1);
		Printer(S2);
	}
	return 0;
}