#include<simplecpp>

main_program{
//Write your code here

 unsigned long long int n1=0,n2=1,n3,i,number,k;
 cin>>number>>k;
 for(i=0;i<number;++i)
 {

        if(i == 0)
        {
            cout <<n1<<endl;
            continue;
        }
        if(i == 1)
        {
            cout << n2 <<endl;
            continue;
        }
  n3=(n1+n2)%k;
  cout<<n3<<endl;
  n1=n2;
  n2=n3;






 }}
