#include <iostream>
using namespace std;

class CTriangle{
    private:
        int a, b, c;
    public:
        CTriangle();
        CTriangle(int a, int b, int c):
            a(a), b(b), c(c){}
        int Perimeter(){
            return a + b + c;
        }
};