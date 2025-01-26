#include<iostream>
using namespace std;

int main()
{
   float a,b;
   cout << "Enter the value of a : ";
   cin >> a;
   cout << "Enter the value of b : ";
   cin >> b;

   char operation ;
   cout << "Enter the operation you want to perform : ";
   cin >> operation;

   //using switch case 
   
   switch (operation)
   {
   case '+' : cout <<"Addition is : "<< (a+b) <<endl;
              break;
   
   case '-' : cout <<"Subtraction is : "<< (a-b) <<endl;
              break;

   case '*' : cout << "Multiplication is : "<< (a*b) <<endl;
              break;

   case '/' : cout << "Divison is : "<< (a/b) <<endl;
              break;
   
   default:   cout << "Please enter a valid operation "<<endl;
              break;
   }
   
}