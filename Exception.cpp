#include "Exception.hpp"

Iznimka::Iznimka(string greska) { this->greska = greska; }
string Iznimka::getGreska() { return greska; }

popunjeni::popunjeni(string greska) : Iznimka(greska) {}

VecIzasao::VecIzasao(string greska) : Iznimka(greska) {}

VecUSobi::VecUSobi(string greska) : Iznimka(greska) {}
