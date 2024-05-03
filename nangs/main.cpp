#include <iostream>

int main() {
  // Numbers
  // int number_1 = 15; // decimal
  // int number_2 = 017; // octal
  // int number_3 = 0x0f; // hexadecimal
  // int number_4 = 0b00001111; // binary

  // std::cout << number_1 << std::endl;
  // std::cout << number_2 << std::endl;
  // std::cout << number_3 << std::endl;
  // std::cout << number_4 << std::endl;

  // Integer types
  // braced initializers
  // variable may contain random garbage value . WARNING
  int elephant_count {1};

  int lion_count{}; // initializes to zero
  int dog_count {10}; // initializes to 10
  int cat_count {15}; // initializes to 15

  // can use expression as initializer
  int domesticated_animals { dog_count + cat_count };

  // not exist the value initializer
  // int new_number {doesnt_exist};

  // error
  // int narrowing_conversion {20.9} compiler error;

  // std::cout << "elephant_count " << elephant_count << std::endl;
  // std::cout << "lion_count " << lion_count << std::endl;
  // std::cout << "dog_count " << dog_count << std::endl;
  // std::cout << "cat_count " << cat_count << std::endl;
  // std::cout << "domesticated_animals " << domesticated_animals << std::endl;

  // Functional Initialization
  int apple_count (5);
  int orange_count (10);
  int fruit_count (apple_count + orange_count);

  // int bad_initialization (doesnt_exist2 + doesnt_exist4);

  // Information lost. less safe than braced initializers
  int narrowing_conversion_functional (2.9);

  // std::cout << "apple_count " << apple_count << std::endl;
  // std::cout << "orange_count " << orange_count << std::endl;
  // std::cout << "fruit_count " << fruit_count << std::endl;
  // std::cout << "narrowing_conversion_functional " << narrowing_conversion_functional << std::endl;

  // Assignment notation
  int bike_count = 2;
  int truck_count = 7;
  int vehicle_count = bike_count + truck_count;
  int narrowing_conversion_assignment = 2.9;

  // std::cout << "bike_count " << bike_count << std::endl;
  // std::cout << "truck_count " << truck_count << std::endl;
  // std::cout << "vehicle_count " << vehicle_count << std::endl;
  // std::cout << "narrowing_conversion_assignment " << narrowing_conversion_assignment << std::endl;

  // check the size with sizeof
  // std::cout << "sizeof int " << sizeof(int) << " bytes" << std::endl;
  // std::cout << "sizeof truck_count " << sizeof(truck_count) << " bytes" << std::endl;

  // Integers modifieres
  // Unsigned int 4 bytes
  // Signed int 4 bytes

  /*
    signed int is data type for integers that can store positive, negative, or zero values
    unsigned int is data type for integers that can only store non-negative values (positive or zero)
  */

  signed int value_1 {10};
  signed int value_2 {-300};

  // std::cout << "value 1 " << value_1 << std::endl;
  // std::cout << "value 2 " << value_2 << std::endl;

  // std::cout << "sizeof(value_1) " << sizeof(value_1) << " bytes" << std::endl;
  // std::cout << "sizeof(value_2) " << sizeof(value_2) << " bytes" << std::endl;

  unsigned int value_3 {4};
  unsigned int value_4 {0};

  std::cout << "value 3 " << value_3 << std::endl;
  std::cout << "value 4 " << value_4 << std::endl;

  return 0;
}