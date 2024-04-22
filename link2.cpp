#include<iostream>
#include<list>
using namespace std;

void printlist(const list<int>&L){
	for(list<int>::const_iterator it = L.begin(); it != L.end();it++){
		cout<<*it<<"   ";
	}
	cout<<endl;
}

bool mycompare(int v1,int v2){
	return v1>v2;
}

void test1(){
	list<int> L1;
	L1.push_back(10);
	L1.push_back(23);
	L1.push_back(30);
	L1.push_back(58);
	L1.push_back(49);
	printlist(L1);

	list<int>L2(L1.begin(),L1.end());
	printlist(L2);

	list<int>L3(L2);
	printlist(L3);

	list<int>L4(4,29);
	printlist(L4);

	list<int>L5;
	L5 = L4;
	printlist(L5);
	
	swap(L2,L5);
	printlist(L5);
	cout<<L5.size()<<endl;

	list<int>::iterator it = L1.begin();
	cout<<*++it<<endl;

	L1.sort();
	printlist(L1);
	L1.sort(mycompare);
	printlist(L1);
}
template<class T>void test2(const T*arr,int len){	
	list<int>L1(arr,arr+len);
	printlist(L1);
}


int main(){
	test1();
	int arr[3] = {4,2,8};
	test2(arr,2);
}