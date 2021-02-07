#include<simplecpp>
main_program{
long int n, f0 = 0, f1 = 1, fi=0,k,i;
cin >>n>>k;
if(n>=1 && k>1 && n<= pow(10,5) && k<= pow(10,5)  ){
for ( i = 1; i <= n; ++i)
{
if(i == 1)
{cout <<f0%k<<endl;
continue;}

if(i == 2){
cout <<f1%k<<endl;
continue;}

fi= f0+f1;
f0 = f1;
f1 = fi;
cout << fi%k<<endl;
}
}
}



