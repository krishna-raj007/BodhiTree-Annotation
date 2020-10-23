#include<simplecpp>

main_program{
long long int n,i=2;
long long int f0=0, f1=1,f2=1;
cin>>n;
if(n==0){
        cout<<0<<endl;
}
else if(n==1){
    cout<<1<<endl;
}
else{
while(f2<n){

f0=f1;
f1=f2;
f2=f1+f0;
i++;
}
if(f2==n){
    cout<<i<<endl;
}
else{
    cout<<-1<<endl;
}
}
}
