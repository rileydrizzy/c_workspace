#include <unistd.h>
#include <stdbool.h>
#include "dict.h"

//  clang -Wall main.c dict.c -o dictionary.0 && ./dictionary.o

// TODO implement a way for user to terminate program
// TODO bug in logic for search word in the first 20
// TODO bug in finding the exact match of word

int main(void)
{
    puts("==============\n");
    puts("Loading Dictionary, please hold on\n");
    load_dictionary();
    puts("===============\n");
    char user_input[20];

    while (true)
    {
        puts("Enter the Word you want to search for\n");
        fgets(user_input, sizeof(user_input), stdin);
        char *word_defintion = lookup_words_def(user_input);
        if (word_defintion == NULL)
        {
            puts("Word not found in dictionary\n");
            continue;
        }
        printf("%s\n", word_defintion);
        continue;
    }
    return EXIT_SUCCESS;
}