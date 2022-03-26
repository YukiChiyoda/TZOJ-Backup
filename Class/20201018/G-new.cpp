#include <iostream>
using namespace std;

int n, k, p, t;
int answer, price;
int num[110], color[200100];

int main(){
    cin >> n >> k >> p;
	for(int i = 1; i <= n; i += 1){
        cin >> color[i] >> price;
		if(price <= p){
			for(int j = i; j > t; j -= 1)
                num[color[j]] += 1;
			t = i;
            answer += num[color[i]] - 1;
		}
		else
            answer += num[color[i]];
	}
    cout << answer << endl;
	return 0;
}