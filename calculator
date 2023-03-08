
#include <iostream>
#include <math.h> 
#define RESET "\x1B[0m"
#define BOLD "\x1B[1m" 
using namespace std;
int main()
{
      printf("\n%sThis program was written by Diaa%s\n",BOLD,RESET);
      printf("\n%sMini calculator%s\n",BOLD,RESET);
   
   
      
    int num1,num2,result,i,factorial ; 
     float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
     char  op , x='y' ;


    while (x =='y')
    
     {

   cout<<"\nenter your operation (/,*,-,+,R,! ) :  ";
   cin>> op;

      if (op == '+')            //sumation 
        {
          cout << "Enter num 1 = ";
    cin >> num1 ;
   cout << "Enter num 2 = ";
    cin >> num2 ;
      result=num1+num2;
        cout<<num1<< " + " << num2 <<" = " <<result;    }
   
   else if (op =='/')           //division process
   {
     cout << "Enter num1=  ";
    cin >> num1 ;
   cout << "Enter num2=  ";
    cin >> num2 ;
             result=num1/num2;
        cout<<num1<< "/" << num2 <<"=" <<result;    }
  
   else if (op=='*')            //multiplication
   {
     cout << "Enter num1=  ";
    cin >> num1 ;
   cout << "Enter num2=  ";
    cin >> num2 ;
   result=num1*num2;
        cout<<num1<< "*" << num2 <<"=" <<result;      }
  
   else if (op=='-')           //subtraction 
   {
     cout << "Enter num1=  ";
    cin >> num1 ;
   cout << "Enter num2=  ";
    cin >> num2 ;
   result=num1-num2;
        cout<<num1<< "-" << num2 <<"=" <<result;     }
  
   
        else if (op=='R')       //roots of quadratic equation 
        {
          cout << "Enter coefficients a: ";
    cin >> a ;

       cout << "Enter coefficients b: ";
    cin >> b ;

    cout << "Enter coefficients c: ";
    cin >> c ;

    discriminant = b*b - 4*a*c;  // tells us about tupe of roots
    
    if (discriminant > 0) 
    {
        x1 = (-b +( sqrt(discriminant))) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0)
     {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else 
    {
        realPart = -b/(2*a);
        imaginaryPart =(sqrt(-discriminant))/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

        }
        else if (op=='!')
        {
           cout << "Enter num1=  ";
           cin>> num1 ;
           for (i=1;i<=num1;++i)
           {

             factorial *= i ;
           }
             cout << "The factorial is: " << factorial ;

        }

        else cout<<"entered wrong input";

cout<<"\ndo yo want to rebit y or f \n";
cin >> x ;
}
return 0;
}


