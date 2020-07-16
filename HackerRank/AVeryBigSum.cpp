#include <iostream>

using namespace std;

int main(){
    
    unsigned long sum;
    int n;
    cin>>n;
    sum =0;
    for(int i = 0; i<n; i++){
        unsigned long temp;
        cin >> temp;
        sum += temp;
    }
    
    cout<< sum;
    return 0;
}