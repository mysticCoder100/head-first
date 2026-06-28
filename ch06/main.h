typedef struct island {
  char *name;
  char *opens;
  char *closes;
  struct island *next;
} island;

void printList(char *list[], int size);

void perform();

void store();

island *create(char *name);

void release(island *start);