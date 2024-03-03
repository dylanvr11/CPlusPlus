#include <iostream>

using namespace std;

int main(){
	
	struct Home{
		int addresNumber;
		int phoneNumber;
		Home(){
			addresNumber = 0;
			phoneNumber = 2;
		}
		int seeAddres(){
			return addresNumber;
		}
		int saveAddres(int a){
			addresNumber = a;
		}
	} Fernandez, Gonzalez, Perez;
	
	
	Fernandez.addresNumber = 1034;
	Fernandez.phoneNumber = 434543545;
	
	Gonzalez = Fernandez;
	cout<<Gonzalez.phoneNumber<<endl;
	cout<<Fernandez.phoneNumber<<endl;
	cout<<Perez.phoneNumber<<endl;
	
	Perez.saveAddres(6768);
	cout<<Perez.seeAddres()<<endl;
	
	
	cin.get();
	return 0;
}
