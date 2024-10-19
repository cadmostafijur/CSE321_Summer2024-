#include <stdio.h>
#include <string.h>

int isUpdated(char *mail) {
    if (strstr(mail, "@kaaj.com") != NULL) 
        return 0; 
    else if (strstr(mail, "@sheba.xyz") != NULL) 
        return 1; 
    return -1;
}
int main() {
    char mail[100];

    printf("enter the email address: ");
    scanf("%s", mail);

    int updated = isUpdated(mail);
    
    if (updated == 0) 
        printf("email address is outdated\n");
    else if (updated == 1) 
        printf("email address is okay\n");
    else 
        printf("invalid email address\n");

    return 0;
}
