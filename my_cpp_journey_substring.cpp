#include <iostream>
#include <string>




std::string my_cpp_journey_substring(const std::string& s1, int start, int length) {
    if (start < 0 || length < 0 || start + length > s1.length()) {
        return "";
    }
    return s1.substr(start, length);
}

int main() {
    try {
        std::string s1 = "hello";
        std::string result = my_cpp_journey_substring(s1, 1, 4);
        std::cout << "Result: " << result << std::endl;  // Output: "ello"

        s1 = "I don't like potatoes";
        result = my_cpp_journey_substring(s1, 0, 5);
        std::cout << "Result: " << result << std::endl;  // Output: "I don"

        s1 = "abcdefghijklmn";
        result = my_cpp_journey_substring(s1, 0, 10);
        std::cout << "Result: " << result << std::endl;  // Output: "abcdefghij"
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
