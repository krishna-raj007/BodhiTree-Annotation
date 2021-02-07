#include<simplecpp>

main_program{
int prevA,prevB=1,prevC=0,n,k;
cin >> n>>k;
cout << prevC%k << endl << prevB%k << endl;
for(int i =1;i<=n-2;i++)
{
prevA= prevB%k + prevC%k;
cout << prevA%k << endl;
prevC = prevB;
prevB = prevA;
}

}
