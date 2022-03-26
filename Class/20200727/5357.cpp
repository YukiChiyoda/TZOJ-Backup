#include <bits/stdc++.h>
using namespace std;

int main(){
	char a[81];
	gets(a);
    for (int i = 0; a[i] != '\0'; i += 1){
        if (a[i] >= 'A' && a[i] <= 'Z'){
        	cout << char(155 - a[i]);
        }else{
        	cout << char(a[i]);
		}
    }
    return 0;
}
