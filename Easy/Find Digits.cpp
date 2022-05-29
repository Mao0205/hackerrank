#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'findDigits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int findDigits(int n) {
    int i, temp, N;
    int count;
    count = 0;
    N = n;
    while(n != 0)
    {
        temp = n%10;
        n /= 10;
        if(temp != 0)
        {
            if(N % temp == 0)
                count++;
        }
    }
    //printf("%d\n", count);
    return count;
}

int main()
{
    int T, n, ans;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        ans = findDigits(n);
        printf("%d\n", ans);
    }
}
