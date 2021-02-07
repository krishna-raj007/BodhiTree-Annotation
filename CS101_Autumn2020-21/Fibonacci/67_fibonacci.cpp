#include<simplecpp>

main_program{
long int n,k,i=0,j=1,term;
cin>>n>>k;
cout<<"0"<<endl;
cout<<"1"<<endl;
repeat(n-2){
term=(i+j)%k;
cout<<term<<endl;
i=j%k;
j=term%k;

}

}
