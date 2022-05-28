#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, T, h, cycle;
    scanf("%d", &T);
    while(T--)
    {
        h=0;
        scanf("%d", &cycle);
        for(i=0;i<=cycle;i++)
        {
            if(i%2 == 0)
                h++;
            else {
                h*=2;
            }
        }
        printf("%d\n", h);
    }
}
