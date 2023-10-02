#include "AnimalDomestico.h"
#include "Pessoa.h"

AnimalDomestico::AnimalDomestico(string nome, double peso) :
nome(nome), peso(peso), dono(NULL) {
    cout << "Construindo Animal: [" << nome << "]" << endl;
}

AnimalDomestico::~AnimalDomestico() {
    cout << "Destruindo Animal: [" << nome << "]" << endl;
}

string AnimalDomestico::getNome() const {
    return nome;
}

double AnimalDomestico::getPeso() const {
    return peso;
}

Pessoa* AnimalDomestico::getDono() const {
    return dono;
}

void AnimalDomestico::setNome(string nome) {
    this->nome = nome;
}

void AnimalDomestico::setPeso(double peso) {
    this->peso = peso;
}

void AnimalDomestico::setDono(Pessoa* dono) {
    this->dono = dono;
}

void AnimalDomestico::imprime() {
    cout << "Nome: " << this->nome << endl;
    cout << "Peso: " << this->peso << endl;
    if (this->dono != NULL) {
        cout << "Dono: " << this->dono->getNome() << endl;
    }
}