#include<simplecpp>

main_program{

long long int n,k;
cin >> n >> k;
long long int i,j,h,t=1;
i=0; j=1; h=0;
cout << i%k << endl;
cout << j%k << endl;
for( ; t<=n-2; t++)
{
    h=i+j;
    i=j%k;
    j=h%k;
    cout << h%k << endl;


}

}
