#include<simplecpp>

main_program{
 long int x,y,k;
 cin>>y>>x;
  int p=0,q=1,r;
  for(k=0;k<y;k++){
    cout<<p%x<<endl;
    r=p+q;
    p=q;
    q=r;
}


}
