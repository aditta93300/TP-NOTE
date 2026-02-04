#include "Inventaire.h"
#include <iostream>

Inventaire::Inventaire() : nbProduits(0) {}

Inventaire::~Inventaire() {
    for(int i = 0; i < nbProduits; i++) {
        delete catalogue[i];
    }
}

void Inventaire::sauvegarderEnBase(int id, std::string nom, int qte, double prix) {
    
    std::cout << "[Système] Simulation SQL : INSERT INTO produits VALUES (" 
              << id << ", '" << nom << "', " << qte << ", " << prix << ");" << std::endl;
}

void Inventaire::ajouterProduit(int id, std::string nom, int qte, double prix) {
    if (nbProduits < MAX_PRODUITS) {
        catalogue[nbProduits] = new Produit(id, nom, qte, prix);
        nbProduits++;
        
        sauvegarderEnBase(id, nom, qte, prix);
    } else {
        std::cout << "Inventaire plein !" << std::endl;
    }
}

