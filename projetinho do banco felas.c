#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	char login[200], loginRecebe[200] = "usuarioBanco";
	char senha[200], senhaRecebe[200] = "senha123";
	int i, opcoes, contador;
	float salarioInserido = 0, operacaoSalario = 0;
	
	setlocale(LC_ALL,"portuguese");
	
	puts(" === INSIRA SEUS DADOS DE LOGIN ===\n");
	do{
		printf("USUÁRIO\n");
		scanf("%s",&login);
		printf("\nSENHA\n");
		scanf("%s",&senha);
		
		system("cls || clear");
		
		contador++;
		
		
		if(strcmp(login,loginRecebe) !=0 || strcmp(senha,senhaRecebe) != 0){
			puts("TENTE NOVAMENTE\n");
		}
		
		if(contador == 3){
		printf("USUÁRIO OU SENHA INCORRETOS. \nTENTE NOVAMENTE MAIS TARDE...");
		break;
		}	
		
	}while(strcmp(login,loginRecebe) !=0 || strcmp(senha,senhaRecebe) != 0);	
	
	for(i=1;i>0;i++){
	
	system("cls || clear");
	printf("BANCO DO BRASIL \tSALDO R$: %.2f\n", operacaoSalario);
	printf("\nDIGITE A OPÇÃO DESEJADA: \n");
	printf("1) ADICIONAR VALOR \n2) RETIRAR VALOR \n3) ENCERRAR PROGRAMA \nDIGITE AQUI: ");
	scanf("%d",&opcoes);
	
	do{
	switch(opcoes){
		case 1: system("cls || clear ");
				do{
				printf("DIGITE A QUANTIDADE QUE DESEJA INSERIR \nR$");
				scanf("%f",&salarioInserido);
				
				operacaoSalario += salarioInserido;
				
				printf("DIGITE SUA SENHA: ");
				scanf("%s",&senha);
				
				system("cls || clear");
				
				if(strcmp(senha,senhaRecebe) != 0){
					printf("SENHA INVÁLIDA, TENTE NOVAMENTE");
				}
				
				}while(strcmp(senha,senhaRecebe) != 0);
		break;
		case 2: system("cls || clear");
				do{
				printf("DIGITE A QUANTIDADE QUE DESEJA RETIRAR: \nR$");
				scanf("%f",&salarioInserido);
				
				if(operacaoSalario == 0 && salarioInserido > operacaoSalario){
					printf("\nSALDO INSUFICIENTE...");
					sleep(5);
					break;
				}
				
				operacaoSalario = operacaoSalario - salarioInserido; 
				
				printf("DIGITE SUA SENHA: ");
				scanf("%s",&senha);
				
				system("cls || clear");
				
				if(strcmp(senha,senhaRecebe) != 0){
					printf("SENHA INVÁLIDA, TENTE NOVAMENTE");
				}
				
				}while(strcmp(senha,senhaRecebe) != 0);
		break;
		case 3:
			system("cls || clear");
			printf("PROGRAMA ENCERRADO!");
			
		break;
		default: system("cls || clear");
					printf("INSIRA UMA OPÇÃO VÁLIDA");
		break;	
	}
	
	}while(opcoes < 0 || opcoes > 3);
	
	if(opcoes == 3){
		break;
	}
	}
	return 0;
}
