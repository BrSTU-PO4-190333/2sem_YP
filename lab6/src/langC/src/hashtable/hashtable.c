#include "hashtable.h"

unsigned int hashtable_generateHash(char* str)
{
    unsigned int hash = 0;

    for (char* pointer = str; *pointer != '\0'; pointer++)
    {
        hash *= HASH_MUL;
        hash += (unsigned int) *pointer;
    }

    return hash % HASH_SIZE;
}

void hashtable_init(struct hashtableNode** arr)
{
    for (int i = 0; i < HASH_SIZE - 1; i++)
    {
        arr[i] = NULL;
    }
}

void hashtable_add(struct hashtableNode** arr, char* word)
{
    int index = hashtable_generateHash(word);

    int hitCounter = 0;
    for (struct hashtableNode* temp = arr[index]; temp != NULL; temp = temp->next)
    {
        if (strcmp(temp->word, word) == 0)
        {
            hitCounter++;
        }
    } //end cycle for: reading from a list

    if (hitCounter == 0)
    {
        struct hashtableNode* newNode = (struct hashtableNode*) malloc(sizeof(struct hashtableNode*));

        if (newNode != NULL)
        {
            newNode->word = (char*) calloc(strlen(word), sizeof(char));
            strcpy(newNode->word, word);

            newNode->next = arr[index];
            arr[index] = newNode;
        } //end if: cheking newNode for NULL
    }// end if: cheking hitCounter is 0?
}

void hashtable_print(struct hashtableNode** arr)
{
    printf("\n= = = Hashtable = = =\n");
    printf("| %6s | %s\n", "arr[i]", "List");
    printf("| %6s | %s\n", "------", "----");
    for (int i = 0; i < HASH_SIZE; i++)
    {
        if (arr[i] != NULL)
        {
            printf("| %6d | ", i);
            for (struct hashtableNode* temp = arr[i]; temp != NULL; temp = temp->next)
            {
                printf("%s -> ", temp->word);
            }
            printf("NULL\n");
        }
    }
    printf("= = = End hashtable = = =\n");
}

void hashtable_clean(struct hashtableNode** arr)
{
    for (int i = 0; i < HASH_SIZE; i++)
    {
        for(struct hashtableNode* temp = arr[i]; temp != NULL; temp = arr[i])
        {
            arr[i] = arr[i]->next;
            free(temp->word);
            free(temp);
        }
    }
    printf("\nHash table cleared\n");
}
