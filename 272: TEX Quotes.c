/*
*Date: 10/05/2016
*Author: Abdus Salam
*Contact: salam4268@gmail.com
*Source: http://uva.onlinejudge.org
*Problem No: 272
*Name: TEX Quotes
*/

#include <stdio.h>

int main()
{
    int c, i;

    i=1;
    while((c=getchar())!=EOF) {
        if(c=='"' && i==1) {
            printf("%s", "``");
            i=2;
        }
        else if(c=='"' && i==2) {
            printf("%s", "''");
            i=1;
        }
        else {
            putchar(c);
        }
    }
    return 0;
}
