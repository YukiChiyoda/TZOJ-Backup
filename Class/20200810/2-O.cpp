#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Permutation(vector<int> &v){
    sort(v.begin(), v.end());
    do{
        for(int i = 0; i < v.size(); i += 1){
            if(i != 0){
                cout << " ";
            }
            cout << v[i];
        }
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));
}

int main()
{
    vector<int> vec;
    int n, x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        vec.push_back(x);
    }
    Permutation(vec);
    return 0;
}