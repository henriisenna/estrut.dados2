#include <stdio.h>
#include <stdlib.h>
#include "DoubleLinkedList.h"

voide init(DoublyLinkedList *list){
	Node *trashNode = (Node*)malloc(sizeof(Node));
	trashNode->data=NULL;
	trashNode->previous=trashNode;
	trashNode->next=trashNode;
	list->first=trashNode;
	list->size=0;
	
}
int enequeue(DoublyLinkedList *list, void *data){
	Node *newNode = (Node*)malloc(sizeof(Node));	
	if (newNode)
}





















void showMen(DounlyLinkedList *list){
	printf("Trash Node: %p\n\n", list->first);
	node *aux = list->first->next;
	printf("Node Addr  : Previous    - Data        - Next\n\n");
	while (aux!=list->first){
		printf("%p: %p - %p - %p\n",aux, aux->previous, aux->data, aux->nest);
		aux=aux->next
	}
}
void show(DoublyLinkedList *list, printNode print){
	Node *aux = list->first->next;
	while (aux!=list->first) {
		print(aux->data);
		aux=aux->next;
	}
}
