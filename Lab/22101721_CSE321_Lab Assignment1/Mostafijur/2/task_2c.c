#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    printf("Enter password: ");
    scanf("%99s", password);
    int lcase = 0;
    int ucase = 0;
    int digit = 0;
    int special = 0;
    for (int i = 0; i < strlen(password); i++) {
        if (islower(password[i])) {
            lcase = 1;
        } else if (isupper(password[i])) {
            ucase = 1;
        } else if (isdigit(password[i])) {
            digit = 1;
        } else if (password[i] == '_' || password[i] == '$' || password[i] == '#' || password[i] == '@') {
            special = 1;
        }
    }
    int all_ok = 1;
    char missing[100] = "";

    if (!lcase) {
        strcat(missing, "lowercase character missing, ");
        all_ok = 0;
    }
    if (!ucase) {
        strcat(missing, "uppercase character missing, ");
        all_ok = 0;
    }
    if (!digit) {
        strcat(missing, "digit missing, ");
        all_ok = 0;
    }
    if (!special) {
        strcat(missing, "special character missing, ");
        all_ok = 0;
    }

    if (all_ok) {
        printf("OK\n");
    } else {
        missing[strlen(missing) - 2] = '\0';// comma and space remove
        printf("%s\n", missing);
    }

    return 0;
}

