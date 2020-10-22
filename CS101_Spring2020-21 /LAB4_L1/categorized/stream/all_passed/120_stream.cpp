#include<simplecpp>

main_program{
int n,i=0;
cin>>n;
while(n!=-1){
    i=max(i,n);
    cin>>n;

}

cout<<i;
}
