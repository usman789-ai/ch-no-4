#include<iostream>
using namespace std;
int main(){
	unsigned int row = 1;
	while(row >= 1){
		unsigned int column = 1;
	while(column <= 10){
		cout<< (row % 2 ? "<" : ">");
		++column;
	}
	--row;
	cout<<endl;
}
}
