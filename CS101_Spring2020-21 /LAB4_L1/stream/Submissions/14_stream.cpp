#include<simplecpp>
main_program{
  long long int x, y, z;
  cin>>x>>y;
  z=max(x,y);
  while(true){
    long long int w;
    cin>>w;
    if(w==-1)break;
    else z=max(z,w);
  }
  cout<<z;
}
