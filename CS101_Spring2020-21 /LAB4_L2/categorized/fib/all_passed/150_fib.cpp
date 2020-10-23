#include<simplecpp>
main_program{
int f0,f1,f2,i;
long int f_i,n;
f0=0;
f1=1;
f2=1;
cin>>n;
i=3;
if(n==0){


    cout<<"0";
    return 0;
    }

repeat(10000){
f_i=f2+f1;


if(f_i==n){
cout<<i;
break;}
else{

 f1=f2;
 f2=f_i;
i++;
}

}
if(f_i!=n)
    cout<<"-1";

}
