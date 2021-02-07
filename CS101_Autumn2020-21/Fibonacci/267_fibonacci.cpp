#include<simplecpp>

main_program{
//Fibonacci
long int k,n;

double X,Y,F = 0,w = 1;
cin>>n>>k;
cout<<F%k<<endl<<w%k<<endl;
for(int i=2;i<n;i++){X=F+w;
                      F=w;w=X;

                      Y=X%k;if(Y<0) break;cout<<Y<<endl;}
}
