#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

typedef struct Node {
    void * data;
    struct Node * next;
    struct Node * prev;
} Node;

typedef struct List {
    Node * head;
    Node * tail;
    Node * current;
    int size;
} List;

typedef List List;

Node * createNode(void * data) {
    Node * new = (Node *)malloc(sizeof(Node));
    assert(new != NULL);
    new->data = data;
    new->prev = NULL;
    new->next = NULL;
    return new;
}

List * createList() {
  List* lista = (List*) malloc(sizeof(List));
  lista -> head = NULL;
  lista -> tail = NULL;
  lista -> current = NULL; 
  lista -> size = 0;
  return lista;
}

void * firstList(List * lista) {
  if (!lista->head) return NULL;
  lista->current = lista->head;
  return (lista->current->data);
}

void * nextList(List * lista) {
  if (!lista->head) return NULL;
  Nodo* next = lista->current
  return (next);
}

void * lastList(List * list) {
  if (!list->head) return NULL;
  list->current = list->tail;
  return (list->current->data);
}

void * prevList(List * list) {
    return NULL;
}

void pushFront(List * list, void * data) {
}

void pushBack(List * list, void * data) {
    list->current = list->tail;
    pushCurrent(list,data);
}

void pushCurrent(List * list, void * data) {
}

void * popFront(List * list) {
    list->current = list->head;
    return popCurrent(list);
}

void * popBack(List * list) {
    list->current = list->tail;
    return popCurrent(list);
}

void * popCurrent(List * list) {
    return NULL;
}

void cleanList(List * list) {
    while (list->head != NULL) {
        popFront(list);
    }
}
