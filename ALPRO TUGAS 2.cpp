#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a[3][3];
	int j,k;
	
	for(int j=0; j<3; j++){
		for(int k=0; k<3; k++){
			cin>>a[j][k];
		}
		
	}
	for(j=0; j<3; j++){
		for(k=0; k<3; k++){
			cout<<setw(4)<<a[j][k];
			if(a[j][k]==6||a[j][k]==4){
				cout<<endl;
			}
		}
	}
}
