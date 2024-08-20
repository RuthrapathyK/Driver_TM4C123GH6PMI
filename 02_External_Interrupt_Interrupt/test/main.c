#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10]="n1w";
char * p =0;
    switch(*p)
    {
        case 'a' ... 'z':
            printf("Alphabet");
            break;
        case '0' ... '9':
            printf("Numeric");
            break;
        default:
            break;

    }
    //printf("%d",strstr(s1,s2));
}