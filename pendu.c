#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>


int ft_random_number(int max)
{
    int random_number;
    
    random_number = rand() % max;

    return random_number;
}

int main(void)
{
    FILE *dico = NULL;
    char word_to_find[30] = {0};    
    int number_of_words = 0;
    int picked_word_number = 0;
    char read_letter = 0;
    int i = 0;

    dico = fopen("dico.txt", "r");

    while(read_letter != EOF)
    {
        read_letter = fgetc(dico);
        if (read_letter == '\n')
            number_of_words++;
    } 
    
    picked_word_number = ft_random_number(number_of_words);

    rewind(dico);

    while(i < picked_word_number)
    {
        read_letter = fgetc(dico);
        if (read_letter == '\n')
            number_of_words++;   
    }

    fgets(word_to_find, 30, dico);       

    printf("%s", word_to_find);

    return (EXIT_SUCCESS);
}
