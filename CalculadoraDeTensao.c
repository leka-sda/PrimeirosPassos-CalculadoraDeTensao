#include <stdio.h>
#include <locale.h>

int main() {
    // INCLUI CARACTERES ESPECIAIS DA LÍNGUA PORTUGUESA
    setlocale (LC_ALL, "Portuguese");
    
    // PROGRAMA SE APRESENTA AO USUÁRIO
    printf(" ---------------------------------------------------\n");  
    printf("| Olá! Seja bem vindo ao calculador de tensão 1000v |\n");
    printf(" ---------------------------------------------------\n"); 
    printf("\n");  
    
    // DECLARA AS VARIÁVEIS E SOLICITA OS DADOS
    float tensaoIn, tensaoOut, resistor1, resistor2;
    
    printf("Digite o valor de tensão de entrada: ");
    scanf("%f", &tensaoIn);
    fflush(stdin);
    printf("Digite o valor do 1º resistor : ");
    scanf("%f", &resistor1);
    fflush(stdin);
    printf("Digite o valor do 2º resistor : ");
    scanf("%f", &resistor2);
    fflush(stdin);
    
    // CALCULA O VALOR DE TENSÃO DE SAÍDA E IMPRIME O RESULTADO PARA O USUÁRIO
    tensaoOut = (resistor2 / (resistor1 + resistor2)) * tensaoIn;
    printf("O valor de tensão de saída é: %.2f", tensaoOut);
    
    // PROGRAMA SE DESPEDE DO USUÁRIO
    printf("\n");
    printf("\n");
    printf(" ----------------------------\n");  
    printf("| Obrigado pela preferência! |\n");
    printf(" ----------------------------\n");       
}