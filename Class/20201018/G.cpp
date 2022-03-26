#include <iostream>
using namespace std;

struct Hotel{
    int Style;
    int Coffee;
};

int n, k, p;
int answer;
Hotel hotel[200000];

bool Cheak(int a, int b){
    for(int i = a; i <= b; i += 1)
        if(hotel[i].Coffee <= p)
            return true;
    return false;
}

int main(){
    cin >> n >> k >> p;
    for(int i = 0; i < n; i += 1)
        cin >> hotel[i].Style >> hotel[i].Coffee;
    for(int i = 0; i < n; i += 1){
        bool flag = false;
        for(int j = i + 1; j < n; j += 1)
            if(hotel[i].Style == hotel[j].Style)
                if(flag || Cheak(i, j))
                    answer += 1, flag = true;
    }
    cout << answer << endl;
    return 0;
}

//TLE