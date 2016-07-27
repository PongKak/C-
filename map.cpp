#include <iostream>
#include <map>
#include <functional>
#include <string>

using namespace std;

int main(void){

	map<int, string, greater<int>> m;

	m[5] = "five";
	m[3] = "three";
	m[8] = "eight";
	m[4] = "four";
	m[1] = "one";
	m[7] = "seven";
	m[9] = "nine";


	map<int, string, greater<int>>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter){
		cout << "(" << iter->first << ',' << iter->second << ")";
	}
	cout << endl;


	iter = m.find(5);
	if (iter != m.end()){
		cout << "key 5ÀÇ value : " << iter->second << endl;
	}



}