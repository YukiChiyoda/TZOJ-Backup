#include <iostream>
using namespace std;

class CDate{
    protected:
        int y, m, d;
    public:
        CDate();
        CDate(int y, int m, int d):
            y(y), m(m), d(d){}
        void Print(){
            cout << y << "-" << m << "-" << d << endl;
        }
};

class CTime{
    protected:
        int hh, mm, ss;
    public:
        CTime();
        CTime(int hh,int mm,int ss):
            hh(hh), mm(mm), ss(ss){}
        void Print(){
            cout << hh << ":" << mm << ":" << ss << endl;
        }
};

class CDateTime:
    public CTime, public CDate{
    public:
        CDateTime();
        CDateTime(int y, int m, int d, int hh, int mm, int ss):
            CDate(y, m, d), CTime(hh, mm, ss){}
        void Print(){
            cout << CDate::y << "-"
                << CDate::m << "-"
                << CDate::d << " "
                << CTime::hh << ":"
                << CTime::mm << ":"
                << CTime::ss << endl;
        }
};