#include <stdio.h>

int main() {
    char S[10001];
    scanf("%s", S);

    for(char ch = 'a'; ch <= 'z'; ch++) {
        int count = 0;

        for(int i = 0; S[i] != '\0'; i++) {
            if(S[i] == ch) {
                count++;
            }
        }

        if(count > 0) {
            printf("%c - %d\n", ch, count);
        }
    }

    return 0;
}