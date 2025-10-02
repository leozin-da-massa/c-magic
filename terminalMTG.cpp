#include <iostream>
#include <vector>
using namespace std;

class Carta {
protected:
    string nome;
    string tipo;
    string custoMana;
    int ataque;
    int defesa;

public:
    Carta(string n, string t, string cm, int a = 0, int d = 0)
        : nome(n), tipo(t), custoMana(cm), ataque(a), defesa(d) {}

    void mostrarInfo() const {
        cout << "Nome: " << nome
             << ", Tipo: " << tipo
             << ", Custo de Mana: " << custoMana;
        if (tipo == "Criatura")
            cout << ", Ataque: " << ataque << ", Defesa: " << defesa;
        cout << endl;
    }
};

int main() {
    vector<Carta> deckYuriko;

    // Comandante
    deckYuriko.push_back(Carta("Yuriko, a Sombra do Tigre", "Criatura", "U B", 1, 3));

    // Criaturas
    deckYuriko.push_back(Carta("Ornitóptero", "Criatura", "0", 0, 2));
    deckYuriko.push_back(Carta("Alma Atormentada", "Criatura", "B", 1, 1));
    deckYuriko.push_back(Carta("Arauta do Manto de Bruma", "Criatura", "U", 1, 1));
    deckYuriko.push_back(Carta("Domador de Tempestades Sireno", "Criatura", "U", 1, 1));
    deckYuriko.push_back(Carta("Gengibrito", "Criatura", "1", 1, 1));
    deckYuriko.push_back(Carta("Lâmina Sinuosa", "Criatura", "U", 1, 1));
    deckYuriko.push_back(Carta("Pária Morfológico", "Criatura", "1", 1, 1));
    deckYuriko.push_back(Carta("Prodígio Engenhoso", "Criatura", "U", 1, 3));
    deckYuriko.push_back(Carta("Rouba-sonho Fada", "Criatura", "U", 1, 1));
    deckYuriko.push_back(Carta("Sombra de Mil Faces", "Criatura", "U", 1, 1));
    deckYuriko.push_back(Carta("Vidente Fada", "Criatura", "U", 1, 1));
    deckYuriko.push_back(Carta("Coruja do Agouro", "Criatura", "U", 1, 1));
    deckYuriko.push_back(Carta("Coruja Sábia", "Criatura", "U", 1, 1));
    deckYuriko.push_back(Carta("Hacker do Circuito Lunar", "Criatura", "U", 1, 1));
    deckYuriko.push_back(Carta("Mestre do Pelo de Prata", "Criatura", "U", 1, 1));
    deckYuriko.push_back(Carta("Silenciador Dokuchi", "Criatura", "1 B", 1, 2));
    deckYuriko.push_back(Carta("Tetsuko Umezawa, Fugitiva", "Criatura", "1 U", 1, 3));
    deckYuriko.push_back(Carta("Caça-garganta", "Criatura", "2 B", 2, 2));
    deckYuriko.push_back(Carta("Ladra Próspera", "Criatura", "2 U", 1, 4));
    deckYuriko.push_back(Carta("Mago das Sombras Infiltrador", "Criatura", "2 U", 2, 3));
    deckYuriko.push_back(Carta("Shinobi da Lâmina de Névoa", "Criatura", "3 U", 3, 2));
    deckYuriko.push_back(Carta("Infiltradora Engenhosa", "Criatura", "1 U B", 2, 3));
    deckYuriko.push_back(Carta("Ninja das Horas Tardias", "Criatura", "3 U U", 5, 5));
    deckYuriko.push_back(Carta("Hidesugu e Kairi", "Criatura", "3 U U", 5, 4));
    deckYuriko.push_back(Carta("Shinobi Caído", "Criatura", "3 B B", 5, 4));
    deckYuriko.push_back(Carta("Vela, Manto da Noite", "Criatura", "3 U", 3, 2));
    deckYuriko.push_back(Carta("Oni da Lâmina Silenciosa", "Criatura", "3 U B B", 6, 5));
    deckYuriko.push_back(Carta("Artesão de Kozilek", "Criatura", "9", 10, 9));
    deckYuriko.push_back(Carta("Metamorfo Corpulento", "Criatura", "9", 9, 9));
    deckYuriko.push_back(Carta("Sombra da Mortalidade", "Criatura", "13 B B", 7, 7));

    // Planeswalker
    deckYuriko.push_back(Carta("Kaito, Sombra Dançante", "Planeswalker", "2 U B"));

    // Mágicas
    deckYuriko.push_back(Carta("Afundar", "Mágica", "U"));
    deckYuriko.push_back(Carta("Presságio", "Mágica", "U"));
    deckYuriko.push_back(Carta("Tempestade Cerebral", "Mágica", "U"));
    deckYuriko.push_back(Carta("Vidas do Sono", "Mágica", "U"));
    deckYuriko.push_back(Carta("Adentrar o Turbilhão", "Mágica", "1 U"));
    deckYuriko.push_back(Carta("Contramão", "Mágica", "1 U"));
    deckYuriko.push_back(Carta("Negar", "Mágica", "1 U"));
    deckYuriko.push_back(Carta("Empilhar", "Mágica", "1 U"));
    deckYuriko.push_back(Carta("Medo Debilitante", "Mágica", "U B"));
    deckYuriko.push_back(Carta("Maré da Devastação", "Mágica", "X U U"));
    deckYuriko.push_back(Carta("Cai o Pano", "Mágica", "5 U"));
    deckYuriko.push_back(Carta("Chicotada Anuladora", "Mágica", "3 U"));
    deckYuriko.push_back(Carta("Inundação de Lágrimas", "Mágica", "4 U U"));
    deckYuriko.push_back(Carta("Enviar // Oblívio", "Mágica", "1 U // 4 B"));
    deckYuriko.push_back(Carta("Cruzeiro do Tesouro", "Mágica", "7 U"));
    deckYuriko.push_back(Carta("Revirar o Tempo", "Mágica", "5 U U"));
    deckYuriko.push_back(Carta("Conviver // Concoctante", "Mágica", "2 U // 3 B"));
    deckYuriko.push_back(Carta("Gravar // Memória", "Mágica", "U // 3 U U"));
    deckYuriko.push_back(Carta("Queda Fatal", "Mágica", "B"));
    deckYuriko.push_back(Carta("Lixo // Luxo", "Mágica", "3 U // 2 B B"));

    // Artefatos
    deckYuriko.push_back(Carta("Anel Solar", "Artefato", "1"));
    deckYuriko.push_back(Carta("Espada Vorpal", "Artefato", "2 B"));
    deckYuriko.push_back(Carta("A Pedra Fellwar", "Artefato", "2"));
    deckYuriko.push_back(Carta("Botas Pé-ligeiro", "Artefato", "2"));
    deckYuriko.push_back(Carta("Pedra da Mente", "Artefato", "2"));
    deckYuriko.push_back(Carta("Sinete Arcano", "Artefato", "2"));
    deckYuriko.push_back(Carta("Sinete Dimir", "Artefato", "2"));
    deckYuriko.push_back(Carta("Chave Rúnica Dimir", "Artefato", "3"));
    deckYuriko.push_back(Carta("Espúlculo Quietus", "Artefato", "3"));
    deckYuriko.push_back(Carta("O Caldeirão da Eternidade", "Artefato", "10"));
    deckYuriko.push_back(Carta("Pedras dos Índicios Dimir", "Artefato", "3"));

    // Encantamentos
    deckYuriko.push_back(Carta("Augúrio", "Encantamento", "U"));
    deckYuriko.push_back(Carta("Forma Aquosa", "Encantamento", "U"));
    deckYuriko.push_back(Carta("Voo Arcano", "Encantamento", "U"));
    deckYuriko.push_back(Carta("Evasão Sagaz", "Encantamento", "U"));

    // Terrenos
    deckYuriko.push_back(Carta("Casebre da Bruxa", "Terreno", ""));
    deckYuriko.push_back(Carta("Castelo de Vantreza", "Terreno", ""));
    deckYuriko.push_back(Carta("Catacumbas de Darkwater", "Terreno", ""));
    deckYuriko.push_back(Carta("Estuário Estrangulado", "Terreno", ""));
    deckYuriko.push_back(Carta("Ilha", "Terreno", ""));
    deckYuriko.push_back(Carta("Lodajal Mortuário", "Terreno", ""));
    deckYuriko.push_back(Carta("Pântano", "Terreno", ""));
    deckYuriko.push_back(Carta("Paisagem Infinita", "Terreno", ""));
    deckYuriko.push_back(Carta("Passagem do Ladino", "Terreno", ""));
    deckYuriko.push_back(Carta("Refúgio da Ilha de Jwar", "Terreno", ""));
    deckYuriko.push_back(Carta("Santuário Místico", "Terreno", ""));
    deckYuriko.push_back(Carta("Templo do Falso Deus", "Terreno", ""));
    deckYuriko.push_back(Carta("Torre de Comando", "Terreno", ""));
    deckYuriko.push_back(Carta("Vastidão Morfoterrena", "Terreno", ""));
    deckYuriko.push_back(Carta("Vazio Zhifairiano", "Terreno", ""));

    // Mostrar todas as cartas do deck
    for (const auto& carta : deckYuriko) {
        carta.mostrarInfo();
    }

    return 0;
}
