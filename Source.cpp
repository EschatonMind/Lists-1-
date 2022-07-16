#include <iostream>
#include <list>
using namespace std;

int main() {
	//-------------------------------- initializing the list
	list<int> List;
	List.push_back(5);
	List.push_back(1);
	List.push_back(2);
	List.push_back(3);
	//-------------------------------- starting the " eraseit " pointer
	list<int>::iterator eraseit = List.begin();
	//-------------------------------- starting the " it " pointer
	list<int>::iterator it = List.begin();
	//-------------------------------- testing erase and insert functions
	while (true) {
		eraseit++;
		it++;

		if (*eraseit % 2 == 0) {
			List.erase(eraseit);
			break;
		}
		else {
			List.insert(it, 0);
		}
		
	}
	//--------------------------------  printing the list
	for (list<int>::iterator it = List.begin(); it != List.end(); it++) {

		cout << " | " << *it << " | ";
	}
	return 0;
}