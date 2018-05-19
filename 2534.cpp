#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int main(){
	int people;
	int queries;
	
	while(cin >> people){
		cin >> queries;
		
		queue<int> q;
		vector<int> scores;
		
		for(int i=0;i<people;i++){
			int aux;
			cin >> aux;
			scores.push_back(aux);
		}
		
		for(int i = 0;i<queries;i++){
			int aux;
			cin >> aux;
			q.push(aux);
		}
		
		sort(scores.rbegin(),scores.rend());
			
		while(!q.empty()){
			cout << scores[q.front()-1] << "\n";
			q.pop();
		}
	}
}
