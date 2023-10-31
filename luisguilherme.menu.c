#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void crescente_decrescente();
void calculo_idades();
void senha();
void notas();
void combustivel();
void tabuada();
void soma_impar();
void impar_x();
void valores_10_20();
void divisao();
void positivo_negativo();
void menor_nmr();
void franquia_telefone();
void troco();
void glicose();
void maior_arremesso();
void ajuste_salario();
void jogo();


int main()
{
    int menu;
    
    do {
        printf("\nSELECIONE A OPÇÃO QUE DESEJA EXECUTAR, REFERENTE AS LISTAS 2,3: \n\n");
        printf("(1) - CRESCENTE OU DECRESCENTE.\n");
        printf("(2) - CALCULO DE IDADES.\n");
        printf("(3) - VALIDAR SENHA.\n");
        printf("(4) - LEITURA DE NOTAS VALIDAS.\n");
        printf("(5) - PRÊFERENCIA DE CLIENTES.\n");
        printf("(6) - TABUADA.\n");
        printf("(7) - SOMA DOS NUMEROS IMPARES ENTRE DOIS VALORES.\n");
        printf("(8) - MOSTRAR NUMEROS IMPARES DE 1 ATE X.\n");
        printf("(9) - VALORES QUE ESTAO ENTRE 10, 20.\n");
        printf("(10) - DIVISÃO.\n");        
        printf("(11) - PAR OU IMPAR, NEGATIVO OU POSITIVO.\n");
        printf("(12) - QUAL O MENOR NUMERO?.\n");
        printf("(13) - CALCULO FRANQUIA DE TELEFONE.\n");
        printf("(14 - TROCO.\n");
        printf("(15) - CALCULO DE GLICOSE NO SANGUE.\n");
        printf("(16) - QUAL O MAIOR ARREMESSO?\n");
        printf("(17)- AJUSTE DE SALARIO.\n");        
        printf("(18)- CALCULAR DURAÇÃO DE UM JOGO.\n");
        
        printf("SE NAO ESTA INTERESSADO EM NENHUMAS DAS OPCOES... \n\n");

        printf("(19) - QUERO SAIR!\n");
        scanf("%d", &menu);
    
    switch (menu) {
        case 1:
           crescente_decrescente();
            break;
            
        case 2:
             calculo_idades();
            break;
        
        case 3:
             senha();
            break;
        
        case 4:
             notas();
            break;        
        
        case 5:
             combustivel();
            break;        
        
        case 6:
             tabuada();
            break;
             
        case 7:
             soma_impar();
            break;            
            
        case 8:
             impar_x();
            break;   
            
        case 9:
            valores_10_20();
            break;
        case 10:
            divisao();
            break;    
        case 11:
            positivo_negativo();
            break;    
        case 12:
            menor_nmr();
            break;
        case 13:
            franquia_telefone();
            break;    
        case 14:
            troco();
            break;        
        case 15:
            glicose();
            break;      
        case 16:
            maior_arremesso();
            break;      
        case 17:
            ajuste_salario();
            break;      
        case 18:
            jogo();
            break;         
        case 19: 
            printf("OK, SAINDO...");
            break;
            
            
            default:
            printf("Essa opcao esta invalida, por favor tente novamente com os numeros de 01 ate 19.\n\n");
            }
    }
    while (menu != 19);
    
 
}
 void crescente_decrescente()
{
         int v1, v2, cresc, decres;
         do{
             printf("Digite duplas de valores e sera mostrado se o mesmo se encontra em ordem crescente ou decrescete.\n\n DIGITE O PRIMEIRO VALOR: ");
             scanf("%d", &v1);
             printf("DIGITE O SEGUNDO VALOR: ");
             scanf("%d", &v2);
    
    if(v1 < v2)
    {
      printf("ORDEM CRESCENTE.\n\n");
       
    }
    
    else if(v1 > v2)
    {
      printf("ORDEM DECRESCENTE.\n\n"); 
    }
        
     }   
     
    while (v1!= v2);
    
       printf("Programa encerrado pois ambos os numeros sao iguais."); 
      
}

  void calculo_idades()  
  
