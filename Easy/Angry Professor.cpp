#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int T, N, K,arrive , count;
    int i, j;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d", &N, &K);
        count = 0;
        for(i=0;i<N;i++)
        {
            scanf("%d ", &arrive);
            if(arrive <= 0)
                count++;
        }
        //printf("%d %d", arrive, count);
        if(count >= K)
            printf("NO\n");
        else {
            printf("YES\n");
        }
    }
}
