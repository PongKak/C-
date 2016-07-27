#include <iostream>
#include <vector>

using namespace std;


int main(){

	/*
	vector <int> v;

	v.reserve(5);

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << endl;

	cout << endl;

	cout << "size  : " << v.size() << "	capacity :  " << v.capacity() << endl;


	v.resize(10,-1);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << endl;

	cout << endl;

	cout << "size  : " << v.size() << "	capacity :  " << v.capacity() << endl;


	v.resize(3);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << endl;

	cout << endl;

	cout << "size  : " << v.size() << "	capacity :  " << v.capacity() << endl;

	v.resize(10);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << endl;

	cout << endl;

	cout << "size  : " << v.size() << "	capacity :  " << v.capacity() << endl;

	v.clear();
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << endl;

	cout << endl;

	cout << "size  : " << v.size() << "	capacity :  " << v.capacity() << endl;
	*/



	vector <int> v2(5);

	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
		cout << v2[i] << endl;

//	cout << "size  : " << v2.size() << "	capacity :  " << v2.capacity() << endl;
	v2.push_back(1);
//	cout << "size  : " << v2.size() << "	capacity :  " << v2.capacity() << endl;
	v2.push_back(2);
//	cout << "size  : " << v2.size() << "	capacity :  " << v2.capacity() << endl;
	v2.push_back(3);
//	cout << "size  : " << v2.size() << "	capacity :  " << v2.capacity() << endl;
	v2.push_back(4);
	v2.push_back(5);
	cout << "size  : " << v2.size() << "	capacity :  " << v2.capacity() << endl;



//	v2.push_back(6);
//	cout << "size  : " << v2.size() << "	capacity :  " << v2.capacity() << endl;

	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
		cout << v2[i] << endl;

	cout << endl;
	
	cout << v2[5] << endl;
	cout << v2.at(5) << endl;
	v2.pop_back();
	cout << "size  : " << v2.size() << "	capacity :  " << v2.capacity() << endl;


//	cout << v2.at(13) << endl;

}