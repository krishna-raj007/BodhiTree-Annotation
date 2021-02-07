#include<simplecpp>
main_program{
long long int n,k;
cin>>n>>k;
if(n==1){cout<<"0";}
if(n==2){cout<<"0"<<endl<<"1";}
else if(n>2){cout<<"0"<<endl<<"1"<<endl;
long long int a=0, b=1, f;
repeat(n-2){f=a+b;
cout<<f%k<<endl; a=b%k;b=f%k;

}

}


}
