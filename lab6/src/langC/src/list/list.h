#ifndef _LIST_H_
    #define _LIST_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #include "../analyzer/analyzer.h"

    enum type
    {
        keyword,
        id,
        equals,
        arifmetic,
        intConst,
        realConst,
        err
    };

    struct list
    {
        struct list* next;
        char* word;
        int type;
    };

    void list_determinateType(struct list* node);
    void list_print(struct list* node);
    struct list* list_createNode(struct list* node, char* word);
    struct list* list_clean(struct list* node);
#endif
