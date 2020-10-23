#include<simplecpp>
main_program{
long int n,a,b,c,d,e,i;
cin>>n;
a=0;
b=1;
i=1;
c =0;
while(c<n){
i++;
c= a+b;
a =b;
b =c;

}
if (c==1) cout << 1;
else if(c==n) cout<<i;
else cout <<"-1";



}
