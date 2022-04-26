#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
	int N, M, count=0;
	cin >> N;
	vector<string>pairs;
	string p;
	for(int i = 0; i < N; i++){
		cin >> M;
		for(int j = 0; j < M; j++){
			cin >> p;
			pairs.push_back(p);
		}
		sort(pairs.begin(), pairs.end());
		for(int a = 0; a < pairs.size()-1; a++){
		    if(pairs[a][0] != pairs[a+1][0] || pairs[a+1][0] != pairs[a+1][1] 
		    	|| pairs[a-1][0] != pairs[a][0] || pairs[a-1][1] != pairs[a][1]) count++;
	    }
    	cout << count << "\n";
	}


}