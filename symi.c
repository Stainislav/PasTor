#include <stdio.h>

// input an amoun of symbols
int input_symbols (int amount_symbols)
{   
    do
    {       
        if (scanf("%i",&amount_symbols)!= 1)
        {                        
            printf("������������ ����!\n");
            system("PAUSE");
            return 101;
        }
        
        if (amount_symbols <=0 || amount_symbols > 100)
        {                   
            printf("������� ����� � ��������� �� 1 �� 100! \n");
            printf("������� ����� ���������� �������� (�� 0 �� 100): ");
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
            printf("������������ ����!\n");
            system("PAUSE");
            return 101;
        }
        
        if (amount_numerals > sym)
        {
            printf("���������� ���� �� ������ ��������� %i !\n", sym);
            printf("������� ���������� ���� (�� 0 �� %i): ", sym);
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
            printf("������������ ����!\n");
            system("PAUSE");
            return 101;
        }
        
        if (spec > max)
        {
            printf("���������� ����.�������� �� ������ ��������� %i !\n", max);
            printf("������� ���������� ����������� �������� (�� 0 �� %i): ", max);
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
            printf("������������ ����!\n");
            system("PAUSE");
            return 101;
        }
        
        if (upp > max)
        {
            printf("���������� ��������� ���� �� ������ ��������� %i !\n", max);
            printf("������� ���������� ��������� ���� (�� 0 �� %i): ", max);    
        }
        
    } while (upp > max);
    
    return upp;
}
