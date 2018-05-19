#include <iostream>
#include <vector>
using namespace std;

int main(){
	while(true){
		int cases;
		
		cin >> cases;
		
		if(cases==0) break;
		
		
		
		for(int i=0;i<cases;i++){
			
			vector<bool> answers;
				for(int j=0;j<5;j++){
					int aux;
					cin >> aux;
			
					if(aux>127){
						answers.push_back(false);
					}
					else{
						answers.push_back(true);
					}
			    }
			       
			    
			bool flag = false;
			bool ans = false;
			int num;
			for(int j=0;j<5;j++){
				if(answers[j]&&ans) {flag = true;}
				if(answers[j]) {ans = true; num=j;}
			}
			
			
			
			if(flag||!ans){
				cout << "*\n";
			}
			else{
				switch(num){
					case 0: cout << "A\n"; break;
					case 1: cout << "B\n"; break;
					case 2: cout << "C\n"; break;
					case 3: cout << "D\n"; break;
					case 4: cout << "E\n"; break;
				}
			}
		}
	}
}
