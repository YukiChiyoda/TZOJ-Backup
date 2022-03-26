#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Sort(vector<int> &v){
	sort(v.begin(), v.end(), greater<int>());
}

int Input(vector<int> &v){
	v.clear();
	int n;
	if(!(cin >> n)){
		return 0;
	}
	for(int i = 0; i < n; i += 1){
		int x;
		cin >> x;
		v.push_back(x);
	}
	return 1;
}

int main()
{
    vector<int> vec;
    while(Input(vec))
    {
        Sort(vec);
        for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
        {
            if(it!=vec.begin())
                cout<<" ";
            cout<<*it;
        }
        cout<<endl;
    }

    return 0;
}
