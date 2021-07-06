#include "LinkedList.h"

LinkedList::LinkedList() {
  listStart = NULL;
  size = 0;
}

int LinkedList::Add(ListData_T newData) {
  ListNode_T *newNode = new ListNode_T();
  newNode->data = newData;
  newNode->nextPtr = NULL;

  cout << "  New node created - Add: " << newNode << endl;
  //cout << "    name: " << newNode->data.name << endl;
  //cout << "    num : " << newNode->data.num << endl;
  //cout << "    nextPtr: " << newNode->nextPtr << endl;
   
  if(listStart == NULL) {
      listStart = newNode;
  }
  else {
    ListNode_T *currPtr = listStart;
    while(currPtr->nextPtr != NULL) {
      currPtr = currPtr->nextPtr;
    }
    currPtr->nextPtr = newNode;
  }

  size++;
  cout << "  size: " << size << endl;
  return size;
}


void LinkedList::PrintList(void) {
  ListNode_T *currPtr = listStart;
  cout << endl;
  
  if(size == 0) {
    cout << "Empty List[]" << endl;
    return;
  }
  else {
    int i = 1;
 
     cout << "    List Start: " << listStart << endl;
     while(i <= size) {
      cout << "    " << i << ":  " << currPtr << "  :  " <<  currPtr->nextPtr;
      cout << "   name: " << currPtr->data.name << "   num: " << currPtr->data.num << endl;

      currPtr = currPtr->nextPtr;
      i++;
    }
  }
  cout << "    List size: " << size << endl;
  cout << "=================================" << endl;
}

