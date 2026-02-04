#include "Produit.h"

Produit::Produit(int id, std::string nom, int qte, double p) 
    : id(id), nom(nom), quantite(qte), prix(p) {}

int Produit::getId() const { return id; }
std::string Produit::getNom() const { return nom; }
int Produit::getQuantite() const { return quantite; }
double Produit::getPrix() const { return prix; }

void Produit::setQuantite(int qte) {
    this->quantite = qte;
}