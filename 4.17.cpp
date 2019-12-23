#include<iostream>
#include<string>
using namespace std;
main(){
	
	int counter = 1;
	int units,najam;
	int  max= 0;
	while (counter <=10){
		cout<<"Please Enter unites for saleman # "<<counter<<" ";
		cin>> units;
		if(max< units){
		
			max = units;
			najam = counter;
		}
		else if( najam)
		counter++;
	}
	cout <<"The maximum Units Selled are "<< max;
    cout <<"The maximum Units Selled by salesman # "<< najam<<"\n";
}
