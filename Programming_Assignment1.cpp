#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
   char name[100];
   int guess, num1, num2, max, lcm;
   srand(time(NULL));
   num1 = rand() % 100;
   num2 = rand() % 100;
   max = (num1 > num2) ? num1 : num2;

while(true)
{
   if(max % num1 == 0 && max % num2 ==0)
   {
      lcm = max;
      break;
   }
   else 
     ++max;
}

    cout <<"What is your name: ";
    cin >> name;
    cout <<"\nHello "<<name<<"! Welcome to the LCM Game.\n";
    cout <<"Can you tell me the LCM for "<<num1<<" and "<<num2<<"?\n";
    cout <<"Enter your answer: ";
    cin >> guess;


   if(guess > lcm || guess < lcm)
      cout <<"Incorrect. The correct answer is: "<<lcm;
   if(guess == lcm)
      cout <<"Correct.";


return 0;   
}