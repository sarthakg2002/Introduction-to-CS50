#include <cs50.h>
#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, string argv[])
{
    int i , k = 1;
    for (i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
             k=0;
        }
    }
    if(k == 0 || argc != 2)
    {
        printf("Usage %s key\n", argv[0]);
        return 1;
    }
    if (argc == 2 )
    {
        k = atoi(argv[1]);
    }
    if(k < 0)
    {
        return 1;
    }
    string s= get_string("plaintext:  ");
    for (i = 0; i < strlen(s); i++)
    {
        if (islower(s[i]))
        {
           while (s[i] + k > 122)
           {
                s[i] = 'a' + (s[i] - 123 );
           }
             s[i] += k;
        }
        else if (isupper(s[i]))
        {

            while (s[i] + k > 90)
                s[i]= 'A' + ( s[i]- 91 );
             s[i] += k;
        }
    }
    printf ("ciphertext: %s\n",s);
    return 0;
}