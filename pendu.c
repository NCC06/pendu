#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include "pendu.h"

int ft_random_number(int max)
{
    int random_number;
   
    srand(time(NULL)); 
    random_number = rand() % max;
    
    return random_number;
}
     
int ft_random_word(char *word_to_pick)
{
    FILE* dico = NULL;   
    int number_of_words = 0;
    int picked_word_number = 0;
    char read_letter = 0;

    dico = fopen("/Users/Niels/Desktop/C/test/pendu/dico.txt", "r");

    if (dico == NULL)
    {
        printf("Impossible de charger dico");
        return 0;
    }


    while(read_letter != EOF)
    {
        read_letter = fgetc(dico);
        if (read_letter == '\n')
            number_of_words++;
    } 
    

    picked_word_number = ft_random_number(number_of_words);

    rewind(dico);

    while(picked_word_number > 0)
    {
        read_letter = fgetc(dico);
        if (read_letter == '\n')
            picked_word_number--;
    }

    fgets(word_to_pick, 30, dico);       

    word_to_pick[strlen(word_to_pick) - 1] = '\0';    
    fclose(dico);

    return(EXIT_SUCCESS);
}
