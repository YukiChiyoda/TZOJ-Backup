#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
    string s;
    priority_queue <int, vector<int>, greater<int> > q;
    while(getline(cin, s), s != "END"){
        sort(s.begin(), s.end());
        int sum = 1;
        int leng = s.length();
        bool flag = false;
        for(int i = 1; i < leng; i += 1)
            if(s[i] != s[i - 1])
                q.push(sum), sum = 1, flag = true;
            else
                sum += 1;
        q.push(sum);
        if(!flag){
            cout << leng * 8 << " " << leng << " 8.0" << endl;
            continue;
        }
        int k = 0;
        while(q.size() >= 2){
            int x = q.top();
            q.pop();
            int y = q.top();
            q.pop();
            q.push(x + y);
            k += x + y;
        }
        q.pop();
        leng *= 8;
        double temp = (leng * 1.00) / (k * 1.00);
        printf("%d %d %.1f\n", leng, k, temp);
    }
    return 0;
}

//Wrong Answer