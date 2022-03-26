#include <iostream>
#include <vector>
using namespace std;

void Insert(vector<int> &v, int x){
	for(vector<int>::iterator it = v.begin(); it != v.end(); it += 1){
		if(*it == x)	return;
	}
	v.insert(v.begin(), x);
}

int main()
{
    vector<int> vec;
    int n, x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        Insert(vec, x);
    }
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
