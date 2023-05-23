
struct Head {
  int size = 0;
  struct List* first_elem = nullptr;  
};

struct List {
    int value = 0;
    struct List* next = nullptr; 
};

void list_ctor(struct List* list, int data);
struct List* list_push(struct List* pointer, int value);
void list_dump(struct List* list);
void delete_elem(struct List*  root, struct List* list);
void distruct(struct List* list);
void list_dtor(struct List* list);
