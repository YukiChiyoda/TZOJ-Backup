#include <iostream>
#include <string>
using namespace std;

int main(){
	string a, b;
	getline(cin, a);
	getline(cin, b);
	int leng = a.length();
	for(int i = 0; i < leng; i += 1)
		a[i] = tolower(a[i]);
	leng = b.length();
	for(int i = 0; i < leng; i += 1)
		b[i] = tolower(b[i]);
	int total = 0;
	int position = -1;
	a = ' ' + a + ' ';
	b = ' ' + b + ' ';
	unsigned int long long temp = b.find(a);
	if(temp != string::npos)
		position = temp;
	while(temp != string::npos){
		total += 1;
		temp = b.find(a, temp + 1);
	}
	if(position == -1)
		cout << -1 << endl;
	else
		cout << total << " " << position << endl;
	return 0;
}

/*
string search;
string source[1000000];

string change(string x){
	int leng = x.length();
	for(int i = 0; i < leng; i += 1)
		if(x[i] <= 'Z')
			x[i] += 'a' - 'A';
	return x;
}

int main(){
	cin >> search;
	search = change(search);
	int n = 0;
	string temp;
	while(cin >> temp)
		source[n++] = change(temp);
	int result = 0;
	int position = -1;
	for(int i = 0; i <= n; i += 1)
		if(source[i] == search){
			result += 1;
			if(position == -1)
				position = i;
		}
	if(position != -1)
		cout << result << " ";
	cout << position << endl;
	return 0;
}
*/