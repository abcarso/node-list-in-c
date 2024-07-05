#include "functions.h"


void printBorder(FILE* out)
{
    int i = 0;
    for(i = 0; i < 80; i++)
        fprintf(out,"*");
    
    fprintf(out, "\n");
}

void add(node_t **node, node_t **head)
{
    node_t* current = head;

    if (*head == NULL)
    {
        *head == *node;
    }
    else
    {
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = *node;
    }
}

node_t* readNodeInfo(FILE* input)
{
    char str[50];
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    scanf(input, "%s[^,]s", str);
    newNode->first = str;
    scanf(input, "%s[^,]s", str);
    newNode->last = str;
    scanf(input, "%s[^,]s", str);
    newNode->major = str;
    scanf(input, "%s[^,]s", str);
    newNode->standing = str;
    return newNode;
}

node_t* createList(FILE* input, node_t** head)
{
    while(input != eof())
    {
        node_t* newNode = readNodeInfo(input);
        void add(&newNode, head);
    }
    return *head
}

void printList(FILE* out, node_t* head)
{ 
    node_t* current = head;
    while (current->next != NULL)
    {
        fprintf(out, "%s", current->first);
        fprintf(out, "%s", current->last);
        fprintf(out, "%s", current->major);
        fprintf(out, "%s", current->standing);
        fprintf(out, "%s", current->birthday->month);
        fprintf(out, "%i", current->birthday->day);
        fprintf(out, "%i", current->birthday->year);
        current = current->next;
    }
    
}

void deleteList(node_t** head)
{   
    node_t* currentNode = &head;
    node_t* nextNode = currentNode->next;

    while (nextNode != NULL)
    {
        free(currentNode);
        currentNode = nextNode;
        nextNode = currentNode->next;
    }
}