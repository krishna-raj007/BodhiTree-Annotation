#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,k;
cin>> n;
cin>> k;
int f0 = 0, f1 = 1, f2=0;
cout<< f0 <<"\n";
cout<< f1 <<"\n";
for(int i=2; i<=n-1; i++){
    f2 = f0+f1;
    cout<<(f2%k) << "\n";
    f0 = f1%k;
    f1 = f2%k;
    
    
}
	
	return 0;
}
