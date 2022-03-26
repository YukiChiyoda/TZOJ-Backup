#include <iostream>
using namespace std;

class Integer{
    private:
        int n;
    public:
        friend istream &operator >> (istream &input, Integer &x){
            input >> x.n;
            return input;
        }
        friend ostream &operator << (ostream &output, const Integer &x){
            output << x.n;
            return output;
        }
        Integer operator + (const Integer &x){
            Integer temp;
            temp.n = n + x.n;
            return temp;
        }
        Integer operator - (const Integer &x){
            Integer temp;
            temp.n = n - x.n;
            return temp;
        }
        Integer operator * (const Integer &x){
            Integer temp;
            temp.n = n * x.n;
            return temp;
        }
        Integer operator / (const Integer &x){
            Integer temp;
            temp.n = n / x.n;
            return temp;
        }
};