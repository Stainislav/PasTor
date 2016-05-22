#include <stdio.h>

// return an array of numerals
int num_func(int num)
{
    int arr_num[num];
    int i;
    for (i = 0; i < num; i++)
    {  
       arr_num[i] = rand() % 9;
       printf("%i", arr_num[i]);
    }

    return arr_num[num];
}

// return an array of special symbols
char spec_func(int spec)
{ 
    char arr_spec[spec];
    int i;
    for (i = 0; i < spec; i++)
    {
        arr_spec[i] = rand() % 15 + 32;
        printf("%c", (char) arr_spec[i]);
    } 

    return arr_spec[spec];   
}

// return an array of uppercase letters
char upp_func(int upplet)
{
    char arr_upp[upplet];
    int i;
    for (i = 0; i < upplet; i++)
    {
        arr_upp[i] = rand() % 25 + 65;
        printf("%c", (char) arr_upp[i]);
    }

    return arr_upp[upplet];
}

// return an array of lowercase letters
char low_func(int lowlet)
{
    char arr_low[lowlet];
    int i;
    for (i = 0; i < lowlet; i++)
    {
        arr_low[i] = rand() % 25 + 97;
        printf("%c", (char) arr_low[i]);
    }

    return arr_low[lowlet];
}
