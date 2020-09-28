#include<simplecpp>

main_program{
 int q,t;
 cin>>q;

 for(int i=0; i<q ; i++)
 {   int j=0;
     cin>>t;
     if (t%2==0) j++;
     if (t%3==0) j++;
     if (t%5==0) j++;
     if (t%7==0) j++;
     if (t%11==0) j++;
     cout<<j<<endl;

 }
}
