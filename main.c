#include "pendu.c"


int main(void)
{

    char motMystere[30] = {0};

    ft_random_word(motMystere);

    printf("%s", motMystere);

    return EXIT_SUCCESS;
}
