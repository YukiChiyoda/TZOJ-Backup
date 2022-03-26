#include <iostream>
#include <list>
using namespace std;

int n;
unsigned long long m;
int result;
list <int> l;

bool find(int x){
	if(l.empty())
		return false;
	list <int> :: iterator it;
	for(it = l.begin(); it != l.end(); it++)
		if(*it == x)
			return true;
	return false;
}

int main(){
	cin >> m >> n;
	for(int i = 0; i < n; i += 1){
		int word;
		cin >> word;
		if(!find(word)){
			result += 1;
			if(l.size() >= m)
				l.pop_front();
			l.push_back(word);
		}
	}
	cout << result << endl;
	return 0;
}