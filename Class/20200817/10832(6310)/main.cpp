#include <iostream>
using namespace std;

int n, m;
int father[100001];
int num[100001];

int find(int x){
    return x == father[x] ? x : father[x] = find(father[x]);
}

void merge(int x, int y){
    x = find(x), y = find(y);
    if(x != y){
    	father[y] = x;
    	num[x] += num[y];
	}
}

int main(){
	//freopen("relation.out", "r", stdin);
	//freopen("temp.txt", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= n; i += 1){
        father[i] = i;
        num[i] = 1;
    }
    while(m--){
        char o;
        int x, y;
        cin >> o >> x;
        if(o == 'M'){
            cin >> y;
            merge(x, y);
        }else if(o == 'Q'){
            cout << num[find(x)] << endl;
        }
    }
    return 0;
}
