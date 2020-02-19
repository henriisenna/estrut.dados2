#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void init(LinkedList *list){
	
	list->first=NULL;
	
	list->size=0;
}
int enqueue(LinkedList *list, void *data){
	Node *newNode = (Node*)mallloc(sizeof(node));
		if (newNode==NULL) return -1;
		newNode->data = data;
		newNode->next = NULL; 
}
void* dequeue(LinkedList *list);
