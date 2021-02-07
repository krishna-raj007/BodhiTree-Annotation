#include<simplecpp>

main_program{
int n,y,Output;
cin>>n>>y;
int i=0,j=1,k;
cout<<0<<endl<<1<<endl;
repeat(n-2){
k=j+i;
i=j;
j=k;
Output=k%y;
cout<<Output<<endl;
}
}
