#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct
{
    char rua[50];
    int numero;
    char bairro[50];
    char cidade[50];
    char estado[50];
} Endereco;

void setRua(Endereco* enredeco, char* rua);
void setBairro(Endereco* enredeco, char* bairro);
void setCidade(Endereco* enredeco, char* cidade);
void setEstado(Endereco* enredeco, char* estado);
void setNumeroCasa(Endereco* enredeco, int numeroCasa);

char* getRua(Endereco* endereco);
char* getBairro(Endereco* endereco);
char* getCidade(Endereco* endereco);
char* getEstado(Endereco* endereco);
int getNumeroCasa(Endereco* endereco);

void imprimiEnderecoCliente(Endereco* endereco);