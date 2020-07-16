#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

struct node  
{ 
    string file;
    int filesize;
    struct node* parent;
    struct node* leftChild;
    struct node* rightSibling;
};

struct node* createRoot(string file, int filesize){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->file = file;
    node->filesize = filesize;

    node->parent = NULL;
    node->leftChild = NULL;
    node->rightSibling = NULL;
    return(node);
}
  
struct node* createNode(string file, int filesize, struct node* parent){ 
  struct node* node = (struct node*)malloc(sizeof(struct node));

  node->filesize = filesize;
  node->parent = parent;
  
  node->leftChild = NULL;
  node->rightSibling = NULL;

  if(node->parent != NULL) {
        if(node->parent->leftChild != NULL) {
            struct node* child = node->parent->leftChild;
            while(child->rightSibling != NULL) {
                child = child->rightSibling;
            }
            child->rightSibling = node;
        }
        else {
            node->parent->leftChild = node;
        }
    }
 return(node);
}

struct node* getParent(struct node* node){
    return node->parent;
}

struct node* getChild(struct node* node, int k){
    struct node* child = node->leftChild;
    for(int i=1; i<k; i++) {
        child = child->rightSibling;
    }
    return child;
}

int getSize(struct node* node){
  if (node->leftChild != NULL){
    if (node->rightSibling != NULL){
      return node->filesize + getSize(node->leftChild) + getSize(node->rightSibling);
    }
    else{
      return node->filesize + getSize(node->leftChild);
    }
  }
  else{
    if (node->rightSibling != NULL){
      return node->filesize + getSize(node->rightSibling);
    }
    else{
      return node->filesize;
    }
  }

}
  
int main() { 
  /*create root*/
  struct node* root = createRoot("/user/rt/courses", 1);
  /*create folder and file*/
  struct node* folderCS1 = createNode("cs016/", 2, root);
  struct node* fileGrade = createNode("grades", 8, folderCS1);
  struct node* folderHW = createNode("homeworks/", 1, folderCS1);
  struct node* fileHW1 = createNode("hw1", 3, folderHW);
  struct node* fileHW2 = createNode("hw2", 2, folderHW);
  struct node* fileHW3 = createNode("hw3", 4, folderHW);
  struct node* folderProgram = createNode("programs/", 1, folderCS1);
  struct node* filePR1 = createNode("pr1", 57, folderProgram);
  struct node* filePR2 = createNode("pr2", 97, folderProgram);
  struct node* filePR3 = createNode("pr3", 74, folderProgram);

  struct node* folderCS2 = createNode("cs252/", 1, root);
  struct node* folderProject = createNode("projects/", 1, folderCS2);
  struct node* fileGrade2 = createNode("grades", 3, folderCS2);
  struct node* folderPaper = createNode("papers/", 1, folderProject);
  struct node* fileBuy = createNode("buylow", 26, folderPaper);
  struct node* fileSell = createNode("sellhigh", 55, folderPaper);
  struct node* folderDemo = createNode("demos/", 1, folderProject);
  struct node* fileMarket = createNode("market", 4786, folderDemo);

  /*check filesize*/
  /*int filesizeRoot = 0;
  filesizeRoot += getSize(root);
  filesizeRoot += getSize(getChild(root, 1)) + getSize(getChild(folderCS1, 1))
                + getSize(getChild(folderCS1, 2)) + getSize(getChild(folderCS1, 3))
                + getSize(getChild(folderHW, 1)) + getSize(getChild(folderHW, 2))
                + getSize(getChild(folderHW, 3)) + getSize(getChild(folderProgram, 1))
                + getSize(getChild(folderProgram, 2)) + getSize(getChild(folderProgram, 3));
  filesizeRoot += getSize(getChild(root,2)) + getSize(getChild(folderCS2, 1))
                + getSize(getChild(folderCS2, 2)) + getSize(getChild(folderProject, 1))
                + getSize(getChild(folderProject, 2)) + getSize(getChild(folderPaper, 1))
                + getSize(getChild(folderPaper, 2)) + getSize(getChild(folderDemo, 1));
  cout << filesizeRoot << "K";*/
  cout << getSize(root);

  return 0;
}