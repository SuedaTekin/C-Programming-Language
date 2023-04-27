#include <stdio.h>
#include <stdlib.h>
 
int main() {
    char sentence[100], *word, *temp;
    int i, j, len;

    // Get the sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    // Allocate memory for each word in the sentence
    word = strtok(sentence, " ");
    while (word != NULL) {
        len = strlen(word);
        temp = (char*) malloc(len * sizeof(char));
        for (i = 0, j = len - 1; i < len; i++, j--) {
            temp[i] = word[j];
        }
        temp[i] = '\0';
        printf("%s ", temp);
        free(temp);
        word = strtok(NULL, " ");
    }

    return 0;
}
