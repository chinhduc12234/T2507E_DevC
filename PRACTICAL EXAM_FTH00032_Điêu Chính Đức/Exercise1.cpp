#include <stdio.h>
#include <string.h>

int main() {
    char S1[100], S2[100];
    char *nganHon, *daiHon;

    printf("Enter string S1: ");
    scanf("%s", S1);
    printf("Enter string S2: ");
    scanf("%s", S2);

    if (!strlen(S1) || !strlen(S2)) {
        printf("Invalid input!\n");
    }
    if (strcmp(S1, S2) == 0) {
        printf("Equal strings\n");
    }

    nganHon = (strlen(S1) < strlen(S2)) ? S1 : S2;
    daiHon  = (nganHon == S1) ? S2 : S1;

    if (strstr(daiHon, nganHon)) 
        printf("Yes!\n");
    else 
        printf("No!\n");
}

