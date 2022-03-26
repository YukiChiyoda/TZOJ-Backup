#include <iostream>
#include <algorithm>
using namespace std;

struct Exam{
    string Number;
    int seatA;
    int seatB;
};

bool function(const Exam a, const Exam b){
    return a.seatA < b.seatA;
}

int main(){
    int n;
    cin >> n;
    Exam temp[1000];
    int find[1000];
    for(int i = 0; i < n; i += 1){
        cin >> temp[i].Number >> temp[i].seatA >> temp[i].seatB;
    }
    //sort(temp, temp + n, function);
    int m;
    cin >> m;
    for(int i = 0; i < m; i += 1){
        cin >> find[i];
    }
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            if(temp[i].seatA == find[j]){
                cout << temp[i].Number << " " << temp[i].seatB << endl;
            }
        }
    }
    return 0;
}