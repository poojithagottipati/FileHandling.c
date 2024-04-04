#include <stdio.h>
#define BUFFER_SIZE 1024

int compareFiles(FILE *fp1, FILE *fp2);

int main() {
    FILE *file1, *file2;
    char filename1[100], filename2[100];

    printf("Enter the first filename: ");
    scanf("%s", filename1);

    printf("Enter the second filename: ");
    scanf("%s", filename2);

    file1 = fopen(filename1, "r");
    file2 = fopen(filename2, "r");
    if (compareFiles(file1, file2) == 0)
        printf("Files are identical.\n");
    else
        printf("Files are different.\n");

    fclose(file1);
    fclose(file2);

    return 0;
}
int compareFiles(FILE *fp1, FILE *fp2) {
    char ch1, ch2;

    while ((ch1 = fgetc(fp1)) != EOF && (ch2 = fgetc(fp2)) != EOF) {
        if (ch1 != ch2)
            return -1; 
    }
    if (ch1 == EOF && ch2 == EOF)
        return 0;
    else
        return -1; 
}
