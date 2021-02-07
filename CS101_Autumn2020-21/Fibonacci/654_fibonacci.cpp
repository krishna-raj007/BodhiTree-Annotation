#include<simplecpp>

main_program{
int n, term1=0, term2=1, term3, x;
cin>>n>>x;
cout<<term1%x<<endl;
cout<<term2%x<<endl;
repeat(n-2){
term3=term1+term2;
cout<<term3%x<<endl;
term1=term2;
term2=term3;
}
}
