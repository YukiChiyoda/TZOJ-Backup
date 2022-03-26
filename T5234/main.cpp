#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class CPoint{
    private:
        double x, y;
    public:
        CPoint(){}
        CPoint(double x, double y):
            x(x), y(y){}
        double Dist(CPoint temp){
            return sqrt(pow(x - temp.x, 2) + pow(y - temp.y, 2));
        }
};