#include <stdio.h>

// input an amoun of symbols
int input_symbols (int amount_symbols)
{   
    do
    {       
        if (scanf("%i",&amount_symbols)!= 1)
        {                        
            printf("Некорректный ввод!\n");
            system("PAUSE");
            return 101;
        }
        
        if (amount_symbols <=0 || amount_symbols > 100)
        {                   
            printf("Укажите число в интервале от 1 до 100! \n");
            printf("Введите общее количество символов (от 0 до 100): ");
        }
        
    } while (amount_symbols <= 0 || amount_symbols > 100);
      
    return amount_symbols;
}

// input an amount of numerals
int input_numerals (int amount_numerals, int sym)
{    
    do
    {
        if (scanf("%i",&amount_numerals)!= 1)
        {                        
            printf("Некорректный ввод!\n");
            system("PAUSE");
            return 101;
        }
        
        if (amount_numerals > sym)
        {
            printf("Количество цифр не должно превышать %i !\n", sym);
            printf("Введите количество цифр (от 0 до %i): ", sym);
        }
        
    } while (amount_numerals > sym);
    
    return amount_numerals;
}

// input an amount of special symbols
int input_spec (int spec, int max)
{
    do
    {
        if (scanf("%i",&spec)!= 1)
        {                        
            printf("Некорректный ввод!\n");
            system("PAUSE");
            return 101;
        }
        
        if (spec > max)
        {
            printf("Количество спец.символов не должно превышать %i !\n", max);
            printf("Введите количество специальных символов (от 0 до %i): ", max);
        }
        
     } while (spec > max);
     
    return spec;
}

// input an amount of uppercase letters
int input_upp (int upp, int max)
{   
    do
    {
        if (scanf("%i",&upp)!= 1)
        {                        
            printf("Некорректный ввод!\n");
            system("PAUSE");
            return 101;
        }
        
        if (upp > max)
        {
            printf("Количество заглавных букв не должно превышать %i !\n", max);
            printf("Введите количество заглавных букв (от 0 до %i): ", max);    
        }
        
    } while (upp > max);
    
    return upp;
}
