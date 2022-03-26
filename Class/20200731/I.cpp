#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int Number;
    int Morality;
    int Talent;
};

Student A[100000];
Student B[100000];
Student C[100000];
Student D[100000];

bool function(const Student a, const Student b){
    int A, B;
    A = a.Morality + a.Talent;
    B = b.Morality + b.Talent;
    if(A != B)      return A > B;
    if(a.Morality != b.Morality)      return a.Morality > b.Morality;
    return a.Number < b.Number;
}

int main(){
    int n, l, h;
    cin >> n >> l >> h;
    int a = 0, b = 0, c = 0, d = 0;
    for(int i = 0; i < n; i += 1){
        int Temp_Number, Temp_M, Temp_T;
        cin >> Temp_Number >> Temp_M >> Temp_T;
        if(Temp_M < l || Temp_T < l){
            continue;
        }else if(Temp_M >= h && Temp_T >= h){
            A[a].Number = Temp_Number;
            A[a].Morality = Temp_M;
            A[a].Talent = Temp_T;
            a += 1;
        }else if(Temp_M >= h){
            B[b].Number = Temp_Number;
            B[b].Morality = Temp_M;
            B[b].Talent = Temp_T;
            b += 1;
        }else if(Temp_M >= Temp_T){
            C[c].Number = Temp_Number;
            C[c].Morality = Temp_M;
            C[c].Talent = Temp_T;
            c += 1;
        }else{
            D[d].Number = Temp_Number;
            D[d].Morality = Temp_M;
            D[d].Talent = Temp_T;
            d += 1;
        }
    }
    sort(A, A + a, function);
    sort(B, B + b, function);
    sort(C, C + c, function);
    sort(D, D + d, function);
    cout << a + b + c + d << endl;
    for(int i = 0; i < a; i += 1){
        cout << A[i].Number << " " << A[i].Morality << " " << A[i].Talent << endl;
    }
    for(int i = 0; i < b; i += 1){
        cout << B[i].Number << " " << B[i].Morality << " " << B[i].Talent << endl;
    }
    for(int i = 0; i < c; i += 1){
        cout << C[i].Number << " " << C[i].Morality << " " << C[i].Talent << endl;
    }
    for(int i = 0; i < d; i += 1){
        cout << D[i].Number << " " << D[i].Morality << " " << D[i].Talent << endl;
    }
    return 0;
}

/*
 * - A - 德分和才分均不低于此线的考生：按德才总分从高到低排序；
 * - B - 才分不到但德分到线的一类考生：按总分排序，但排在第一类考生之后；
 * - C - 德才分均低于H，但是德分不低于才分的考生：按总分排序，但排在第二类考生之后；
 * - D - 其他达到最低线L的考生：按总分排序，但排在第三类考生之后。
*/