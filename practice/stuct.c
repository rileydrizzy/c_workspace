#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *sex;
    float IQ;
} human_char;

typedef union
{
    short count;
    int age;
    float weight;
    float volume;
} number;

typedef struct
{
    char *name;
    char *specices;
    int age;
    int teeth;
    human_char field;
    number field_no;
} fish_2;

void my_func(fish_2 *data)
{
    printf("%s is a %s. About %d age and has %d Teeths \n", data->name, data->specices, data->age, data->teeth);
    printf("He is a %s, and has an IQ of %2.f \n", data->field.sex, data->field.IQ);
    printf("Hes has a weight of %2.f \n", data->field_no.weight);
}

int main(void)
{
    fish_2 ladi = {"Ladi", "Human", 30, 32, .field.sex = "Male", .field.IQ = 150.0, .field_no.weight = 25.0};
    my_func(&ladi);
}