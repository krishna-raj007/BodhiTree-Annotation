#include<simplecpp>
main_program{
int numn=0,numn1=1,numn2=0,n,k;
cin >> n;
n=n-1;
cin >> k;
cout << numn2 << endl << numn1 << endl ;
for(n;n>1;n--){
    numn=numn1+numn2;
    if(numn%k<0)break;
    cout << numn%k << endl;
    numn2=numn1;
    numn1=numn;
    }
}
