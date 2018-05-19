#include <iostream>
#include <vector>
#include <queue>
#include <stdlib.h>
using namespace std;

int main(){
	int n;
	int b;
	
	while(cin >> n){
		
		if (n==0) break;
		
		cin >> b;
		
		bool answer[n+1];
		vector<int> balls;
		
		for(int i = 0 ;i<n+1;i++){
			answer[i] = false;
		}
		
		for(int i = 0;i<b;i++){
			int aux;
			cin >> aux;
			balls.push_back(aux);
		}
		
		for(int i = 0;i<balls.size();i++){
			for(int j = i;j<balls.size();j++){
				int res = abs(balls[i]-balls[j]);
				answer[res] = true;
			}
		}
		
		
		bool cond = false;
		for(int i = 0;i<n+1;i++){
			if(!answer[i]){
				cond = true;
				break;
			} 
		}
		
		if(!cond){
			cout << "Y\n";
		}	
		else{
			cout << "N\n";
		}	
	}
}
