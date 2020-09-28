#include<simplecpp>

main_program{
int stmax,n=0;
stmax=-1;
do{
    cin>>n;
    stmax=max(n,stmax);
}
while(n!=-1);
cout<<stmax;
}
