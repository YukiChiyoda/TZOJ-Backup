#include <iostream>
#include <vector>
using namespace std;

void Input(vector<int> &v){
	int n;
	cin >> n;
	for(int i = 0; i < n; i += 1){
		int x;
		cin >> x;
		v.push_back(x);
	}
}

int main()
{
    vector<int> vec;
    Input(vec);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
}
