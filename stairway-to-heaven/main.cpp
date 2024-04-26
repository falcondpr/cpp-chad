#include <iostream>
#include <string>

int sumNumbers(int value1, int value2) {
  int sum = value1 + value2;
  return sum;
}

int addNumbers(int first_param, int second_param) {
  int result = first_param + second_param;
  return result;
}

int main() {
  /*
    std::cout << "Fernando" << std::endl;
    std::cout << "Villalba" << std::endl;
  */
  
  // std::cout << "Fernando" << std::endl;
  // std::cout << "Villalba" << std::endl;

  // std:: cout << "Number1";
  // std:: cout << "Number2";

  // Errors & Warnings
  // compile time error, missing the comma
  // std::cout << "Hello world" << std::endl;
  int value = 7/6;
  // std::cout << "Value: " << value <<std::endl;

  // Basic statements
  int firstNumber = 12;
  int secondNumber = 9;

  int result = sumNumbers(firstNumber, secondNumber);
  // std::cout << "The sum is: " << result << std::endl;

  // Functions
  int first_number {3}; // Statement
  int second_number {7};

  int sum = first_number + second_number;
  // std::cout << "First value is: " << sum << std::endl;

  // std::cout << "First value is: " << first_number << std::endl;
  // std::cout << "Second value is: " << second_number << std::endl;

  sum = addNumbers(25, 7);
  // std::cout << "Sum value is: " << sum << std::endl;

  sum = addNumbers(50, 43);
  // std::cout << "Sum value is: " << sum << std::endl;

  // std::cout << "Sum value is: " << addNumbers(42, 1) << std::endl;

  // Input and Output
  // std::cout -> Printing data to the console (terminal)
  // std::cin -> Reading data from the terminal
  // std::cerr -> Printing errors to the console
  // std::clog -> Priting log messages to the console

  std::cout << "Hello world" << std::endl;
  int age{24};
  // std::cout << "My years old is: " << age << std::endl;

  // std::cerr << "Error message : Something went wrong" << std::endl;
  // std::clog << "Log messages : Something happend" << std::endl;

  // int age1;
  // std::string name;

  std::cout << "Please type your name and age: " << std::endl;
  // std::cin >> name;
  // std::cin >> age;

  // std::cin >> name >> age;

  /* Data with spaces */
  std::string full_name;
  int age3;

  std::getline(std::cin, full_name);
  std::cin >> age3;

  std::cout << "The name is " 
            << full_name 
            << " and her has " 
            << age << " years old" << std::endl;

  return 0;
}