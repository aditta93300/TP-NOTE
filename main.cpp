#include <iostream>
#include <string>
#include "Inventaire.h"

using namespace std;

void afficherMenu() {
    cout << "GESTION D'INVENTAIRE" << endl;
    cout << "Ajouter un produit" << endl;
    cout << "Afficher le stock" << endl;
    cout << "Quitter" << endl;
    cout << "Choix : ";
}

int main() {
    Inventaire monStock;
    int choix = 0;

    while (choix != 3) {
        afficherMenu();
        cin >> choix;

        if (choix == 1) {
            int id, qte;
            string nom;
            double prix;

            cout << "ID : "; cin >> id;
            cout << "Nom : "; cin.ignore(); getline(cin, nom);
            cout << "Quantite : "; cin >> qte;
            cout << "Prix : "; cin >> prix;

            monStock.ajouterProduit(id, nom, qte, prix);
            cout << "Produit ajoute avec succes !" << endl;
        } 
        else if (choix == 2) {
            monStock.afficherInventaire();
        }
    }

    cout << "Fin du programme." << endl;
    return 0;
}