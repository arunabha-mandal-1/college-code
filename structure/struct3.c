// structures in structures
#include <stdio.h>

struct Salary
{
    char name[20];
    char dept[10];
    struct
    {
        int da;
        int hra;
        int cityId;
    }allowance;
    
};

int main()
{
    struct Salary emp1;
    emp1.allowance.cityId = 10;
    printf("%d\n", emp1.allowance.cityId);

    // what if we did not use allowance
    // in that case =>
    // emp1.cityId => is correct syntax , don't know wtf happening but it was working
    return 0;
}