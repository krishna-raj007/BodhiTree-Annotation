#include<simplecpp>
main_program{
int A,B,C;
cin>>A;
while(1){
cin>>B;
if(B==-1)
break;
C=max(A,B);
A=C;
}
cout<<C;

}
