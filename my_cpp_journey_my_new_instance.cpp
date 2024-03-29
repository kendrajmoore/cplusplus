#include <iostream>
#include <string>

class Plastic {
public:
    Plastic(const std::string& name) : name_(name) {
        std::cout << "New plastic: " << name_ << std::endl;
    }

    ~Plastic() {
        std::cout << "Recycling plastic: " << name_ << std::endl;
    }

private:
    std::string name_;
};

Plastic* create_plastic(const std::string& plastic_name) {
    return new Plastic(plastic_name);
}

int main() {
    Plastic* pet = create_plastic("Polyethylene Terephthalate");
    Plastic* pvc = create_plastic("Polyvinyl Chloride");
    Plastic* ps = create_plastic("Polystyrene");

    delete pvc;
    delete ps;
    delete pet;

    return 0;
}
