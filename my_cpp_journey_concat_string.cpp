#include <iostream>
#include <string>


std::string my_cpp_journey_concat_string(const std::string& s1, const std::string& s2) {
    return s1 + s2;
}


int main() {
    std::string s1 = "CPP";
    std::string s2 = " is awesome";
    std::string result = my_cpp_journey_concat_string(s1, s2);
    std::cout << "Result: " << result << std::endl;

    s1 = "";
    s2 = "";
    result = my_cpp_journey_concat_string(s1, s2);
    std::cout << "Result: " << result << std::endl;

    s1 = "hello";
    s2 = " everyone!";
    result = my_cpp_journey_concat_string(s1, s2);
    std::cout << "Result: " << result << std::endl;

    return 0;
}