#include <iostream>
#include <string>

const char* my_cpp_journey_my_c_string(const std::string& str) {
    return str.c_str();
}

int main() {
    std::string str1 = "abc def ghi";
    const char* c_str1 = my_cpp_journey_my_c_string(str1);
    std::cout << c_str1 << std::endl;  // Outputs: abc def ghi

    std::string str2 = "hello";
    const char* c_str2 = my_cpp_journey_my_c_string(str2);
    std::cout << c_str2 << std::endl;  // Outputs: hello

    return 0;
}