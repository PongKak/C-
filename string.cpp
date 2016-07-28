#include <iostream>
#include <string>

using namespace std;

int main(void){

	string str = "String";

	cout << str << endl;
	
	str.push_back('p');

	cout << str << endl;
	
	for (int i = 0; i < str.size() ; ++i){
		cout << str[i] << endl;
	}
	
	str.pop_back();
	cout << str << endl;

	
	string::iterator iter;

	for (iter = str.begin(); iter != str.end(); ++iter){
		cout << *iter << ' ';
	}
	cout << endl;


	str.reserve(96); // string의 메모리 할당은 처음 15바이트를 기본으로 하고 그 이후 16바이트 단위로 올려서 할당된다.

	cout << "size : " << str.size() << "	" << " capacity : " << str.capacity() << endl;


	const char * s1;

	s1 = str.c_str();

	cout << s1 << endl;


	string str2("every");
	string str3("dayabcd", 3);

	cout << str2 << '	' << str3 << endl;

	string str4;
	str4 = str2 + str3;

	string str5 = str2.insert(3, str3);

	cout << str4 << endl;
	cout << str5 << endl;

	str5.erase(3);
	cout << str5 << endl;

	int index = str4.find("e", 0);

	cout << index << endl;



}