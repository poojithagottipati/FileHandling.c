#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char buffer[BUFFER_SIZE];
    int bytesRead;

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    sourceFile = fopen(sourceFileName, "r");

    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    destinationFile = fopen(destinationFileName, "w");
    
    fclose(sourceFile);

    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
/*
Enter the name of the source file: example.txt
Enter the name of the destination file: recipe_log.txt 
File copied successfully.
  */
