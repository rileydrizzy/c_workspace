#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* data structure for the dictionary */
int DICT_SIZE = 5;
int DICT_LENGTH = 70;
char the_dictionary[100][71];

void load_dictionary()
{
    FILE *vocabulary_file = fopen("vocabulary_list.txt", "r");
    if (vocabulary_file)
    {
        for (int i = 0; i < DICT_SIZE; i++)
        {
            fgets(the_dictionary[i], sizeof(char) * 71, vocabulary_file);
            printf("%s", the_dictionary[i]);
        }
        fclose(vocabulary_file);
    }
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
    puts("Start;");
    load_dictionary();
    puts("End");
    printf("%s\n", the_dictionary[3]);
    return 0;
}