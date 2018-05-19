#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	while(true){
		
		string aux;
		
		getline(cin,aux);
		
		
		cout << "\n";
	
		for(int i= 0;i<aux.length();i++){
			cout << aux[i];
		}
	}
}
