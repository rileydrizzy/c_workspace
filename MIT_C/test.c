#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int DICT_SIZE = 3;

char *the_dictionary[3];

void load_dictionary()
{
    FILE *vocabulary_file = fopen("vocabulary_list.txt", "r");
    if
}

char *lookup_words_def(char word[])
{
    for (int i = 0; i < DICT_SIZE; i++)
    {

        char *result = strstr(the_dictionary[i], word);
        printf("%i\n", i);
        // printf("%s", the_dictionary[i]);
        if (result != NULL)
            return result;
    }
    return NULL;
}

int main(void)
{
    char *ans = lookup_words_def("bave");
    if (ans == NULL)
        puts("Word not found in dictionary");
    // loop back to input
    else
        printf("%s", ans);
    // loop back to input
}