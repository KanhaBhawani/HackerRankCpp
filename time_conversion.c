#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    fgets(s, 10, stdin);
    if (s[8] == 'A')
    {
        if (s[0] == '1' && s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
        }
    }
    else
    {
        if (s[0] == '0' || s[1] != '2')
        {
            /* ERROR__
            problem-->
            if s[1] == 8 or 9 -> s[1] + 2 == : and ; resp.
            as ascai value :
                8 -> 56
                9 -> 57
                : -> 58
                ; -> 59  
            */
            s[0] += 1;
            s[1] += 2;
        }
    }
    s[8] = '\0';
    puts(s);
    return 0;
}