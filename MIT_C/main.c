#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "dict.h"

int main(void)
{
    puts("==============");
    puts("Loading Dictionary, please hold on");
    sleep(5);
    // loading dict into data sturcuture action
    sleep(5);
    puts("===============");
    char user_input[20];
    do
    {
        puts("Enter the Word you want to search for");
        scanf("%s", user_input);
        char *word_defintion = lookup_words_def(&user_input);
        if (word_defintion == NULL)
            puts("Word not found in dictionary");
        else
            printf("%s", word_defintion);
    } while (user_input == NULL);
}