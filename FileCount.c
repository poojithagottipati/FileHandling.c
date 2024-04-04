#include <stdio.h>
#include <stdlib.h>

#define MAX_FILE_NAME 100

int main() {
    FILE *fp;
    char filename[MAX_FILE_NAME];
    char ch;
    int char_count = 0, word_count = 0, line_count = 0, in_word = 0;

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    while ((ch = fgetc(fp)) != EOF) {
        char_count++;
        if (ch == '\n')
            line_count++;
        if (ch == ' ' || ch == '\n' || ch == '\t')
            in_word = 0;
        else if (in_word == 0) {
            in_word = 1;
            word_count++;
        }
    }
    fclose(fp);
    printf("Number of characters: %d\n", char_count);
    printf("Number of words: %d\n", word_count);
    printf("Number of lines: %d\n", line_count);
    return 0;
}
/*
Enter the name of the file: example.txt
Number of characters: 57
Number of words: 13
Number of lines: 3
  */
