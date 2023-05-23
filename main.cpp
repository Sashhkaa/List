#include "list.h"

int main() {
    struct Head head = {};
    struct List list = {};
    list_ctor(&list, 5);
    struct List* list_1 = list_push(&list, 10);
    struct List* list_2 = list_push(list_1, 9);
    list_dump(&list);
    list_dtor(&list);
    return 0;

}