#include<simplecpp>

main_program{
                float q,n,a,b,s,t;
                cin>>q;

                s=0;




                repeat(q){  s=0;
                            cin>>n;
                            repeat(n){   cin>>a>>b;
                                         s=s+((a-b)*(a-b));
                                                            }

                            a=sqrt(s);
                            printf("%.2f\n",a);      }

                            }


