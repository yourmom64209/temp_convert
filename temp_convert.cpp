// cpp standard library, need for anything with "std::" before it :)
#include <iostream>
#include <string>

int main() {

  // declares the doubles (basically int but instead of for example "10" it'd be
  // "10.0"
  double Far;
  double Cel;
  std::string what;

  std::cout << "Fahrenheit to Celsius (Far), or Celsius to Fahrenheit (Cel)?\n";
  std::cin >> what;

  if (what == "Far") {

    // outputs the text in quotes, the \n makes  new line appear after
    std::cout << "Enter the temperature (in Fahrenheit):\n";

    // std::cin reads user input and stores it in the double Far (fahrenheit),
    // then converts it to Celsius and stores it in the othe double, Cel
    // (celsius)
    std::cin >> Far;
    Cel = (Far - 32) * 5 / 9;

    // outputs the data stored in Cel, and makes a new line
    std::cout << Cel << "\n";
  }
  if (what == "Cel") {
    // outputs the text in quotes, the \n makes  new line appear after
    std::cout << "Enter the temperature (in Celsius):\n";

    // std::cin reads user input and stores it in the double Cel (Celsius), then
    // converts it to Fahrenheit and stores it in the othe double, Far
    // (Farenheit)
    std::cin >> Cel;
    Far = (Cel * 9 / 5) + 32;

    // outputs the data stored in Cel, and makes a new line
    std::cout << Far << "\n";
  }
}

