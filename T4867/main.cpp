#include <iostream>
#include <string>
#include <stack>
using namespace std;

#define mod 10007

struct dper{
  int zero;
  int one;
};

dper ans[150001];
int len;
int t = 1;
string str;
stack <char> s;

void dispose(char ch, dper &a, dper &b){
  	if(ch == '+'){
    	a.one = (a.one * (b.zero + b.one) + a.zero * b.one) % mod;
    	a.zero = a.zero * b.zero % mod;
	}else{
    	a.zero = (a.zero * (b.zero + b.one) + a.one * b.zero) % mod;
    	a.one = a.one*b.one%mod;
	}
}

int main(){
  	cin >> len >> str;
  	str += ')';
  	ans[1].zero = ans[1].one = 1;
  	s.push('(');
	for(int i = 0; i <= len; i += 1)
    if(str[i] == '(')
		s.push('(');
    else if(str[i] == ')'){
        for( ; s.top() != '('; s.pop(), t -= 1)
	  		dispose(s.top(), ans[t - 1], ans[t]);
        s.pop();
    }else{
        for( ; s.top() <= str[i] && s.top() != '('; s.pop(), t -= 1)
            dispose(s.top(), ans[t - 1], ans[t]);
        s.push(str[i]);
        ans[++t].zero = 1;
        ans[t].one = 1;
    }
    cout << ans[1].zero;
    return 0;
}