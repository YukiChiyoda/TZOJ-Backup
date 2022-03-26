#include <iostream>
#include <vector>
using namespace std;

void Input(vector<vector<int> > &v){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i += 1){
		vector<int> t;
		for(int j = 0; j < m; j += 1){
			int x;
			cin >> x;
			t.push_back(x);
		}
		v.push_back(t);
	}
}

int main()
{
    vector< vector<int> > vec;
    Input(vec);
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            if(j)
                cout<<" ";
            cout<<vec[i][j];
        }
        cout<<endl;
    }
    return 0;
}