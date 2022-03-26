#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        bool light[100];
        for(int i = 0; i < 100; i += 1){
            light[i] = true;
        }
        for(int super_i = 0; super_i < b; super_i += 1){
            int m, n;
            cin >> m >> n;
            for(int i = m - 1; i <= n - 1; i += 1){
                if(light[i] == false){
                    light[i] = true;
                }else{
                    light[i] = false;
                }
            }
        }
        bool flag = false;
        for(int i = 0; i < a; i += 1){
            if(light[i] == true){
                if(flag != false){
                    cout << " ";
                }
                cout << i + 1;
                flag = true;
            }
        }
        cout << endl;
    }
    return 0;
}