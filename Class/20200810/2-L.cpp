#include <iostream>
#include <queue>
using namespace std;

struct Point{
    int x;
    int y;
    friend int operator < (Point a, Point b){
        if(a.x == b.x)      return a.y > b.y;
        return a.x > b.x;
    }
};

priority_queue<Point> qu;

void Input(){
    int n;
    cin >> n;
    while(n--){
        Point temp;
        cin >> temp.x >> temp.y;
        qu.push(temp);
    }
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        Input();
        while(!qu.empty())
        {
            Point p = qu.top();
            cout<<p.x<<" "<<p.y<<endl;
            qu.pop();
        }
    }
    return 0;
}