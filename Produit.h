#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>

class Produit {
private:
    int id;
    std::string nom;
    int quantite;
    double prix;

public:
    Produit(int id, std::string nom, int qte, double p);
    
    int getId() const;
    std::string getNom() const;
    int getQuantite() const;
    double getPrix() const;
    void setQuantite(int qte);
};

#endif
