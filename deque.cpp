#include <iostream>
#include <deque>

using namespace std;

int main(){

	deque<int> dq;
	
	dq.push_back(1);
	dq.push_back(2);
	dq.push_back(3);
	dq.push_back(4);
	dq.push_back(5);

	for (deque<int>::size_type i = 0; i < dq.size(); ++i){
		cout << dq[i] << ' ';
	}
	cout << endl;

	dq.push_back(100);
	dq.push_back(200);

	for (deque<int>::size_type i = 0; i < dq.size(); ++i){
		cout << dq[i] << ' ';
	}
	cout << endl;

	cout << endl;


	deque<int>::iterator iter;
	deque<int>::iterator iter2;


	for (iter = dq.begin(); iter != dq.end(); ++iter){
		cout << *iter << ' ';
	}
	cout << endl;


	iter = dq.begin() + 2;
	iter2 = dq.insert(iter, 500);
	cout << *iter2 << endl;


	for (iter = dq.begin(); iter != dq.end(); ++iter){
		cout << *iter << ' ';
	}
	cout << endl;


	return 0;
}