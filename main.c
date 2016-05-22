#include <stdio.h>
#include <windows.h>

#include "funio.h"

// produce a seed for rand()
void srand(unsigned int seed);

// return a current time
int time (int t);

// random number generator
int rand (void);

int main(void)
{
    // set Russian language to console
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    // total amount of symbols
    int symbols;
    
    // number of numerals
    int numerals;
    
    // number of charaters    
    int characters;

    // number of special symbols
    int spec_sym;

    // number of lowercase letters
    int low_let;

    // number of uppercase letters
    int upp_let;

    // remain number of symbols
    int remain;
    
    // seed for rand()
    srand(time (0));     
    
    printf("Ââåäèòå îáùåå êîëè÷åñòâî ñèìâîëîâ (îò 0 äî 100): ");
    
    // input a total amountь of symbols
    symbols = input_symbols (symbols);
    
    // checks correctness of input
    if(symbols == 101)
    {
        return 0;
    }
    
    printf("Ââåäèòå êîëè÷åñòâî öèôð (îò 0 äî %i): ", symbols);
   
    // input an amount of numerals 
    numerals = input_numerals (numerals, symbols);
   
    // check correctness of input
    if (numerals == 101)
    {
        return 0;
    }
    
    if (numerals == symbols)
    {
        printf("Âàøè ïàðîëè: \n\n");      
        int i;
        for (i = 0; i < 10; i++)
        {
            // print out numerals
            num_func(numerals);
            printf("\n\n");
        }      
        system("PAUSE");   
        return 0;
    }
     
    remain = symbols - numerals;

    printf("Ââåäèòå êîëè÷åñòâî ñïåöèàëüíûõ ñèìâîëîâ (îò 0 äî %i): ", remain);

    // input an amount of special symbols
    spec_sym = input_spec (spec_sym, remain);

    // check correctness of input
    if (spec_sym == 101)
    {
        return 0;
    }
    
    if (spec_sym == remain)
    {
        printf("Âàøè ïàðîëè: \n\n");      
        int i;
        for (i = 0; i < 10; i++)
        {
            // print out numerals
            num_func(numerals);
                
            // print out special symbols
            spec_func(spec_sym);
            printf("\n\n");
        }      
        system("PAUSE");   
        return 0;
    }
    
    remain = remain - spec_sym;
    
    printf("Ââåäèòå êîëè÷åñòâî çàãëàâíûõ áóêâ (îò 0 äî %i): ", remain);

    // input an amount of uppercase letters
    upp_let = input_upp (upp_let, remain);
    
    // checks correctness of input
    if (upp_let == 101)
    {
        return 0;
    }
    
    remain = remain - upp_let;
    
    // set an amount of uppercase letters
    low_let = abs(remain);

    printf("Âàøè ïàðîëè: \n\n"); 

    // print out passwords
    int i;
    for (i = 0; i < 10; i++)
    { 
        // print out numerals
        num_func(numerals);

        // print out lowercase letters
        low_func(low_let);

        // print out uppercase letters
        upp_func(upp_let);

        // print out special symbols
        spec_func(spec_sym);

        printf("\n\n");
     }
     
    system("PAUSE");
    return 0;
}



















