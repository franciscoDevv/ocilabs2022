#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    int t, rating;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> rating;
        if(rating <= 1399){
            cout << "Division 4\n";
        } else if(rating >= 1400 && rating <= 1599){
            cout << "Division 3\n";
        } else if(rating >= 1600 && rating <= 1899){
            cout << "Division 2\n";
        } else if(rating >= 1900){
            cout << "Division 1\n";
        }
    }
}
