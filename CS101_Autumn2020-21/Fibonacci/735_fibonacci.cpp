#include<simplecpp>

main_program{
  int Fibno, modk;
  cin>>Fibno>>modk;
  int fibm=1, fibn=2, i=0, nxtfibm, nxtfibn, fib, fibk;
  cout<<0%modk<<1%modk<<endl<<1%modk<<endl<<2%modk<<endl;
  while(i<Fibno){  fibk = fib%modk;
                   fib = fibm + fibn;
                   nxtfibm=fibn; nxtfibn=fib;
                   fibm=nxtfibm; fibn=nxtfibn;
                   cout<<fibk<<endl; i=i+1;
       }

}
