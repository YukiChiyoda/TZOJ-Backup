#include <cstdio>
#include <cstring>
#include <algorithm>

const int n = 5002;
int t, r;
int maxer;
int tree[n][n];
int mem[n][n];

int lowbit(const int x){
    return x & (-x);
}

void update(const int x, const int y, const int v){
    for(int i = x; i < n; i += lowbit(i))
        for(int j = y; j < n; j += lowbit(j))
            tree[i][j] += v;
}

int query(const int x, const int y){
	if(mem[x][y] != -1)
		return mem[x][y];
    int temp = 0;
    for(int i = x; i; i -= lowbit(i))
        for(int j = y; j; j -= lowbit(j))
            temp += tree[i][j];
	mem[x][y] = temp;
    return temp;
}

int main(){
	scanf("%d %d", &t, &r);
    while(t--){
        int x, y, v;
		scanf("%d %d %d", &x, &y, &v);
        update(x + 1, y + 1, v);
		maxer = std::max(maxer, std::max(x + 2, y + 2));
    }
	memset(mem, -1, sizeof(mem));
    int answer = -1;
	maxer = std::min(maxer, n - 1);
    for(int i = r; i < maxer; i += 1)
        for(int j = r; j < maxer; j += 1)
            answer = std::max(answer, query(i, j)
                                - query(i - r, j)
                                - query(i, j - r)
                                + query(i - r, j - r));
	printf("%d\n", answer);
    return 0;
}