#include "cliente.h"

//FUNÇÕES SET
void setNome(Cliente* cliente, char* nome){
    strcpy(cliente->nome,nome);
}
void setCPF(Cliente* cliente, char* cpf){
    strcpy(cliente->cpf,cpf);
}
void setDtNascimento(Cliente* cliente, char* dtNascimento){
    strcpy(cliente->dtNascimento,dtNascimento);
}


//FUNÇÕES GET
char* getNome(Cliente* cliente){
    return cliente->nome;
}
char* getCPF(Cliente* cliente){
    return cliente->cpf;
}
char* getDtNascimento(Cliente* cliente){
    return cliente->dtNascimento;
}


//FUNÇÕES IMPRIMI
void imprimiDadosCliente(Cliente* cliente){
    printf("\nNOME DO CLIENTE: %s", getNome(cliente));
    printf("\nCPF DO CLIENTE: %s", getCPF(cliente));
    printf("\nDATA DE NASCIMENTO DO CLIENTE: %s", getDtNascimento(cliente));

    imprimiEnderecoCliente(cliente->endereco);

}