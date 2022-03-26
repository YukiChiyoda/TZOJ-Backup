#include <iostream>
using namespace std;

int main(){
	char a;
	int n; //高度
	int o; //输入标志判断符 
	while(o != EOF){
		o = scanf("%c %d", &a, &n);
		for(int i = 1; i <= n; i += 1){
			
			for(int j = 1; j <= n - i; j += 1){
				cout << "<$nbsp;>";
			}
			cout << a;
			
			cout << "<br />";
		}
		cout << "<br />";
	}
	return 0;
}

/*
- Sample OutPut -

 X    - 1
XXX   - 0

      A          - 6
     A A         - 5 - 1
    A   A        - 4 - 3
   A     A       - 3 - 5
  A       A      - 2 - 7
 A         A     - 1 - 9
AAAAAAAAAAAAA    - 0 = 13

*/
