#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	for(int i = 1; i <= num; i += 1){
		for(int m = 1; m <= 2 * num - i * 2; m += 1){
			cout << " ";
		}
		for(int m = 1; m <= i; m += 1){
			if(i == 1){
				cout << m;
			}else{
				cout << m << " ";
			}
		}
		for(int m = i - 1; m > 0; m -= 1){
			if(m == 1){
				cout << m;
			}else{
				cout << m << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

/*

    1    - 4
  1 2    - 2
1 2 3    - 0

      1  - 6
    1 2  - 4
  1 2 3  - 2
1 2 3 4  - 0

*/
