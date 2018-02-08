//Author:
#include<iostream>

using namespace std;

int main()
{
int letter;

  cout<<"What character do you want to know about?\n";
std::cin >> letter;

if (letter <= 'Z' && letter >= 'A')

  //when user's entry is between A-Z...
 {cout<<" is an upper case letter!\n";}

else if (letter >= 'a' && letter <= 'z')

//when user's entry is between a-z...
 {cout<<" is a lower case letter!\n";}

else if (letter < 'A' || letter > 'z')
  //in all other cases...
 {cout<<"?! Pssh. What are you talking about?\n";}
  
  
  //no matter what they enter...
  cout<<"The ASCII value is: ";

  return 0;                    
}
