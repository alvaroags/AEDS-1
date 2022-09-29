#include "contaBancaria.h"

// FUNÇÕES SET
void setNumero(contaBancaria* conta, int numero){
    conta->numero = numero;
}
void setAnoConta(contaBancaria* conta, int anoConta){
    conta->anoConta = anoConta;
}
void setTipoConta(contaBancaria* conta, char tipoConta){
    conta->tipoConta = tipoConta;
}
void setNovoSaldo(contaBancaria* conta){
    conta->saldo = 0;
}

// FUNÇÕES GET
int getNumero(contaBancaria* conta){
    return conta->numero;
}
int getAnoConta(contaBancaria* conta){
    return conta->anoConta;
}
char getTipoConta(contaBancaria* conta){
    return conta->tipoConta;
}
double getSaldo(contaBancaria* conta){
    return conta->saldo;
}

// OPERAÇÕES NO SALDO
void deposito(contaBancaria* conta, double valor){
    conta->saldo += valor;
}
void saque(contaBancaria* conta, double valor){
    conta->saldo -= valor;
}

// FUNÇÕES IMPRIMI
void imprimiDadosConta(contaBancaria* conta){
    printf("\n-------------------------");
    printf("\nNUMERO DA CONTA: %d", getNumero(conta));
    printf("\nANO DA CONTA: %d", getAnoConta(conta));
    printf("\nTIPO DA CONTA: %c", getTipoConta(conta));
    printf("\nSALDO DA CONTA: %.2lf", getSaldo(conta));

    imprimiDadosCliente(conta->cliente);
}