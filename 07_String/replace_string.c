#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp, *temp;
    char word[100], oldWord[100], newWord[100];
    int count = 0;

    fp = fopen("data.txt", "r");
    if(fp == NULL) {
        printf("File not found!");
        return 0;
    }

    temp = fopen("temp.txt", "w");
    printf("Enter word to find: ");
    scanf("%s", oldWord);

    printf("Enter replacement word: ");
    scanf("%s", newWord);

    while(fscanf(fp, "%s", word) != EOF) {

        if(strcmp(word, oldWord) == 0) {
            count++;
            fprintf(temp, "%s ", newWord);
        }
        else {
            fprintf(temp, "%s ", word);
        }
    }
    fclose(fp);
    fclose(temp);

    remove("data.txt");
    rename("temp.txt", "data.txt");
    printf("Total appearances = %d\n", count);
    printf("Replacement completed.");

    return 0;
}