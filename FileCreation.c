#include <stdio.h>

int main() {
    FILE *filePointer;
    char content[1000];
    filePointer = fopen("example.txt", "w");

    if (filePointer == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }
    printf("Enter content to write to the file (type 'exit' on a new line to finish):\n");
    while (1) {
        fgets(content, sizeof(content), stdin);
        if (strcmp(content, "exit\n") == 0) {
            break;
        }
        fputs(content, filePointer);
    }
    fclose(filePointer);
    printf("File saved and closed successfully.\n");

    return 0;
}
/*
Enter content to write to the file (type 'exit' on a new line to finish):
hi iam poojitha
exit
File saved and closed successfully.
*/
