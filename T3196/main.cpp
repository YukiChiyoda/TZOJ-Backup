#include <iostream>
#include <queue>
using namespace std;

struct Data{
    int Grade;
    int ID;
    bool operator()(const Data x, const Data y){
        if(x.Grade != y.Grade)
            return x.Grade < y.Grade;
        return x.ID > y.ID;
    }
};

int main(){
    int n;
    while(cin >> n){
        priority_queue <Data, vector<Data>, Data> q[3];
        int k = 0;
        while(n--){
            string temp;
            cin >> temp;
            if(temp == "IN"){
                int x, y;
                cin >> x >> y;
                q[x - 1].push({y, ++k});
            }else if(temp == "OUT"){
                int x;
                cin >> x;
                if(!q[x - 1].empty()){
                    cout << q[x - 1].top().ID << endl;
                    q[x - 1].pop();
                }else
                    cout << "EMPTY" << endl;
            }
        }
    }
    return 0;
}