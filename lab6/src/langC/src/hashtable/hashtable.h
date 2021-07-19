#ifndef _HASHTABLE_H_
    #define _HASHTABLE_H_

    #define HASH_MUL 31
    #define HASH_SIZE 128

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    struct hashtableNode
    {
        struct hashtableNode* next;
        char* word;
    };

    unsigned int hashtable_generateHash(char* str);
    void hashtable_init(struct hashtableNode** arr);
    void hashtable_add(struct hashtableNode** arr, char* str);
    void hashtable_print(struct hashtableNode** arr);
    void hashtable_clean(struct hashtableNode** arr);
#endif
