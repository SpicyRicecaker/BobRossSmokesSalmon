#include <iostream>
#include "list.h"

using namespace std;

void removeHead(node* &head){
  if(head == NULL){
    return;
  }else if(head->next == NULL){
    delete head;
    head == NULL;
  }else{
    node* next = head->next;
    head->next = NULL;
    delete head;
    head = next;
  }
}
