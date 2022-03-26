#include <iostream>
#include <algorithm>
#define fuck 0x7FFFFFFF
using namespace std;

int n;
int num[401];
int dp_min[401][401];
int dp_max[401][401];

int main(){
    cin >> n;
    for(int i = 1; i <= n; i += 1){
        cin >> num[i];
        num[i + n] = num[i];
    }
    for(int i = 1; i <= 2 * n; i += 1)
        num[i] += num[i - 1];
    for(int l = 2; l <= n; l += 1)
        for(int i = 1; i <= 2 * n - l + 1; i += 1){
            int j = i + l - 1;
            dp_min[i][j] = fuck, dp_max[i][j] = 0;
            for(int k = i; k < j; k += 1)
                dp_min[i][j] = min(dp_min[i][j], dp_min[i][k] + dp_min[k + 1][j]),
                dp_max[i][j] = max(dp_max[i][j], dp_max[i][k] + dp_max[k + 1][j]);
            dp_min[i][j] += num[j] - num[i - 1],
            dp_max[i][j] += num[j] - num[i - 1];
        }
    int answer_min = fuck, answer_max = 0;
    for(int i = 1; i <= n; i += 1)
        answer_min = min(answer_min, dp_min[i][i + n - 1]),
        answer_max = max(answer_max, dp_max[i][i + n - 1]);
    cout << answer_min << endl
        << answer_max << endl;
    return 0;
}