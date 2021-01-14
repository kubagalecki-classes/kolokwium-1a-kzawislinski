#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle
{
  public:
  Tagliatelle(const double& l, const double& w, const double& r): L(l), W(w), R(r){}
  
  Tagliatelle(): L(0.5), W(0.5), R(0.5){}

  double ileMaki(const unsigned int P)
  {
    return P*L*W*(1.-R)*C;
  }

  private:

  double L;
  double W;
  double R;
  const double C;
};
