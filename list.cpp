#include <iostream>
#include <list>


using namespace std;


bool Predicate1(int n){
	return n >= 3;
}

bool Predicate2(int first, int second){
	return second >= first;
}


int main(void){

	list<int> lt;


	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);
	lt.push_back(5);

	list<int>::iterator iter;
	for (iter= lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << ' ' ;
	cout << endl;

	iter = lt.begin();
	++iter;
	++iter;

	

	list<int>::iterator iter2;
	for (iter2 = lt.begin(); iter2 != lt.end(); ++iter2)
		cout << *iter2 << ' ';
	cout << endl;

	lt.push_back(10);
	lt.push_back(10);

	for (iter2 = lt.begin(); iter2 != lt.end(); ++iter2)
		cout << *iter2 << ' ';
	cout << endl;


	lt.remove(10);

	for (iter2 = lt.begin(); iter2 != lt.end(); ++iter2)
		cout << *iter2 << ' ';
	cout << endl;


	lt.remove_if(Predicate1);

	for (iter2 = lt.begin(); iter2 != lt.end(); ++iter2)
		cout << *iter2 << ' ';
	cout << endl;


	list<int> lt1;
	list<int> lt2;

	lt1.push_back(1);
	lt1.push_back(2);
	lt1.push_back(3);
	lt1.push_back(4);
	lt1.push_back(5);

	lt2.push_back(6);
	lt2.push_back(7);
	lt2.push_back(8);
	lt2.push_back(9);
	lt2.push_back(10);


	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;


	iter = lt1.begin();
	++iter;
	++iter;

	lt1.splice(iter, lt2);

	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;


	lt1.reverse();

	cout << "lt1 reverse : ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	lt2.push_back(1);
	lt2.push_back(2);
	lt2.push_back(3);
	lt2.push_back(3);
	lt2.push_back(3);
	lt2.push_back(4);
	lt2.push_back(5);


	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	lt2.unique();

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "sort";

	lt1.sort();
	cout << "lt1 reverse : ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;


	cout << "merge";

	lt1.merge(lt2);
	cout << "lt1 reverse : ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	return 0;
}