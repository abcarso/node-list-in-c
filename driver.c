/*************************
 *Alaina Carson
 *CPSC 2310 Spring 23
 *CPSC 2311 Section 005
 *Instructor: Dr. Yvon Feaster
 *UserName: abcarso
 *************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "functions.h",

int main(int argc, char* argv[])
{
    //assert correct command line args
    assert(argc == 2);
    //open files
    FILE* input = fopen(argv[0],"r");
    fopen(argv[1],"w");
    //assert file opened
    assert(input != NULL);
    
    //create and fill list
    node_t* head;
    head = createList(input, &head);
    
    //print list
    printList(argv[1], head);

    //free memory
    deleteList(&head);
    
    return 0;
}
