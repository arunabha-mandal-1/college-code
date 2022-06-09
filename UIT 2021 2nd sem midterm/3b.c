#include <stdio.h>

int catalan(int n)
{
    if(n <= 1) return 1;
    long int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += catalan(i)*catalan(n-i-1);
    }
    return ans;
}

int main(void)
{
    int cat = catalan(7);
    printf("%d\n", cat);

    return 0;
}