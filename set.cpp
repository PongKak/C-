#include <iostream>
#include <set>
#include <functional>

using namespace std;

int main(void){

	set<int> s;

	pair<set<int>::iterator, bool> pr;

	pr = s.insert(5);
	s.insert(4);
	s.insert(3);

	if (pr.second == true){
		cout << *pr.first << " ���� ���� " << endl;
	}
	else{
		cout << *pr.first << " ���� ����" << endl;
	}

	set<int>::iterator iter;

	for (iter = s.begin(); iter != s.end(); ++iter){
		cout << *iter << ' ';
	}
	cout << endl;

	pr = s.insert(5);
	if (pr.second == true){
		cout << *pr.first << " ���� ���� " << endl;
	}
	else{
		cout << *pr.first << " ���� ����" << endl;
	}
	for (iter = s.begin(); iter != s.end(); ++iter){
		cout << *iter << ' ';
	}
	cout << endl;


	s.insert(pr.first, 6);
	for (iter = s.begin(); iter != s.end(); ++iter){
		cout << *iter << ' ';
	}


}