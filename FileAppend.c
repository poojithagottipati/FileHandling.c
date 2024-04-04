#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char content[1000];

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    file = fopen(filename, "a");

    if (file == NULL) {
        printf("File not found or unable to open the input file.\n");
        return 1;
    }
    printf("Enter content to append (max 999 characters): ");
    scanf(" %[^\n]", content);

    fprintf(file, "%s\n", content);
    
    fclose(file);
      printf("Content appended successfully to file '%s'.\n", filename);
    return 0;
}
/*
Enter the name of the file: example.txt
Enter content to append (max 999 characters): i am pursuing my btech in srm
Content appended successfully to file 'example.txt'.
*/
