#include<simplecpp>
main_program{
int a,b,i,j;
cin>>a>>b;
i=1;
j=1;
repeat(a){
    j=j*i;
    i++;
    j=j%b;
    }
    cout<<j<<endl;
}


