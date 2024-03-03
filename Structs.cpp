#include <iostream>

using namespace std;

int main(){
	struct Character{
		int edad;
		int tel;
	}Santiago;
	Santiago.edad = 20;
	Santiago.tel = 31654575476;
	cout << Santiago.edad << endl;
	cin.get(); //Exti program
	return 0;
}
