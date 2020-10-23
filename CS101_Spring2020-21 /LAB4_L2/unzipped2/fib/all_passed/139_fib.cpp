#include<simplecpp>

main_program{
int n,i=0,a=1,b=1,j=2,s,flag=0;
cin>>n;
if(n==0){
cout<<0;
}else if(n==1){
cout<<1;
}else{

repeat(9999999){

s=a+b;
b=a;a=s;
j++;

if(s==n){
cout<<j;
flag=1;
break;
}
}
if(flag==0){
    cout<<"-1";
}

}


}
