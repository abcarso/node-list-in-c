#ifndef FUNCTIONS_H
#define FUNCTIONS_H


//add birthday struct here
typedef struct Birthday
{
    int day;
    int year;
    char month[50];
}birthday_t;

//add node_t struct here (this struct will represent a node in the
//linked list)

typedef struct Node
{
    node_t* next = NULL;
    birthday_t birthday;
    char first[50];
    char last[50];
    char major[50];
    char standing[50];
}node_t;

//implement these:
void add(node_t **node, node_t **head);
node_t* readNodeInfo(FILE* input);
node_t* createList(FILE*, node_t**);
void printList(FILE*, node_t*);
void printBorder(FILE*);
void deleteList(node_t** );

#endif