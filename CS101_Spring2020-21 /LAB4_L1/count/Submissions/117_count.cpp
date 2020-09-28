#include<simplecpp>

main_program{
   int a,b,num=0;
   cin>>a;
   for(int i=0;i<a;i++){
      cin>>b;
      num=0;
      switch(2)
          {

        case 2:
            if(b%2==0)
            {
                num++;
            }
        case 3:
            if(b%3==0)
            {
                num++;
            }
        case 5:
            if(b%5==0)
            {
                num++;
            }
        case 7:
            if(b%7==0)
            {
                num++;
            }
        case 11:
            if(b%11==0)
            {
                num++;
            }

          }
        cout<<num;
    }
}
