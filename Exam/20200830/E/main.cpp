#include <iostream>
#include <algorithm>
using namespace std;

struct Data{
    string Name;
    int ScoreA;
    int ScoreB;
    int Grade;
};

Data a[7];
string b[7];

bool function(const Data a, const Data b){
    if(a.ScoreA != b.ScoreA)    return a.ScoreA > b.ScoreA;
    if(a.ScoreB != b.ScoreB)    return a.ScoreB > b.ScoreB;
    if(a.Grade != b.Grade)    return a.Grade < b.Grade;
}

int main(){
    for(int i = 0; i < 7; i += 1){
        cin >> a[i].Name >> a[i].ScoreA >> a[i].ScoreB >> a[i].Grade;
        b[i] = a[i].Name;
    }
    sort(a, a + 7, function);

    cout << "Gold:" << endl;
    /*
    for(int i = 0; i < 7; i += 1)
        if(b[i] == a[0].Name)    cout << b[i] << endl;
    for(int i = 0; i < 7; i += 1)
        if(b[i] == a[1].Name)    cout << b[i] << endl;
    */

    for(int i = 0; i < 7; i += 1){
        int temp = 0;
        while(temp < 7 && a[temp].ScoreA >= a[1].ScoreA){
            if(b[i] == a[temp].Name)    cout << b[i] << endl;
            temp += 1;
        }
    }
    /*
    while(temp < 7 && a[temp].ScoreA >= a[1].ScoreA){
        for(int i = 0; i < 7; i += 1)
            if(b[i] == a[temp].Name)    cout << b[i] << endl;
        temp += 1;
    }
    */
    cout << endl;

    cout << "Team:" << endl;
    for(int i = 0; i < 7; i += 1){
        for(int j = 0; j < 5; j += 1){
            if(b[i] == a[j].Name)    cout << b[i] << endl;
        }
    }
    return 0;
}