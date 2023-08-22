#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

class Jouet {
    private:
        string name;
        int price;
        string description;
        int promo;

    public:
        Jouet(string x, int y, string d, int p) {
            name = x;
            price = y;
            description = d;
            promo = p;
        };

        string getName() {
            return name;
        };

        int getPrice() {
            return price;
        }

        string getDescription() {
            return description;
        }

        int getPromo() {
            return promo;
        }
};

/* Comparer deux classes en ordre croissant */

class Compare {
    public:
        bool operator()(Jouet jouet1, Jouet jouet2) {   

            if(jouet1.getPrice() == jouet2.getPrice()) {
                return jouet1.getName() < jouet2.getName();
            }

            return jouet1.getPrice() < jouet2.getPrice();
        }
};

int main() {

    list<Jouet> jouet;
    int i = 1;

    jouet.push_back(Jouet("Bakugan", 30, "Jeu de combat", 5));
    jouet.push_back(Jouet("Pokemon", 10, "Jeu de carte", 6));
    jouet.push_back(Jouet("Gokemon", 10, "Jeu de carte", 6));
    jouet.push_back(Jouet("Loup Garou", 20, "Jeu de role", 5));
    jouet.push_back(Jouet("Aoop Garou", 20, "Jeu de role", 5));
    jouet.push_back(Jouet("Poop Garou", 20, "Jeu de role", 5));
    jouet.push_back(Jouet("Astroboy", 50, "Robot pour apprendre a coder", 8));
    jouet.push_back(Jouet("Zebre Peluche", 14, "Jeu de role", 3));
    jouet.push_back(Jouet("Araignee Peluche", 9, "Peluche d'araignee", 4));
    jouet.push_back(Jouet("Lego Star Wars", 120, "Super legobox de Star Wars", 2));

    Compare comparator;
    jouet.sort(comparator);

    cout << "-------TRI EN COURS-------" << endl;

    for(Jouet j: jouet) {
        cout << "Jouet numero " << i++ << " : " << j.getName() << ", " << j.getPrice() << " euros, " << j.getDescription() << ", " << j.getPromo() << " % de reduction" << endl;
    };

    return 0;
}