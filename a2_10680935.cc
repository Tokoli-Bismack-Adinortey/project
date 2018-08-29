              
                 #include <iostream>
                 #include <cmath>
                 using namespace std;
                 int main()
               {
                 int n,i;
                 bool c=true;
                 cout<<" Please enter a number( an integer ):\n ";
                 cin>>n;

                 switch(n)
               {
                 case 0:
                 cout << "Not a prime number";
                case 1:
                cout << "Not a prime number";
                  break;

             }

              for(i=2;i<n;i++)
            {
                 if(n%i==0)
            {
                 c=false;
  
               }
             }
                   if(c)
              {
           cout << " Prime number";
             }
                else{
                cout << "Not a prime number";
               }


               return 0;
             }

