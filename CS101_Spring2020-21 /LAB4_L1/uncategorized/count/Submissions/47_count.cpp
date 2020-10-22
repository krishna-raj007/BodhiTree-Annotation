#include<simplecpp>

main_program{
        int Q,a,i=0;
        cin>>Q;
        repeat(Q){
            cin>>a;
            i=0;
            if(a%2==0){i++;}
            if(a%3==0){i++;}
            if(a%5==0){i++;}
            if(a%7==0){i++;}
            if(a%11==0){i++;}

            switch (i)
        {
            case 1: cout<<"1\n";break;
            case 2: cout<<"2\n";break;
            case 3: cout<<"3\n";break;
            case 4: cout<<"4\n";break;
            case 5: cout<<"5\n";break;
            default: cout<<"0\n";
            }}
            return 0;
        }
