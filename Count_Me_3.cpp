#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        char S[10001];
        scanf("%s", S);

        int capital = 0, 
        small = 0, 
        digits = 0;

        for(int j = 0; S[j] != '\0'; j++) {
            
            if(S[j] >= 'A' && S[j] <= 'Z')
                capital++;
            else if(S[j] >= 'a' && S[j] <= 'z')
                small++;
            else
                digits++;
        }

        printf("%d %d %d\n", capital, small, digits);
    }

    return 0;
}