#include "catch.hpp"
#include <iostream>
// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

class Makaron {
public:
    virtual ~Makaron() = default;

    virtual double ileMaki(unsigned int P) const = 0;

    static Makaron* gotujMakaron(const std::string& s);
};

// Zad1
// tutaj definicja klasy Tagliatelle

class Tagliatelle : Makaron
{

    public:
    Tagliatelle(double l, double w, double r) : L(l), W(w), R(r) {}

    Tagliatelle(): L(0.5), W(0.5), R(0.5){}

    virtual double ileMaki(unsigned int P) const override 
    {
        return P * L * W * (1. - R) * C;
    }

    private:
    
    double L;
    double W;
    double R;
    static const double C;

};