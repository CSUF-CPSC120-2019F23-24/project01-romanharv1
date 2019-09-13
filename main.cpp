// Name:Business Trip Tracker
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
  //Introducing variables
  double meal, hotel, total;
  int days;
  std::string location;

  //Program names itself
  std::cout << "Welcome to the Business Trip Tracker!\n";
  std::cout << std::endl; //blank line
  //Obtaining location variable definition
  std::cout << "What is the business trip location? ";
  std::cin >> location;
  //Obtaining days variable definition
  std::cout << "How many days will the trip take? ";
  std::cin >> days;
  //Obtaining hotel variable definition
  std::cout << "What is the total hotel expense? $";
  std::cin >> hotel;
  //Obtaining meal variable definition
  std::cout << "What is the total meal expense? $";
  std::cin >> meal;

  //Defining total variable
  total = hotel + meal;

  //Formatting and presenting information
  std::cout << std::setw(8) << "Location"
    << std::setw(8) << "Days"
    << std::setw(12) << "Hotel"
    << std::setw(11) << "Meal"
    << std::setw(12) << "Total" << std::endl;

  std::cout << std::setw(8) << location
    << std::setw(8) << days
    << std::setw(6) << "$" << hotel
    << std::setw(5) << " $" << meal
    << std::setw(6) << "$" << total << std::endl;

  return 0;
}
