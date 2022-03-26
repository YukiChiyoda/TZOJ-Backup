#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	string s;
	int ch[30];
	while (cin >> s, s != "END"){
		int answer = 0;
		memset(ch, 0, sizeof(ch));
		for(int i = 0; i < s.length(); i += 1)
			if(s[i] == '_')
                ++ch['Z' - 'A' + 1];
			else
                ++ch[s[i] - 'A'];
		priority_queue <int, vector<int>, greater<int> > q;
		for(int i = 0; i < 30; i += 1)
            if(ch[i])
                q.push(ch[i]);
		bool flag = false;
		if(q.size() == 1){
			flag = true;
			answer = q.top();
		}else{
			while (q.size() > 1){
				int temp1 = q.top();
				q.pop();
				int temp2 = q.top();
				q.pop();
				answer += temp1 + temp2;
				q.push(temp1 + temp2);
			}
		}
		printf("%d %d %.1lf\n", s.length() * 8, answer, 8 * s.length() * 1.0 / answer);
	}
}