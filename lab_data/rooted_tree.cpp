#include <iostream>
#include <string>
using namespace std;
struct node  
{
    string key;
    struct node* parent;
    struct node* leftChild;
    struct node* rightSibling;
}; 
  
struct node* createNode(string key, struct node* parent)
{ 
  // Allocate memory for new node  
  struct node* node = (struct node*)malloc(sizeof(struct node)); 
  
  // Assign key to this node 
  node->key = key; 
  
  // Initialize parent
  node->parent = parent;
  // Initialize left child, and right sibling as NULL
  node->leftChild = NULL;
  node->rightSibling = NULL;
  // For create a node
  if(node->parent != NULL) {
        if(node->parent->leftChild != NULL) {
            struct node* child = node->parent->leftChild;
            while(child->rightSibling != NULL) {
                child = child->rightSibling;
            }
            child->rightSibling = node;
        }
    }
  return(node); 
} 
  
  
int main() 
{ 
  /*create root*/
  struct node *Electronic = createNode("Electronics R' Us", NULL);

  struct node *RD = createNode("R&D", Electronic);
  struct node *sale = createNode("Sales", Electronic);
  struct node *purchase = createNode("Purchasing", Electronic);
  struct node *manufactur = createNode("Manufacturing", Electronic);
  /*          Electronics R'Us
          /     /     \        \
      R&D   Sales  Purchasing  Manufacturing
  */

  struct node *domestic = createNode("Domestic", sale);
  struct node *inter = createNode("International", sale);
  struct node *tv = createNode("TV", manufactur);
  struct node *cd = createNode("CD", manufactur);
  struct node *tune = createNode("Tuner", manufactur);
  /*          Electronics R'Us
          /     /     \        \
      R&D   Sales  Purchasing  Manufacturing
            /   \                 /   |   \
    Domestic  International     TV   CD   Tuner
  */

  struct node *canada = createNode("Canada", inter);
  struct node *america = createNode("S.America", inter);
  struct node *oversea = createNode("Overseas", inter);
  /*          Electronics R'Us
          /     /     \        \
      R&D   Sales  Purchasing  Manufacturing
            /   \                 /   |   \
    Domestic  International     TV   CD   Tuner
              /     |     \
        Canada S.America  Overseas
  */

  struct node *africa = createNode("Africa", oversea);
  struct node *europe = createNode("Europe", oversea);
  struct node *asia = createNode("Asia", oversea);
  struct node *austra = createNode("Australia", oversea);
  /*          Electronics R'Us
          /     /     \        \
      R&D   Sales  Purchasing  Manufacturing
            /   \                 /   |   \
    Domestic  International     TV   CD   Tuner
              /     |      \
        Canada S.America     Overseas
                          /  /    \   \
                    Africa Europe Asia Australia
  */
  
  return 0; 
}