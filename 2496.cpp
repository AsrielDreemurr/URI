#include <iostream>
#include <vector>
using namespace std;

int main(){
	int cases;
	
	cin >> cases;
	
	while(cases--){
		int size;
		
		cin >> size;
		
		vector<char> comp;
		vector<char> input;
		
		for(int i = 0;i<size;i++){
			comp.push_back('A'+i);
			char aux;
			cin >> aux;
			input.push_back(aux);
		}
		
		int count = 0;
		for(int i = 0;i<size;i++){
			if(input[i]!=comp[i])
			count++;
		}
		
		
		if (count!=2){
			cout << "There aren't the chance.\n";
		}
		else
			cout << "There are the chance.\n";
	}
}
