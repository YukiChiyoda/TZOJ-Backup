#include <iostream>
#include <algorithm>
using namespace std;

struct Record{
    string Name;
    int get_h;
    int get_m;
    int get_s;
    int leave_h;
    int leave_m;
    int leave_s;
};

bool functionA(const Record a, const Record b){
    if(a.get_h != b.get_h)      return a.get_h < b.get_h;
    if(a.get_m != b.get_m)      return a.get_m < b.get_m;
    return a.get_s < b.get_s;
}

bool functionB(const Record a, const Record b){
    if(a.leave_h != b.leave_h)      return a.leave_h > b.leave_h;
    if(a.leave_m != b.leave_m)      return a.leave_m > b.leave_m;
    return a.leave_s > b.leave_s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Record temp[100];
        for(int i = 0; i < n; i += 1){
            cin >> temp[i].Name;
            scanf("%d:%d:%d", &temp[i].get_h, &temp[i].get_m, &temp[i].get_s);
            scanf("%d:%d:%d", &temp[i].leave_h, &temp[i].leave_m, &temp[i].leave_s);
        }
        sort(temp, temp + n, functionA);
        cout << temp[0].Name << " ";
        sort(temp, temp + n, functionB);
        cout << temp[0].Name << endl;
    }
    return 0;
}