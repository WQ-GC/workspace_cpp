#include <string>
#include <iostream>
using namespace std;

struct ListData_T {
  string name;
  int num;
};

struct ListNode_T {
  ListNode_T *nextPtr;
  ListData_T data;
};

class LinkedList{
  public:
    LinkedList();
    int Add(ListData_T newData);
    void PrintList(void);
  private:
    ListNode_T *listStart;
    int size;
};

