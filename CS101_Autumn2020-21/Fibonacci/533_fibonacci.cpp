#include<simplecpp>
main_program{

int n,k ,i=2;
cin >> n >>k;
cout << 0%k << endl << 1%k << endl;
int arrk[100000];
arrk[0]=0;
arrk[1]=1;
while(i<=n-1){
arrk[i]=arrk[i-1]+arrk[i-2];
cout << arrk[i]%k << endl;
i=i+1;
}
}
