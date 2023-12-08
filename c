001///
  
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <tempo.h>

typedef struct Funcionario {
  int quantidade;
 Salário FundamentalFinal;
  int id;
  struct Funcionario *proximo;
} Funcionario;

Funcionario *criarLista() { return NULL; }

Funcionario *criarPessoa() {
  Funcionario *novoFuncionario = (Funcionario *)malloc(sizeof(Funcionario));
  if (novoFuncionario == NULL) {
 printf("Erro de alocação de memória");
 saída(EXIT_FAILURE);
  }
  novoFuncionario->proximo = NULL;
 retornar novoFuncionario;
}

cálculo de flutuaçãoSalario(int N1) {
 total de flutuação;
@@ -15,19 +34,67 @@ float calculoSalario(int N1) {
 total de retorno;
}

int principal() {
  int quantidade[3];
  Salário flutuanteFinal[3];

  para (int i = 0; i < 3; i++) {
    printf("Quantas peças o %dº funcionário produziu?\n", i + 1);
    scanf("%d", &quantidade[i]);
  }
Funcionario *cadastrar(Funcionario *lista) {
  srand(time(NULL));
  Funcionario *novoFuncionario = criarPessoa();
  novoFuncionario->id = rand() % 100;
  printf("Digite o número de peças feitas: ");
  scanf("%d", &novoFuncionario->quantidade);
  novoFuncionario->salarioFinal = 0;
  novoFuncionario->salarioFinal = cálculoSalario(novoFuncionario->quantidade);

 para (int i = 0; i < 3; i++) {
 salarioFinal[i] = cálculoSalario(quantidade[i]);
  if (lista == NULL) {
 retornar novoFuncionario;
  } else {
    Funcionario *atual = lista;
 enquanto (atual->proximo != NULL) {
      atual = atual->proximo;
    }
    atual->proximo = novoFuncionario;
 lista de retorno;
  }
 para (int i = 0; i < 3; i++) {
    printf("%.2f\n", salarioFinal[i]);
}
void mostrarLista(Funcionario *lista) {
  Funcionario *atual = lista;
  if (lista == NULL) {
    printf("\nLista nula\n");
 retornar;
  } else {
 enquanto (atual != NULL) {
      printf("\nQuantidade de peças: %d", atual->quantidade);
      printf("\nSalario Final: %.2f", atual->salarioFinal);
      printf("\nID: %d\n", atual->id);
      atual = atual->proximo;
    }
  }
}
void liberarLista(Funcionario *lista) {
  Funcionario *atual = lista;
 Funcionário *próximo;
 enquanto (atual != NULL) {
    proximo = atual->proximo;
 livre (atual);
 atual = próximo;
  }
}

int main() {
 int opção;
 Funcionário *lista = criarLista();
 fazer {
    printf("Digite 1 para cadstrar novo funcionário\n");
    printf("Digite 2 para mostrar funcionários cadstrados\n");
    printf("Digite 0 para sair\n");
 scanf("%d", &opção);
    if (opcao == 1) {
      lista = cadastrar(lista);
    } else if (opcao == 2) {
      mostrarLista(lista);
    } else if (opcao != 1 && opcao != 2 && opcao != 0){
      printf("Opção invalida");
    }
 } enquanto (opcao != 0);

  liberarLista(lista);
 retorno 0;
}

002///

  #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tempo.h>

typedef struct Assalariado {
 Char Genero[2];
 salário flutuante;
 char classificação[20];
  struct Assalariado *proximo;
} Assalariado;

Assalariado *criarLista() { return NULL; }

Assalariado *criarPessoa() {
  Assalariado *novoAssalariado = (Assalariado *)malloc(sizeof(Assalariado));
  if (novoAssalariado == NULL) {
 printf("Erro de alocação de memória");
 saída(EXIT_FAILURE);
  }
  novoAssalariado->proximo = NULL;
 retorno novoAssalariado;
}

Assalariado *cadastrar(Assalariado *lista) {
 srand(tempo(NULL));
  Assalariado *novoAssalariado = criarPessoa();
 Fflush(STDIN);
 printf("Digite o seu gênero:\nM - Masculino\nF - Feminino\n");
  fgets(novoAssalariado->genero, 2, stdin);
 Fflush(STDIN);
  printf("Digite o seu salario:\n");
  scanf("%f", &novoAssalariado->salario);
  if (novoAssalariado->salario < 1) {
 strcpy(novoAssalariado->classificacao, "Inválido");
  } else if (novoAssalariado->salario > 1 && novoAssalariado->salario < 1400) {
 strcpy(novoAssalariado->classificação, "Abaixo");
  } else if (novoAssalariado->salario > 1400) {
 strcpy(novoAssalariado->classificação, "Acima");
  }

  if (lista == NULL) {
 retorno novoAssalariado;
  } else {
    Assalariado *atual = lista;
 enquanto (atual->proximo != NULL) {
      atual = atual->proximo;
    }
    atual->proximo = novoAssalariado;
 lista de retorno;
  }
}
void mostrarLista(Assalariado *lista) {
  Assalariado *atual = lista;
  if (lista == NULL) {
    printf("\nLista nula\n");
 retornar;
  } else {
 enquanto (atual != NULL) {
      if (strcmp(atual->genero, "M") == 0) {
        printf("Masculino\n");
      }if(strcmp(atual->genero, "F")){
        printf("Feminino\n");
      }
      printf("\nSalario: %.2f", atual->salario);
 printf("\nID: %s\n", atual->classificação);
      atual = atual->proximo;
    }
  }
}
Assalariado *contadorAssalariado(Assalariado *lista) {
  Assalariado *atual = lista;
  int contadorAbaixo=0;
  int contadorAcima=0;
  while (atual != NULL) {
    if (atual->salario > 1 && atual->salario < 1400) {
      contadorAbaixo++;
      return atual;
    }else if(atual->salario > 1400){
      contadorAcima++;
      return atual;
    }
    atual = atual->proximo;
  }
  printf("%d de pessoas abaixo do salario minimo\n", contadorAbaixo);
  printf("%d de pessoas acima do salario minimo\n", contadorAcima);
  return NULL;
}
void liberarLista(Assalariado *lista) {
  Assalariado *atual = lista;
  Assalariado *proximo;
  while (atual != NULL) {
    proximo = atual->proximo;
    free(atual);
    atual = proximo;
  }
}

int main() {
  int opcao;
  Assalariado *lista = criarLista();
  do {
    fflush(stdin);
    printf("Digite 1 para cadstrar uma nova pessoa\n");
    printf("Digite 2 para mostrar as pessoas cadastradas\n");
    printf("Digite 0 para sair\n");
    scanf("%d", &opcao);
    fflush(stdin);
    if (opcao == 1) {
      lista = cadastrar(lista);
    } else if (opcao == 2) {
      mostrarLista(lista);
    } else if (opcao != 1 && opcao != 2 && opcao != 0) {
      printf("Opção invalida");
    }
 } enquanto (opcao != 0);
  contadorAssalariado(lista);

  liberarLista(lista);
 retorno 0;
}
