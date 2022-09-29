#include "endereco.h"

void setRua(Endereco* endereco, char* rua){
    strcpy(endereco->rua, rua);
}
void setBairro(Endereco* endereco, char* bairro){
    strcpy(endereco->bairro, bairro);
}
void setCidade(Endereco* endereco, char* cidade){
    strcpy(endereco->cidade, cidade);
}
void setEstado(Endereco* endereco, char* estado){
    strcpy(endereco->estado, estado);
}
void setNumeroCasa(Endereco* endereco, int numeroCasa){
    endereco->numero = numeroCasa;
}


char* getRua(Endereco* endereco){
    return endereco->rua;
}
char* getBairro(Endereco* endereco){
    return endereco->bairro;
}
char* getCidade(Endereco* endereco){
    return endereco->cidade;
}
char* getEstado(Endereco* endereco){
    return endereco->estado;
}
int getNumeroCasa(Endereco* endereco){
    return endereco->numero;
}

void imprimiEnderecoCliente(Endereco* endereco){
    printf("\nRUA DO CLIENTE: %s", getRua(endereco));
    printf("\nNUMERO DA CASA DO CLIENTE: %d", getNumeroCasa(endereco));
    printf("\nBAIRRO DO CLIENTE: %s", getBairro(endereco));
    printf("\nCIDADE DO CLIENTE: %s", getCidade(endereco));
    printf("\nESTADO DO CLIENTE: %s", getEstado(endereco));
}