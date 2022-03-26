#include <iostream>
#include <stdio.h>
using namespace std;

int father[100001];
int number[100001];

int read(){
  int x = 0;
  char ch = getchar();
  while (ch < '0' || ch > '9')
    ch = getchar();
  while (ch >= '0' && ch <= '9')
    x = (x << 1) + (x << 3) + ch - '0', ch = getchar();
  return x;
}

int Find(int x){
	return x == father[x] ? x : father[x] = Find(father[x]);
}

void merge(int x, int y){
  x = Find(x);
  y = Find(y);
  if (x != y)
    father[y] = x, number[x] += number[y];
}

int main(){
  int n, m;
  n = read();
  m = read();
  char x;
  int a, b;
  for(int i = 1; i <= n; i += 1)
    father[i] = i, number[i] = 1;
  while(m--){
    scanf("%c", &x);
    if (x == 'M'){
      a = read();
      b = read();
      merge(a, b);
    }else if(x == 'Q'){
      a = read();
      printf("%d\n", number[Find(a)]);
    }
  }
}