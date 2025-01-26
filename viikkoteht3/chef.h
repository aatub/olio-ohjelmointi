#ifndef CHEF_H
#define CHEF_H
#include <string>

using namespace std;

class Chef {
private:
    std::string chefName;

public:
    Chef(const std::string& name);
    ~Chef();

    int makeSalad(int stuff);
    int makeSoup(int stuff);
};

#endif // CHEF_H
