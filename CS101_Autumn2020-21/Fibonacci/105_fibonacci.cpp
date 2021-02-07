#include<simplecpp>

main_program{
//Write your code here
long int x,k,a1 ,a2, term;
cin >> x>> k;
if ( (x>=1 && x<=100000) && (k>=1 && k<=100000))
{a1=0; a2=1;
cout<<a1%k<<endl;
cout<<a2%k<<endl;
int i=3;
repeat(x-2){
{term=(a1+a2)%k;
a1=a2;
a2=term;
cout<<term%k<<endl;
i=i+1;
}
}
}
}
