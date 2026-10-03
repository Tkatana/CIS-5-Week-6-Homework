// Homework 6 — Your Name
// CIS 5 Week 06 · Menu

#include <iostream>
#include <string>



int main() {

int u = 0;

do

{



std::cout << "Hello! Input a number to choose a menu option.\n   1. Say Hello!\n   2. Countdown\n   3. Exit\n ";
std::cin >> u;

if (u == 1) 

{
std:: cout << "Hi! :3\n";  
}

else if (u == 2)

{
for(
int t = 10; 
t >= 0; 
t = t - 1)

{
std::cout << t << "\n";
}

}

else if (u == 3) 


std::cout << "I'm programmed to say:\nthe menu is closed.\n ";


}

while


(u > 3);

{

{
std::cout << "the menu is closed... \n SEE YA! >:p)";
}

}





  
return 0;
}
