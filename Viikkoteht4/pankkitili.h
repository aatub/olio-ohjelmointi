#ifndef PANKKITILI_H
#define PANKKITILI_H

class Pankkitili
{
protected:
    double saldo;
public:
    Pankkitili();
    virtual ~Pankkitili() {}
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    double getBalance() const;
};

#endif // PANKKITILI_H
