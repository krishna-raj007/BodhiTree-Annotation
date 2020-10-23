#include<simplecpp>

main_program{
float x,l,m ;
cin>>x;
cin>>l>>m;
float maximum{l+m};
if(x>2){
repeat(x-2){
cin>>l;
if(l+m>maximum){
    maximum=l+m;
}
l=m;
}
}
cout<<maximum;
}



