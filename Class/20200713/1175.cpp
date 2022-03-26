#include <iostream>
using namespace std;

int main(){
	int a1, b1, c1, a2, b2, c2;
	scanf("%d:%d:%d", &a1, &b1, &c1);
	scanf("%d:%d:%d", &a2, &b2, &c2);
	if((a1 > a2) || (a1 == a2 && b1 > b2) || (a1 == a2 && b1 == b2 && c1 > c2)){
		int ta = a1;
		int tb = b1;
		int tc = c1;
		a1 = a2;
		b1 = b2;
		c1 = c2;
		a2 = ta;
		b2 = tb;
		c2 = tc;
	}
	c1 = c2 - c1;
	if(c1 < 0){
		c1 += 60;
		b1 += 1; //注意进位时被减数为增加 ！ 
	}
	b1 = b2 - b1;
	if(b1 < 0){
		b1 += 60;
		a1 += 1; //注意进位时被减数为增加 ！ 
	}
	a1 = a2 - a1;
	printf("%d:%02d:%02d", a1, b1, c1);
	return 0;
}
