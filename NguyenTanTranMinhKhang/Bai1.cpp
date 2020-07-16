//De bai: Tính S(n) = 1 + 2 + 3 + … + n
#include <iostream>

using namespace std;

int main(){
	
	int n;
    
	cout<<"Nhap n: "; cin>>n; cout<<"\n";
	
    int S=n;

	for(int i = S-1; i > 0; i--){
        S+=i;
	}

	cout<<"S("<<n<<")= "<<S;

	return 0;
}