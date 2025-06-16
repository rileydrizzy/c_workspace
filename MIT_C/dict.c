#include "dict.h"
#include <string.h>
#include <strings.h>

/* data structure for the dictionary */
int DICT_SIZE = 100;

char *the_dictionary[100];

char *lookup_words_def(char word[])
{
    for (int i = 0; i < DICT_SIZE; i++)
    {
        char *result = strstr(the_dictionary[i], word);
        if (result != NULL)
            return result;
    }
    return NULL;
}

void load_dictionary()
{
    FILE *vocabulary_file = fopen("vocabulary_list.txt", "r");
    if (vocabulary_file)
    {
        for (int i = 0; i < DICT_SIZE; i++)
        {
            fgets(the_dictionary[i], sizeof(), vocabulary_file);
        }
        fclose(vocabulary_file);
    }
}