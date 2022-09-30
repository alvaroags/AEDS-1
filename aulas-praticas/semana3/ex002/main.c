#include "ContaBancaria.h"

<<<<<<< Updated upstream
int main(){
    char *rua = "Rua Paraiba";
    char *bairro = "Sao Jose";
    char *cidade = "Belo Horizonte";
    char *estado = "Minas Gerais";
    int numeroConta, numeroCasa = 15;
    char *nome = "Alvaro Gomes";
    char *cpf = "123456789-01";
    char *dataNasc = "09/07/2001";
    int anoConta = 2020;
    char *tipoConta = "Corrente";
    srand(time(NULL));
    numeroConta = rand() % 1000000;
    ContaBancaria conta;
    insereDadosConta(&conta, numeroConta, anoConta, tipoConta, nome, cpf, dataNasc, rua, bairro, cidade, estado, numeroCasa);
    deposito(&conta, 100000);
    saque(&conta, 11111);
    imprimiConta(&conta);
=======
void recebeNumero(contaBancaria* conta, int numero){
    srand(time(NULL));
    numero = rand() % 100000;
    setNumero(conta, numero);
}
void recebeAnoConta(contaBancaria* conta, int anoConta){
    printf("\nANO DA CONTA");
    scanf("%d", &anoConta);
    setAnoConta(conta, anoConta);
}
void recebeTipoConta(contaBancaria* conta, char tipoConta){
    printf("\nTIPO DA CONTA");
    scanf("%c");
    scanf("%c", &tipoConta);
    setTipoConta(conta, tipoConta);
}
void recebeNovoSaldo(contaBancaria* conta){
    setNovoSaldo(conta);
}
void recebeDeposito(contaBancaria* conta, double valor){
    printf("\nVALOR DO DEPOSITO");
    scanf("%lf", &valor);
    fflush(stdin);
    deposito(conta, valor);
}
void recebeSaque(contaBancaria* conta, double valor){
    printf("\nVALOR DO SAQUE");
    scanf("%lf", &valor);
    fflush(stdin);
    saque(conta, valor);
}



void recebeNome(contaBancaria* conta){
    char nome[100];
    printf("\nNOME DA CONTA");
    scanf("%[^\n]s", nome);
    setNome(conta->cliente, nome);
    printf("passou");
}
void recebeCPF(contaBancaria* conta, char* cpf){
    printf("\nCPF DA CONTA");
    fgets(cpf, 20, stdin);
    setCPF(conta->cliente, cpf);  
}
void recebeDtNascimento(contaBancaria*conta, char* dtNascimento){
    printf("\nDATA DE NASCIMENTO");
    fgets(dtNascimento, 20, stdin);
    setDtNascimento(conta->cliente, dtNascimento);
}



void recebeRua(contaBancaria* conta, char* rua){
    printf("\nRUA");
    fgets(rua, 20, stdin);
    setRua(conta->cliente->endereco, rua);
}
void recebeBairro(contaBancaria* conta, char* bairro){
    printf("\nBAIRRO");
    fgets(bairro, 20, stdin);
    setBairro(conta->cliente->endereco, bairro);
}
void recebeCidade(contaBancaria* conta, char* cidade){
    printf("\nCIDADE");
    fgets(cidade, 20, stdin);
    setCidade(conta->cliente->endereco, cidade);
}
void recebeEstado(contaBancaria* conta, char* estado){
    printf("\nESTADO");
    fgets(estado, 20, stdin);
    setEstado(conta->cliente->endereco, estado);
}
void recebeNumeroCasa(contaBancaria* conta, int numeroCasa){
    printf("\nNUMERO DA CASA");
    scanf("%d", &numeroCasa);
    fflush(stdin);
    setNumeroCasa(conta->cliente->endereco, numeroCasa);
}
int main(){
    int numero, anoConta, numeroCasa; 
    char tipoConta, nome[100], cpf[20], dtNascimento[20], rua[50], bairro[50], cidade[50], estado[50];
    double valor;
    contaBancaria conta;
    printf("oi");
    recebeNumero(&conta, numero);
    recebeAnoConta(&conta, anoConta);
    recebeTipoConta(&conta, tipoConta);
    recebeNovoSaldo(&conta);
    recebeDeposito(&conta, valor);
    recebeSaque(&conta, valor);
    recebeNome(&conta);
    recebeDtNascimento(&conta, dtNascimento);
    recebeRua(&conta, rua);
    recebeBairro(&conta, bairro);
    recebeCidade(&conta, cidade);
    recebeEstado(&conta, estado);
    recebeNumeroCasa(&conta, numeroCasa);
    imprimiDadosConta(&conta);
>>>>>>> Stashed changes
}