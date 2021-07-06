#include <iostream>
#include <vector>
using namespace std;


void PrintList(vector<int> inList);

int main(void) {
  cout << "Test STL Vector and Vector Iterator" << endl;

  vector<int> v_list;
  vector<int>::iterator it;

  cout << "Insert to end" << endl;
  it = v_list.begin();
  for(int i = 0; i < 10; i++) {
    it = v_list.insert(it , i);
    cout << "  Insert to v_list: " << i << "      :";
    PrintList(v_list);
    it++;
  }

  cout <<"===============================" << endl;
  cout << "Remove from front" << endl;
  while(v_list.size() != 0) {
    it = v_list.begin();
    cout << "  Remove from v_list: " << *it << "    :";
    PrintList(v_list);
    v_list.erase(it);
  }
  return 0;
}

void PrintList(vector<int> inList) {
  vector<int>::iterator it;

  cout << "v_list: [";
  it = inList.begin();
  for(it = inList.begin(); it != inList.end(); it++) {
    cout << *it << "  ";
  }
  cout << "]" << endl;
}