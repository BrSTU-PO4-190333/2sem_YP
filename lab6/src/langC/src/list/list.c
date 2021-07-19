#include "list.h"

void list_determinateType(struct list* node)
{
    for (struct list* temp = node; temp != NULL; temp = temp->next)
    {
        if (itIsIntConst(temp->word))
        {
            temp->type = intConst;
        }
        else if (itIsRealConst(temp->word))
        {
            temp->type = realConst;
        }
        else if (itIsEquals(temp->word))
        {
            temp->type = equals;
        }
        else if (itIsArifmetic(temp->word))
        {
            temp->type = arifmetic;
        }
        else if (itIsID(temp->word))
        {
            temp->type = id;
        }
        else
        {
            temp->type = err;
        }
    }
}

void list_print(struct list* node)
{
    printf("\n= = = List = = =\n");
    printf("| %-16s | %-16s |\n", "Lexeme", "Lexeme type");
    printf("| %-16s | %-16s |\n", "----------------", "----------------");
    for (struct list* temp = node; temp != NULL; temp = temp->next)
    {
        printf("| %-16s | ", temp->word);
        switch(temp->type)
        {
            case intConst:
                printf("%-16s", "int const");
                break;
            case realConst:
                printf("%-16s", "real const");
                break;
            case equals:
                printf("%-16s", "equals");
                break;
            case arifmetic:
                printf("%-16s", "arifmetic symbol");
                break;
            case id:
                printf("%-16s", "ID");
                break;
            case err:
                printf("%-16s", "err");
                break;
            default:
                printf("%-16s", "error");
                break;
        }
        printf(" |\n");
    }
    printf("= = = End list = = =\n");
}

struct list* list_createNode(struct list* node, char* word)
{
    struct list* newNode = (struct list*) malloc(sizeof(struct list));
    if (newNode == NULL)
    {
        return node;
    }
    else
    {
        newNode->next = node;
        newNode->word = (char*) calloc(strlen(word), sizeof(char));
        strcpy(newNode->word, word);
        return newNode;
    }
}

struct list* list_clean(struct list* node)
{
    while(node != NULL)
    {
        struct list* temp = node;
        node = node->next;
        free(temp->word);
        free(temp);
    }
    printf("\nlist cleared\n");
    return node;
}
