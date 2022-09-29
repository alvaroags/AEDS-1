#include "endereco.h"
typedef struct 
{
    char nome[100];
    char cpf[20];
    char dtNascimento[20];
    Endereco *endereco;
} Cliente;


void setNome(Cliente* cliente, char nome);
void setCPF(Cliente* cliente, char cpf);
void setDtNascimento(Cliente* cliente, char dtNascimento);

char* getNome(Cliente* cliente);
char* getCPF(Cliente* cliente);
char* getDtNascimento(Cliente* cliente);

void imprimiDadosCliente(Cliente* cliente);