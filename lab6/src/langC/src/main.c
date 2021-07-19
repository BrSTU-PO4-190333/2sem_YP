#include "main.h"

int main()
{
    option1();
    return 0;
}

void option1()
{
   FILE* file_pointer = fopen("../files/option1.txt", "r");
   if (file_pointer == NULL)
   {
        printf("File not opened\n");
   }
   else
   {
        printf("\n= = = File = = =\n");
        struct list* list = NULL;
        char symbol;
        int word_size = 0;
        char* word = (char*) calloc(word_size, sizeof(char));
        while(!feof(file_pointer))
        {
            symbol = getc(file_pointer);
            printf("%c", symbol);

            if (symbol == ' '
                || symbol == '\t'
                || symbol == '\n'
                || symbol == ';'
                || symbol == '('
                || symbol == ')')
            {
                if (word_size != 0)
                {
                    list = list_createNode(list, word);
                }
                free(word);
                word_size = 0;
                word = (char*) calloc(word_size, sizeof(char));
            }
            else
            {
                word_size++;
                word = (char*) realloc(word, word_size * sizeof(char));
                word[word_size - 1] = symbol;
            }

        }

        printf("\n= = = End file = = =\n");

        list_determinateType(list);

        struct hashtableNode** hashtable = (struct hashtable**) calloc(HASH_SIZE, sizeof(struct hashtable*));
        hashtable_init(hashtable);


        for (struct list* temp = list; temp != NULL; temp = temp->next)
        {
            if (temp->type == id)
            {
                hashtable_add(hashtable, temp->word);
            }
        }

        hashtable_print(hashtable);

        list_print(list);

        list = list_clean(list);
        //list_print(list);

        hashtable_clean(hashtable);
        //hashtable_print(hashtable);
   }
}
