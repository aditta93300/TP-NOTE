#ifndef INVENTAIRE_H
#define INVENTAIRE_H
using namespace std;

#include "Produit.h"

class Inventaire {
private:
    static const int MAX_PRODUITS = 100;
    Produit* catalogue[MAX_PRODUITS];    
    int nbProduits;                      

public:
    Inventaire();
    ~Inventaire();
    
    void ajouterProduit(int id, std::string nom, int qte, double prix);
    void afficherInventaire() const;
};

#endif