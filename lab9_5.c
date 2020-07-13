#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int value;
    struct node *next;
} node;


void printList(node *pList) {
    do {
        printf("%d ", pList->value);
        pList = pList->next;
    } while (pList);
    printf("\n");
}


void insertNode(node **pList, int value) {
    node *new = (node*) malloc(sizeof(node));
    new->value = value;
    new->next = NULL;
    if (*pList) {
        node *ptr = *pList;
        if (ptr->value > value) {
            new->next = ptr;
            *pList = new;
        }
        else {
            while (ptr->next) {
                if (ptr->next->value > value) {
                    new->next = ptr->next;
                    break;
                }
                ptr = ptr->next;
            }
            ptr->next = new;
        }
    }
    else {
        *pList = new;
    }
}

int main() {
  int i, value;
  node *pList=NULL;

  for (i = 0; i < 10; i++) {
    scanf(" %d", &value);
    insertNode(&pList, value);
  }
  printList(pList);
}