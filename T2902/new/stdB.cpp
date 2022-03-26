#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

struct node{
	int num;
	int cursor;
	int step;
};

node now, noder;
queue <node> Q;

bool f;
bool flag[1000001][7]; //Avoid needless duplication
int cost[8];
int beginer, ender;
int sum, num, answer;

void breaker(){ //End the program
	f = true;
	answer = noder.step;
}

void makeflag_push(){ //Push the next node into queue
	flag[noder.num][noder.cursor] = true;
	Q.push(noder);
}

void swap_left(){ //For function [Swap0]
	noder = {now.num, now.cursor - 1, now.step + 1};
	if(!flag[noder.num][noder.cursor])
		makeflag_push();
	noder = {now.num, now.cursor, now.step + 1};
	sum = noder.num / cost[1];
	noder.num = noder.num - sum * cost[1] + num * cost[1] - num * cost[noder.cursor] + sum * cost[noder.cursor];
	if(noder.num == ender)
		breaker();
	if(!flag[noder.num][noder.cursor])
		makeflag_push();
}

void swap_right(){ //For function [Swap1]
	noder = {now.num, now.cursor + 1, now.step + 1};
	if(!flag[noder.num][noder.cursor])
		makeflag_push();
	noder = {now.num, now.cursor, now.step + 1};
	sum = noder.num % 10;
	noder.num = noder.num - sum + num - num * cost[noder.cursor] + sum * cost[noder.cursor];
	if(noder.num == ender)
		breaker();
	if(!flag[noder.num][noder.cursor])
		makeflag_push();
}

void up(){ //For function [Up]
	noder = {now.num + cost[noder.cursor], now.cursor, now.step + 1};
	if(noder.num == ender)
		breaker();
	if(!flag[noder.num][noder.cursor])
		makeflag_push();
}

void down(){ //For function [Down]
	noder = {now.num - cost[noder.cursor], now.cursor, now.step + 1};
	if(noder.num == ender)
		breaker();
	if(!flag[noder.num][noder.cursor])
		makeflag_push();
}

int main(){
	while(cin >> beginer >> ender){
		f = false;
		while(!Q.empty())
			Q.pop();
		memset(flag, 0, sizeof(flag));
		now = {0, 0, 0}, noder = {0, 0, 0};
		sum = 0, num = 0, answer = 0;
		cost[1] = 100000;
		for(int i = 2; i <= 8; i += 1)
			cost[i] = cost[i - 1] / 10;
		if(beginer == ender){ //Special Judge
			cout << 0 << endl;
			continue;
		}
		Q.push({beginer, 1, 0});
		while(!Q.empty()){
			if(f)
				break;
			now = Q.front();
			Q.pop();
			num = (now.num / cost[now.cursor]) % 10;
			if(now.cursor != 1)
				swap_left();
			if(now.cursor != 6)
				swap_right();
			if(num != 9)
				up();
			if(num != 0)
				down();
		}
		cout << answer << endl;
	}
    return 0;
}