{
         double media, idd, soma, qntd;
         
            do {
                printf("Digite a idade de um individuo, (sera mostrado quando um valor invalido for inserido): ");
                scanf("%lf", &idd);
                 
                if (idd > 0) {    
                soma += idd;
                qntd = qntd + 1;
                media = soma / qntd;
                }
            }
            while(idd > 0);
                printf("IMPOSSIVEL CALCULAR, IDADE INVALIDA.\n\n");
                printf("A soma das idades é: %.2f \n", soma);
                printf("A media das idades é: %.2f \n", media);
}
   
   void senha() 
    {
       double tentativa, senha = 2002;
         
         do {
            printf("DIGITE A SENHA: ");
            scanf("%lf", &tentativa);
                if(tentativa != 2002)
                {
                    printf("SENHA INVALIDA, TENTE NOVAMENTE.\n\n");
                }
                else
                {
                    printf("ACESSO LIBERADO.\n");
                }
            }
            while(tentativa != senha);
    }
    void notas()
    {
         double n1, n2, media;
    
            printf("Digite o valor da primeira prova: ");
            scanf("%lf", &n1);
            printf("Digite o valor da segunda prova: ");
            scanf("%lf", &n2);
            
            media = (n1 + n2) / 2;
            
            if ((n1 < 0 || n1 > 10))
            {
                printf("Nao foi possivel calcular a media semestral.");
            }
            else if ((n2 < 0|| n2 > 10))
            {
                printf("Nao foi possivel calcular a media semestral.");
            }
            else 
            {
                printf("A media semestral é:%.2f", media);
            }
    }
    void combustivel()
    {
         int opcao;
    
             do {
                   printf("OLA, A SEGUIR TEMOS 3 OPÇÕES DE COMBUSTIVEL, SELECIONE QUAL DESEJA ABASTECER. \n\n");
                   printf("(1) ETANOL.\n");
                   printf("(2) GASOLINA.\n");
                   printf("(3) DIESEL.\n");
                   printf("(4) FIM.\n\n");
                   scanf("%d", &opcao);
                   
        switch(opcao) {
            
            case 1:
                printf("O COMBUSTIVEL SELECIONADO FOI ETANOL.\n\n");
                break;
            case 2:
                printf("O COMBUSTIVEL SELECIONADO FOI GASOLINA.\n\n");
                break;
            case 3:
                printf("O COMBUSTIVEL SELECIONADO FOI DIESEL.\n\n");
                break;
            case 4:
                printf("VOCE SELECIONOU FIM, MUITO OBRIGADO E ATE A PROXIMA!\n\n");
                break;
            default:
                printf("OPÇÃO INVALIDA, TENTE NOVAMENTE.");

        }
   }
    
        while(opcao != 4);
   
    }
 
    void tabuada()
    {
         int num;
         int i;
        
          
            printf("digite o numero que deseja ver a tabuada: ");
            scanf("%d", &num);
                
             for (i = 1; i <= 10; i++) 
                {
                    printf("%d x %d = %d\n", num, i, num * i);
                }
        }
  
    void soma_impar()
    {
     int x, y, i, soma = 0;

        printf("Digite o primeiro valor inteiro: ");
        scanf("%d", &x);
        printf("Digite o segundo valor inteiro: ");
        scanf("%d", &y);
    
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
    
        for (i = x; i <= y; i++) 
        {
    
            if (i % 2 != 0) 
            {
                soma += i;
            }
        }

    printf("A soma dos números ímpares entre %d e %d é: %d\n", x, y, soma);

    }
    
        void impar_x()
    {
             int n1, i;
            
                printf("Digite um valor inteiro: ");
                scanf("%d", &n1);
            
                printf("Veja os números ímpares até %d: ", n1);
            
                for (i = 1; i <= n1; i++) 
                    {
                    if (i % 2 != 0) 
                    {
                        printf("%d ", i);
                       }
                       }

                     printf("\n");

                       }
    void valores_10_20()
{
    int qntd, N, dentroI = 0, foraI = 0;

        printf("Digite a quantidade de valores a serem lidos: ");
        scanf("%d", &qntd);

    for (int i = 0; i < qntd; i++) {
        printf("Digite o valor inteiro (%d): ", i + 1);
        scanf("%d", &N);

        if (N > 9 && N < 21) 
        {
            dentroI++;
        } 
        else 
        {
            foraI++;
        }
    }

            printf("Veja a seguir os valores dentro de 10 a 20: %d\n", dentroI);
            printf("Veja a seguir os valores dentro de 10 a 20: %d\n", foraI);
}
 void divisao()
 {
      double n1, n2, res;
        
            printf("DIGITE UM VALOR: ");
            scanf("%lf", &n1);
            printf("DIGITE UM SEGUNDO VALOR: ");
            scanf("%lf", &n2);
    
    res = n1 / n2;
    
        if(n1 <= n2)
        {
            printf("DIVISAO IMPOSSIVEL.");
        }
        
        else
        {
            printf("O resultado da divisao entre %.f, e %.f é: %.f", n1, n2, res);
        }
 }
