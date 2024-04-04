#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("File not found or unable to open the input file.\n");
        return 1;
    }
    printf("Contents of the file '%s':\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    fclose(file);

    return 0;
}
/*
Enter the name of the file: example.txt
Contents of the file 'example.txt':
hi iam poojitha
*/
