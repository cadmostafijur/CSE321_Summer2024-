#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool Check_palindrome(char *str) {
    char *ft = str;//front 
    char *end = str + strlen(str) - 1;
    while (ft < end) {
        char ftChar = tolower(*ft);// front char
        char endChar = tolower(*end);
        if (ftChar != endChar)
            return false;
        ft++;
        end--;
    }
    return true;
}
int main() {
    char inp[100];
    printf("enter string: ");
    scanf("%s", inp);

    if (Check_palindrome(inp)) {
        printf("palindrome\n");
    } else {
        printf("not palindrome\n");
    }
    return 0;
}
