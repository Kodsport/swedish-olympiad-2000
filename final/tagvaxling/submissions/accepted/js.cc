#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> target(n);
	for(int i = 0; i < n; i++){
		cin >> target[i];
	}
	stack<int> track;
	stack<int> orig;
	for(int i = n; i >= 1; --i) orig.push(i);
	while(!target.empty()){
		if(!track.empty() && track.top() == target.front()){
			track.pop();
			target.erase(target.begin());
		} else if(!orig.empty()){
			track.push(orig.top());
			orig.pop();
		} else {
			cout << "NEJ" << endl;
			return 0;
		}
	}
	cout << "JA" << endl;
}
