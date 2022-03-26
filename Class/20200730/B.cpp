#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    string Name;
    string ID;
    string HomeTown;
    int Year;
    int Month;
    int Date;
};

bool camp(const Student a, const Student b){
    if(a.HomeTown != b.HomeTown)    return a.HomeTown < b.HomeTown;
    if(a.Month != b.Month)      return a.Month < b.Month;
    if(a.Date != b.Date)    return a.Date < b.Date;
    return a.ID < b.ID;
}

int main(){
    int t;
    cin >> t;
    Student data[100];
    char temp;
    for(int i = 0; i < t; i += 1){
        cin >> data[i].ID >> data[i].Name >> data[i].HomeTown >> data[i].Year >> temp >> data[i].Month >> temp >> data[i].Date;
    }
    sort(data, data + t, camp);
    for(int i = 0; i < t; i += 1){
        cout << data[i].ID << " "
            << data[i].Name << " "
            << data[i].HomeTown << " "
            << data[i].Year << "-" << data[i].Month << "-" << data[i].Date << endl;
    }
    return 0;
}