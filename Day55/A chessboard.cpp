/*
Platform :- Hackerearth 
Problem :- A Chessboard
Hint :- Brute Force
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;

		int d=abs(x2-x1);
		d=max(d,abs(y2-y1));
		 if(d==0){
			 cout<<"SECOND"<<endl;
		 }
		else if(d==1) {
		   cout<<"FIRST"<<endl;
		}
		else cout<<"DRAW"<<endl;
	}
}
