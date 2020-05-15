#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(void)
{
    int i, l=0, w=0,s=0;
    float L, S, x;
    string t = get_string("Text: ");
    for (i = 0; i < strlen(t); i++)
    {
        if (t[i] == ' ')
            w++;
        else if (t[i] == '.' || t[i] == '!' || t[i] == '?')
            s++;
        else if (isalpha(t[i]))
            l++;
    }
    if (w > 0)
        w++;
    L = (float)l / w * 100;
    S = (float)s / w * 100;
    x = (0.0588 * L) - (0.296 * S) - 15.8;
    x = round(x);

    if (x < 1)
        printf("Before Grade 1\n");
    else if (x >= 16)
        printf("Grade 16+\n");
    else
        printf("Grade %i\n",(int)x);
}