#include <stdio.h>

int main() {
    char str[200];
    printf("Enter your text: ");
    fgets(str, sizeof(str), stdin);
    
    FILE *input_file = fopen("input.txt", "w");
    if (input_file == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }
    fprintf(input_file, "%s", str);
    fclose(input_file); 

    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    FILE *output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Error opening output file.\n");
        fclose(input_file); 
        return 1;
    }

    char curr, pre = ' ';
    while ((curr = fgetc(input_file)) != EOF) {
        if (!(pre == ' ' && curr == ' ')) {
            fputc(curr, output_file);
        }
        pre= curr;
    }

    printf("Extra spaces removed and Check output.txt.\n");

    fclose(input_file);
    fclose(output_file);
    
    return 0;
}
