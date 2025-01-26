#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>

using namespace std;

class ItalianChef : public Chef {
private:
    std::string password = "pizza";
    int makePizza(int flour, int water);

public:
    ItalianChef(const std::string& name);
    bool askSecret(const std::string& inputPassword, int flour, int water);
};

#endif // ITALIANCHEF_H
