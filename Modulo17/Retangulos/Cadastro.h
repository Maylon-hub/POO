#ifndef CADASTRO_H
#define CADASTRO_H

#include <string>
using namespace std;

class Cadastro {
private:
    string fileName;
public:
    Cadastro(string fileName);
    void grava();
    void imprime();
    void imprime(int pos);
    void altera(int pos);
    void ordenaArquivo();
};

#endif
