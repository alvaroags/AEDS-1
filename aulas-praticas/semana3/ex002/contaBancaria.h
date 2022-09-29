#include "cliente.h"
typedef struct 
{
    int numero;
    double saldo;
    char tipoConta;
    int anoConta;
    Cliente *cliente;
} contaBancaria;

void setNumero(contaBancaria* conta, int numero);
void setAnoConta(contaBancaria* conta, int anoConta);
void setTipoConta(contaBancaria* conta, char tipoConta);
void setNovoSaldo(contaBancaria*conta);

int getNumero(contaBancaria* conta);
int getAnoConta(contaBancaria* conta);
char getTipoConta(contaBancaria* conta);
double getSaldo(contaBancaria*conta);

void deposito(contaBancaria*conta, double valor);
void saque(contaBancaria*conta, double valor);

void imprimiDadosConta(contaBancaria* conta); 