#include <iostream>
using namespace std;

class Shape{
    public:
        virtual int Area() = 0;
};

class Rectangle:
    public Shape{
        private:
            int w, h;
        public:
            Rectangle();
            Rectangle(int w, int h){
                this -> h = h;
                this -> w = w;
            }
            int Area(){
                return w * h;
            }
};