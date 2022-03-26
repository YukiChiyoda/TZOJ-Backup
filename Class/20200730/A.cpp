#include <iostream>
using namespace std;

struct Student{
    string Name;
    int score;
};

bool Input(Student *s){
    if(cin >> s -> Name >> s -> score){
        return true;
    }else{
        return false;
    }
}