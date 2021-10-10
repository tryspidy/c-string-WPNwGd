#include <string>
#include <iostream>
#include <type_traits>
#include <cstring>

int main() {
  std::string str = "Hello, there";
  std::cout << std::boolalpha
  << str.capacity() << ", " << str.size() << ", " << std::strlen(str.data()) // 12, 12, 12
  << '\n' << std::is_same_v<std::string, std::basic_string<char>> // true
  << '\n' << str.front() + str.substr(1, 10) + str.back() // Hello there
  << '\n' << str[0] // H
  << '\n';
  
  str += "!"; 
  std::cout << str << '\n'; // Hello, there!
  str.erase(4, 4); // Hellhere!
  str.pop_back(); // Hellhere
  str.insert(4, " "); // Hell here
  std::cout << str << '\n'; // Hell here
  
}