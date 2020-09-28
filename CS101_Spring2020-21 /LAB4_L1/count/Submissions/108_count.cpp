#include<simplecpp>

main_program{
int q,n,num,i=0;
cin>>q;
repeat(q)
{ num=0;
  cin>>n;
  i=0;
 repeat(5){ i++;
 switch(i)
  {
    case 1:
    {if(n%2==0)
    {num++;}
    break;}
    case 2:
    {if(n%3==0)
    {num++;};
    break;}
    case 3:
    {if(n%5==0)
    {num++;}
    break;}
    case 4:
    {if(n%7==0)
    {num++;}
    break;}
    case 5:
    {if(n%11==0)
    {num++;}
    break;}
  }
 }
 cout<<num<<"\n";
}

}
