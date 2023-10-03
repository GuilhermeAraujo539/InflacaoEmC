#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

setlocale(LC_ALL, "Portuguese");
	//variaveis
	float precoDoProduto;
	float TotalInflacao;
	
	printf("Qual o Preco do seu produto:");
	scanf("%f", &precoDoProduto);

	//if e else
	if(precoDoProduto>=100){
	
	TotalInflacao = precoDoProduto * 20 / 100 + precoDoProduto;
	
	}else {
		TotalInflacao = precoDoProduto * 10 / 100 + precoDoProduto;
	};
	
	//total
	printf("O Valor Inflacionado é de R$ %.2f", TotalInflacao);
	return 0;
}
