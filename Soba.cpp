#include "Soba.hpp"
#include <iostream>

using namespace std;

Soba::Soba() {}
Soba::~Soba() {}

Soba::Soba(int slobodnaMjesta, int maxMjesta) {
  setSlobodnaMjesta(slobodnaMjesta);
  setMaxMjesta(maxMjesta);
};

void Soba::setSlobodnaMjesta(int slobodnaMjesta) {
  this->slobodnaMjesta = slobodnaMjesta;
}

void Soba::setMaxMjesta(int maxMjesta) { this->maxMjesta = maxMjesta; }

void Soba::print() {
  cout << "podatci o sobi " << endl;
  cout << "slobodna mjesta: " << slobodnaMjesta << endl;
  cout << "max mjesta: " << maxMjesta << endl;
}

void Soba::ulaz(Gosti *g1) {
  for (int i = 0; i < gost.size(); i++) {
    if (gost[i]->getOIB() == g1->getOIB()) {
      g1->print();
      throw VecUSobi("Gost je vec u sobi!");
    }
  }

  if (slobodnaMjesta > 0) {
    slobodnaMjesta--;
    gost.push_back(g1);
    g1->print();
    cout << "Gost je usao u sobu!" << endl;
    print();
  } else {
    throw popunjeni("Sobe su popunjene!");
  }
}

void Soba::izlaz(Gosti *g1) {
  for (int i = 0; i < gost.size(); i++) {
    if (gost[i]->getOIB() == g1->getOIB()) {
      g1->print();
      cout << "Gost je izasao iz sobe!" << endl;
      print();
      return;
    }
  }

  if (slobodnaMjesta > 0) {
    slobodnaMjesta--;
    gost.push_back(g1);
    g1->print();
    cout << "Gost je izasao iz sobe!" << endl;
    print();
  } else {
    throw VecIzasao("Gost je vec izasao!");
  }
}
