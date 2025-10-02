#import <iostream>
using namespace std;
class Carta {
protected: // <-- Aqui você usa!
    string nome;
    int custoMana;
    int vida;
    int attck;
    int defense;

public:

    virtual void mostrarInfo(string nome, string custoMana) {
        cout << "Carta: " << nome << ", Custo de Mana: " << custoMana << :endl;
    }
};
