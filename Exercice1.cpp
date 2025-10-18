
#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    string titulaire;
    double solde;

public:
    void definirTitulaire(string nom);
    void depot(double montant);
    void retrait(double montant);
    void afficher();
};

void CompteBancaire::definirTitulaire(string nom) {
    titulaire = nom;
    solde = 0.0;
}

void CompteBancaire::depot(double montant) {
    solde += montant;
    cout << "Solde après dépôt : " << solde << endl;
}

void CompteBancaire::retrait(double montant) {
    if (montant <= solde) {
        solde -= montant;
        cout << "Solde après retrait : " << solde << endl;
    } else {
        cout << "Solde insuffisant pour le retrait !" << endl;
    }
}

void CompteBancaire::afficher() {
    cout << "Titulaire : " << titulaire << endl;
    cout << "Solde actuel : " << solde << endl;
}

int main() {
    CompteBancaire compte1;

    compte1.definirTitulaire("Mohamed Lachgar");
    compte1.depot(500.0);
    compte1.retrait(200.0);
    compte1.afficher();

    return 0;
}
