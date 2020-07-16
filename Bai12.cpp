#include <iostream>

using namespace std;

int main(){
	
	int *a, n, sum;
	cin>> n;
	a = new int[n];

	sum = 0;
	for(int i = 0; i<n; i++){
		cin>>a[i];
		sum+= a[i];
	}
	
	cout<< sum;

	return 0;
}
