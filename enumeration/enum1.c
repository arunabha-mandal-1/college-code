#include<stdio.h>
 
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
 
int main()
{
    enum week day;
    // day = Abc; // wrong
    day = Wed; // right
    printf("%d",day);
    return 0;
}