#include<simplecpp>

main_program{
int n, k , k1=0 , k2=1, nextterm=0;
cin>> n>> k;
 for (int i=1 ; i<=n ; ++i){

 if(i==1){
 cout<< k1%k<< endl ;
      continue ;}
      if(i==2)
      {
      cout<<k2%k<<endl;
      continue;}
      nextterm = (k1 + k2)%k;
      k1=k2;
      k2= nextterm ;
      cout<< nextterm<<endl;


 }


}
