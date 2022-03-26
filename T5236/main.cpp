#include <iostream>
using namespace std;

class X{
    private:
        int num;
    public:
        X(int x){
            num = x;
            cout << "Constructor " << num << endl;
        }
        X(const X &x){
            num = x.num;
            cout << "Copy Constructor " << num << endl;
        }
        ~X(){
            cout << "Destructor" << endl;
        }
};