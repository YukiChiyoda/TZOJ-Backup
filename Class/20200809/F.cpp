#include <iostream>
#include <stack>
using namespace std;

void Op(stack<int> &st){
	string s;
	cin >> s;
	if(s == "push"){
		int x;
		cin >> x;
		st.push(x);
	}
	if(s == "pop"){
		if(!st.empty())	st.pop();
	}
	if(s == "clear"){
		while(!st.empty())	st.pop();
	}
}

int main()
{
    stack<int> st;
    int n;
    cin>>n;
    while(n--)
    {
        Op(st);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}