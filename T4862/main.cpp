#include <iostream>
using namespace std;

struct Spigot{
	int Water;
	int Index;
};

int n, m;
int water[10000];
Spigot spigot[10000];

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i += 1)
		cin >> water[i];
	for(int i = 0; i < m; i += 1){
		spigot[i].Water = water[i];
		spigot[i].Index = i;
	}
	int time = 0;
	int complete = 0;
	while(complete != n){
		time += 1;
		for(int i = 0; i < m; i += 1){
			spigot[i].Water -= 1;
			if(spigot[i].Water == 0 && water[spigot[i].Index]){
				complete += 1;
				if(m + complete - 1 < n && water[m + complete - 1]){
					spigot[i].Water = water[m + complete - 1];
					spigot[i].Index = m + complete - 1;
				}
			}
		}
	}
	cout << time << endl;
	return 0;
}