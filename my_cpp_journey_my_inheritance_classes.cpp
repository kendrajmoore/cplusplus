#include <iostream>
#include <string>

class Mammal {
public:
    Mammal() : life_(10) {
        std::cout << "Constructor Mammal" << std::endl;
    }

    int getLife() const {
        return life_;
    }

protected:
    int life_;
};

class Human : public Mammal {
public:
    Human(const std::string& name) : name_(name) {
        life_ = 100;
        std::cout << "Constructor Human" << std::endl;
    }

    const std::string& getName() const {
        return name_;
    }

private:
    std::string name_;
};

int main() {
    Mammal mammal;
    Human human("John");

    std::cout << human.getName() << std::endl;
    std::cout << mammal.getLife() << std::endl;
    std::cout << human.getLife() << std::endl;

    return 0;
}
