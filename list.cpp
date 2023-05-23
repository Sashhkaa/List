#include <malloc.h>
#include <stdio.h>
#include "list.h"
#include <assert.h>

void list_ctor(struct List* list, int data) {
    list->value = data;
    list->next  = nullptr;
}

struct List* list_push(struct List* pointer, int value) {   //pointer = предыдущий элемент
    struct List* new_pointer = (struct List*)calloc(1, sizeof(struct List)); 
    pointer->next = new_pointer; 
    new_pointer->value = value;
    new_pointer->next = nullptr; // last one
    return new_pointer; 

}

void list_dump(struct List* list) {
    struct List* current_pointer = list;
    while(current_pointer != nullptr) {
        printf("elem_ttt = %d\n", current_pointer->value);
        current_pointer = current_pointer->next;
    }
}

void delete_elem(struct List*  root, struct List* list) { // list удаляемый элемент 
    struct List* tmp = list->next; 
    free(list);
    root->next = tmp;
}

void list_dtor(struct List* list) { // list - first 
    struct List* tmp = nullptr;

    while(list != nullptr) {
        printf("hey");
        tmp = list->next; 
        free(list);
        list = tmp;
    }
}

