#include <cstdio>
#include <algorithm>
using namespace std;

int num[7];
int coin[6] = {1, 3, 5, 7, 9, 13};

int main(){
    while(true){
        bool flag = false;
        for(int i = 0; i < 7; i += 1){
            scanf("%d", &num[i]);
            if(num[i])
                flag = true;
        }
        if(!flag)
            break;
        int dp[5001] = {0};
        for(int i = 0; i < 6; i += 1)
            for(int j = 1; j <= num[i]; j += 1)
                for(int k = num[6]; k >= coin[i]; k -= 1)
                    if(dp[k - coin[i]] || k == coin[i])
                        dp[k] = max(dp[k], dp[k - coin[i]] + 1);
        if(!dp[num[6]])
            printf("impossible\n");
        else
            printf("%d\n", dp[num[6]]);
    }
    return 0;
}