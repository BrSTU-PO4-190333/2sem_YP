#include "analyzer.h"

int itIsID(char* word)
{
    char IDSymbols[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtVvUuWwXxYyZz0123456789";
    int IDSymbolsLength = strlen(IDSymbols);

    int length = strlen(word);
    int k = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < IDSymbolsLength; j++)
        {
            k = 0;
            if (word[i] == IDSymbols[j])
            {
                k++;
                break;
            }
        }

        if (k == 0)
        {
            return 0;
        }
    }

    char letters[] = "AaBbCcDdEeFfGgHhIiGgKkLlMmNnOoPpQqRrSsTtVvUuWwXxYyZz";
    int lettersLength = strlen(letters);
    int p = 0;
    for (int i = 0; i < lettersLength; i++)
    {
        if (word[0] == letters[i])
        {
            p++;
            break;
        }
    }

    if (p == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int itIsArifmetic(char* word)
{
    char arifmeticSymbols[] = "+-*/%";
    int arifmeticSymbolsLength = strlen(arifmeticSymbols);

    int symbolsCounter = 0;

    int k = 0;

    int length = strlen(word);
    for (int i = 0; i < length; i++)
    {
       for (int j = 0; j < arifmeticSymbolsLength; j++)
       {
            k = 0;
            if (word[i] == arifmeticSymbols[j])
            {
                symbolsCounter++;
                k++;
                break;
            }
       }
       if (k == 0)
       {
            return 0;
       }
    }

    if (symbolsCounter == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int itIsEquals(char* word)
{
    int equalsCounter = 0;

    int length = strlen(word);
    for (int i = 0; i < length; i++)
    {
        if (word[i] == '=')
        {
            equalsCounter++;
        }
        else
        {
            return 0;
        }
    }

    if (equalsCounter == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int itIsRealConst(char* word)
{
    //char intConst[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtVvUuWwXxYyZz0123456789";
    char realConst[] = "0123456789.";
    int realConstLength = strlen(realConst);
    int length = strlen(word);
    int k = 1;
    for (int i = 0; i < length; i++)
    {

        for (int j = 0; j < realConstLength; j++)
        {
            k = 0;
            if (word[i] == realConst[j])
            {
                k++;
                break;
            }
        }

        if (k == 0)
        {
            return 0;
        }

    }

    int pointCounter = 0;
    for (int i = 0; i < length; i++)
    {
        if (word[i] == '.')
        {
            pointCounter++;
        }
    }

    if (pointCounter == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int itIsIntConst(char* word)
{
    //char intConst[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtVvUuWwXxYyZz0123456789";
    char intConst[] = "0123456789";
    int intConstLength = strlen(intConst);
    int length = strlen(word);
    int k = 1;
    for (int i = 0; i < length; i++)
    {

        for (int j = 0; j < intConstLength; j++)
        {
            k = 0;
            if (word[i] == intConst[j])
            {
                k++;
                break;
            }
        }

        if (k == 0)
        {
            return 0;
        }

    }

    return 1;
}
