#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) 
    {        
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int day = (M1 * D) / (M1 + M2);
        int result = D - day;

        printf("%d\n", result);
    }
    return 0;
}