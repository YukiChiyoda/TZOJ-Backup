#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int y, m, d;
    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(n--){
        cin >> y >> m >> d;
        int s = 0;
        if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
            day[2] = 29;
        }else{
            day[2] = 28;
        }
        for (int i = 1; i < m; i += 1){
            s += day[i];
        }
        s += d;
        cout << s << endl;
    }
    return 0;
}