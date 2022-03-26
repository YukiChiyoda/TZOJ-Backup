#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

template <typename T>
class Vector{
    private: T *p;
			int size, tot;
	public:
		Vector(){
			p = (T *)malloc(10 * sizeof(T));
			size = 10, tot = 0;
		}
		void Push_back(T a){
			if(tot == size){
				p = (T *)realloc(p, 10 * sizeof(T));
				size += 10;
			}
			*(p + tot) = a;
			tot ++;
		}
		typedef T* Iterator;
		T* Begin(){
			return p;
		}
		T* End(){
			return p + tot;
		}
};

int vector, deque, list, forward_list, array, string;
int main()
{
	Vector<int> a;
	for(int i=1;i<=5;i++)
		a.Push_back(i);
	Vector<int>::Iterator it;
	for(it=a.Begin();it!=a.End();++it)
	{
		cout<<*it<<endl;
	}
}