void positivo_negativo()
{
     int valor, N;
    
        printf("Digite a seguir um numero, e esse numero vai ser o mesmo tanto de vezes que vai ser solicitado para digitar um numero inteiro: ");
        scanf("%d", &N);
        
    for (int i = 0; i < N; i++)
        {
            printf("Digite o proximo numero inteiro: ");
            scanf("%d", &valor);

  
    if(valor == 0)
    {
        printf("VALOR NULO!\n");
    }
     else {
    
         if(valor % 2 == 0)
        {
           printf("O valor digitado %d, é par\n", valor); 
        }
        else
        {
           printf("O valor digitado %d, é impar\n", valor); 
        }
        if(valor < 0)
        {
            printf("NEGATIVO!\n");
        }
        else
        {
            printf("POSITIVO!\n");
        }
     }
  } 
}
void menor_nmr()
{
    int n1, n2, n3, menor, empt;
     
        printf("Digite um numero: ");
        scanf("%d", &n1);
        printf("Digite outro numero: ");
        scanf("%d", &n2);
        printf("Digite o ultimo numero: ");
        scanf("%d", &n3);
        
        if(( n1 == n2 || n1 == n3 || n2 == n3))
        {
            printf("EMPATE\n\n");
        }
        
        menor = n1;

     if (n2 < menor)
    {
        menor = n2;
    }
    if (n3 < menor)
    {
        menor = n3;
    }
    
         printf("O menor numero dentre os citados é: %d", menor);
}
void franquia_telefone()
 {
     double valorMensal = 50.00, minutosAdc = 2, min, valorTotal, valorMin;
    
        printf("Valor do plano: 50 reais \nBeneficio incluso: 100 Minutos. \n *E a cada minuto excedido apos os 100 minutos inclusos, sera cobrado 2 reais por minuto.\n\n Digite a quantidade de minutos usadas do plano: \n");
        scanf("%lf", &min);
        
    if (min > 100)
    {
        valorMin = (min - 100)*2;
        valorTotal = valorMin + valorMensal;
    }
    
            printf("O valor total gasto em minutos adicionais foi de %.f reais, sendo assim, o valor total do plano se baseia em: %.f reais.", valorMin, valorTotal);
    
 }   
 void troco()
 {
     double dinheiroInsu, precoProduto, unidadesProdutos, valorCaixa, troco, valorTotal;
     	
         	
         	printf("Insira o preco unitario do produto: ");
         	scanf("%lf", &precoProduto);
         	printf("Quantidade de produtos a serem levados: ");
         	scanf("%lf", &unidadesProdutos);
         	
         	valorTotal = precoProduto * unidadesProdutos;
         	
         	printf("O valor total da compra foi: %.2f reais \n", valorTotal);
         	printf("Digite a quantia (em dinheiro) a ser entrgue para o caixa: ");
         	scanf("%lf", &valorCaixa);
     	
 	if (valorCaixa < valorTotal)
 	{
 	    dinheiroInsu = valorTotal - valorCaixa;
 	    printf("Valor insuficiente, favor pagar:%.f reais.\n", dinheiroInsu);
 	}
    else
        {
        troco = valorCaixa - valorTotal;
        printf("Veja o valor do troco: %.2f reias", troco);
        }
 }
 void glicose()
 {
      int glicose;
      
            printf("Digite a seguir, a quantidade de GLICOSE no seu sangue(em mg): ");
            scanf("%d", & glicose);
        
        if(glicose <= 100)
        {
            printf("Situação: NORMAL!");
        }
        else if((glicose > 100 && glicose <= 140))
        {
            printf("Situação: ELEVADO!");
        }
        else if(glicose > 140)
        {
            printf("Situação: DIABETES!");
        }
 }
 void maior_arremesso()
 {
     double arremesso1, arremesso2, arremesso3, maior;
      
            printf("Digite a distancia do primeiro arremesso(em metros): ");
            scanf("%lf", &arremesso1);
            printf("Digite a distancia do segundo arremesso(em metros): ");
            scanf("%lf", &arremesso2);
            printf("Digite a distancia do terceiro arremesso(em metros): ");
            scanf("%lf", &arremesso3);
      
        maior = arremesso1; 
        
        if(arremesso2 > maior)
        {
            maior =arremesso2;
        }
        if(arremesso3 > maior)
        {
             maior = arremesso3;
        }
      
        printf("O maior arremesso foi o arremesso de %.2f metros de distância", maior);
 }
 void ajuste_salario()
 {
      double salario, novosal, diferenca;
    
        printf("AJUSTE DE SALARIO!\n\n");
        printf("Veja a seguir os ajustes para cada valor de salario: \n\n");
        printf("Até R$ 1000.00 +20%. \nAcima de R$ 1000.00 até R$ 3000.00 +15%. \nAcima de R$ 3000.00 até R$ 8000.00 +10%. \nAcima de R$ 8000.00 +5%.\n\n");
        printf("Digite seu salario: ");
        scanf("%lf", &salario);
        
    
        
        if ((salario >= 0 && salario <= 1000))
        {
            novosal = salario * 1.20;
            diferenca = novosal - salario;
            printf("A remuneração atual aplicando um aumento de 5%: %.2f reais.\nLevando em consideração o novo salario, veja o valor da diferença: %.f reais.", novosal, diferenca);
        }
        else if ((salario >= 1001 && salario <= 3000))
        {
            novosal = salario * 1.15;
            diferenca = novosal - salario;
            printf("A remuneração atual aplicando um aumento de 5%: %.2f reais.\nLevando em consideração o novo salario, veja o valor da diferença: %.f reais.", novosal, diferenca);
        }
        else if ((salario >= 3001 && salario <= 8000))
        {
            novosal = salario * 1.10;
            diferenca = novosal - salario;
            printf("A remuneração atual aplicando um aumento de 5%: %.2f reais.\nLevando em consideração o novo salario, veja o valor da diferença: %.f reais.", novosal, diferenca);
        }
    
        else if (salario >= 8000)
        {
            novosal = salario * 1.05;
            diferenca = novosal - salario;
            printf("A remuneração atual aplicando um aumento de 5%: %.2f reais.\nLevando em consideração o novo salario, veja o valor da diferença: %.f reais.", novosal, diferenca);
            }
 }
 void jogo()
 {
       int hora_inicial, minuto_inicial, hora_final, minuto_final;
    int minutos_inicial, minutos_final, duracao_minutos;

    printf("Informe a hora inicial do jogo (hh mm): ");
    scanf("%d %d", &hora_inicial, &minuto_inicial);

    printf("Informe a hora final do jogo (hh mm): ");
    scanf("%d %d", &hora_final, &minuto_final);

    minutos_inicial = hora_inicial * 60 + minuto_inicial;
    minutos_final = hora_final * 60 + minuto_final;

    if (minutos_inicial <= minutos_final) 
    {
        duracao_minutos = minutos_final - minutos_inicial;
    } 
    else 
    {
        duracao_minutos = (24 * 60 - minutos_inicial) + minutos_final;
    }

    int duracao_horas = duracao_minutos / 60;
    int duracao_min = duracao_minutos % 60;

    printf("A duração do jogo é de %d horas e %d minutos.\n", duracao_horas, duracao_min);

 }