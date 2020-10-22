#include<simplecpp>

main_program{
int q,count=0;
cin>>q;

repeat(q){
    count=0;
int a,v,w,x,y,z;
cin>>a;
v=a%2;
w=a%3;
x=a%5;
y=a%7;
z=a%11;
switch(v){
case 0 : count++;
};
switch(w){
case 0 : count++;
};
switch(x){
case 0 : count++;
};
switch(y){
case 0 : count++;
};
switch(z){
case 0 : count++;
};
cout<<count<<endl;

}
}
