
#include <iostream>
#include <string>

size_t my_cpp_journey_find_in_string(const std::string& str, char c) {
    size_t pos = str.find(c);
    return pos;
}

int main() {
    std::string str = "abc def ghi";
    char c = 'h';
    size_t pos = my_cpp_journey_find_in_string(str, c);
    std::cout << pos << std::endl;  // Outputs: 9
    return 0;
}