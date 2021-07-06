#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(void) {
  cout << "Test Linked List" << endl;

  ListData_T myData = {"String Data", 0};
  LinkedList myList;

  for(int i = 0; i < 5; i++) {
    myData.num = i + 1;//Start from 1

    int listSize = myList.Add(myData);
    myList.PrintList();
  }
  
  return 0;
}
