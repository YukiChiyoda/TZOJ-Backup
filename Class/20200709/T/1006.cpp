#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	m = m * 1.5;
	int num[n+1][2];
	
	for(int i = 0; i < n; i += 1){
		cin >> num[i][0] >> num[i][1];
	}
	
	//插入排序法以排序二维数组 
	for(int i = 0; i < n; i += 1){
		for(int k = i + 1; k < n; k += 1){
//			cout << "第" << i << "组与第" << k << "组数据比较："; 
			if(num[i][1] < num[k][1]){
//				cout << "前者分数小于后者，发生交换。"; 
				num[n+1][0] = num[k][0];
				num[n+1][1] = num[k][1];
				num[k][0] = num[i][0];
				num[k][1] = num[i][1];
				num[i][0] = num[n+1][0];
				num[i][1] = num[n+1][1];
//						cout << endl << "==========" << endl;
//						for(int a = 0; a < n; a += 1){
//							cout << num[a][0] << " " << num[a][1] << endl;
//						}
//						cout << "==========" << endl;
			}else{
				if(num[i][1] == num[k][1]){
//					cout << "前者分数等于后者。"; 
					if(num[i][0] > num[k][0]){
//						cout << "前者序号大于后者，发生交换。"; 
						num[n+1][0] = num[k][0];
						num[n+1][1] = num[k][1];
						num[k][0] = num[i][0];
						num[k][1] = num[i][1];
						num[i][0] = num[n+1][0];
						num[i][1] = num[n+1][1];		
//									cout << endl << "==========" << endl;
//									for(int a = 0; a < n; a += 1){
//										cout << num[a][0] << " " << num[a][1] << endl;
//									}
//									cout << "==========" << endl;
					}
				}
			}
//			cout << endl; 
		}
	}
	
	int key = num[m-1][1];
	int o = 0;
	
	for(int i = 0; i < n; i += 1){
		if(num[i][1] >= key){
			o += 1;
		}
	}
	
	cout << num[m-1][1] << " " << o << endl;
	for(int i = 0; i < n; i += 1){
		if(num[i][1] >= key){
			cout << num[i][0] << " " << num[i][1] << endl;
		}
	}
	
	return 0;
}
