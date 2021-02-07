//#include<simplecpp>

main_program{
int q;
cin>>q;
repeat(q){
int m, b=0 , c=0, d=0, e=0, f=0, k;
cin>>m;
if(m%2==0)b=1;
if(m%3==0)c=1;
if(m%5==0)d=1;
if(m%7==0)e=1;
if(m%11==0)f=1;
k=b+c+d+e+f;
cout<<k<<endl;


}

}
