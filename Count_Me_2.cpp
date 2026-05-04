#include <stdio.h>
int main () {
    int i ;
    char S [100001];
    scanf("%s", S);
    int count = 0;
    for (i = 0; S[i] != '\0'; i++)
    {
        if ( S[i]!='a' 
            && S[i]!='e' 
            && S[i]!='i' 
            && S[i]!='o' 
            && S[i]!='u' )
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}