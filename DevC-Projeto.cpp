#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX_PRODUTOS 100
#define NOME_MAX 50
#define MAX_CATEGORIAS 13

// Enum para representar as categorias
typedef enum {	
	HORTIFRUTI,
    GRAOS,
    FRIOS,
    BEBIDAS,
    CONDIMENTOS,
    LIMPEZA,
    ULTRAPROCESSADOS,
    MASSAS,
    EMBALAGENS,
    CARNES,
    BOMBONIERE,
} CategoriaEnum;

typedef struct {
    int id;
    char nome[NOME_MAX];
    float preco;
} Produto;

typedef struct {
    Produto produtos[MAX_PRODUTOS];
    int total_produtos;
} Mercado;

void inicializarHortifrutis(Mercado *mercado) { 
	setlocale(LC_ALL, "");
	Produto p1 = {1, "Maçã", 9.00};
    Produto p2 = {2, "Laranja", 7.50};
    Produto p3 = {3, "Pera", 6.99};
    Produto p4 = {4, "Uva", 5.50};
    Produto p5 = {5, "Abacaxi", 7.99};

    mercado->produtos[mercado->total_produtos++] = p1;
    mercado->produtos[mercado->total_produtos++] = p2;
    mercado->produtos[mercado->total_produtos++] = p3;
    mercado->produtos[mercado->total_produtos++] = p4;
    mercado->produtos[mercado->total_produtos++] = p5;
}

void inicializarGraos(Mercado *mercado) {
    Produto p1 = {6, "Arroz", 6.50};
    Produto p2 = {7, "Feijão", 7.50};
    Produto p3 = {8, "Lentilha", 5.50};
    Produto p4 = {9, "Milho", 4.99};
    Produto p5 = {10, "Café", 6.50};

    mercado->produtos[mercado->total_produtos++] = p1;
    mercado->produtos[mercado->total_produtos++] = p2;
    mercado->produtos[mercado->total_produtos++] = p3;
    mercado->produtos[mercado->total_produtos++] = p4;
    mercado->produtos[mercado->total_produtos++] = p5;
}

void inicializarFrios(Mercado *mercado) {
    Produto p1 = {11, "Presunto", 5.50};
    Produto p2 = {12, "Queijo", 5.50};
    Produto p3 = {13, "Iogurte", 7.50};
    Produto p4 = {14, "Manteiga", 6.50};
    Produto p5 = {15, "Polpa de fruta", 2.99};

    mercado->produtos[mercado->total_produtos++] = p1;
    mercado->produtos[mercado->total_produtos++] = p2;
    mercado->produtos[mercado->total_produtos++] = p3;
    mercado->produtos[mercado->total_produtos++] = p4;
    mercado->produtos[mercado->total_produtos++] = p5;
}

void inicializarBebidas(Mercado *mercado) {
    Produto p1 = {16, "Refrigerante", 7.50};
    Produto p2 = {17, "Água mineral", 3.00};
    Produto p3 = {18, "Sucos", 5.00};
    Produto p4 = {19, "Achocolatado", 6.00};
    Produto p5 = {20, "Cerveja", 7.00};

    mercado->produtos[mercado->total_produtos++] = p1;
    mercado->produtos[mercado->total_produtos++] = p2;
    mercado->produtos[mercado->total_produtos++] = p3;
    mercado->produtos[mercado->total_produtos++] = p4;
    mercado->produtos[mercado->total_produtos++] = p5;
}

void inicializarCondimentos(Mercado *mercado) {
    Produto p1 = {21, "Sal", 5.00};
    Produto p2 = {22, "Pimenta", 3.99};
    Produto p3 = {23, "Azeite", 6.99};
    Produto p4 = {24, "Ketchup", 4.99};
    Produto p5 = {25, "Mostarda", 4.99};

    mercado->produtos[mercado->total_produtos++] = p1;
    mercado->produtos[mercado->total_produtos++] = p2;
    mercado->produtos[mercado->total_produtos++] = p3;
    mercado->produtos[mercado->total_produtos++] = p4;
    mercado->produtos[mercado->total_produtos++] = p5;
}

void inicializarLimpezas(Mercado *mercado) {
    Produto p1 = {26, "Amaciante", 23.90};
    Produto p2 = {27, "Desinfetante", 16.00};
    Produto p3 = {28, "Água sanitária", 12.99};
    Produto p4 = {29, "Detergente", 7.99};
    Produto p5 = {30, "Naftalina", 5.50};

    mercado->produtos[mercado->total_produtos++] = p1;
    mercado->produtos[mercado->total_produtos++] = p2;
    mercado->produtos[mercado->total_produtos++] = p3;
    mercado->produtos[mercado->total_produtos++] = p4;
    mercado->produtos[mercado->total_produtos++] = p5;
}

void inicializarUltraprocessados(Mercado *mercado) {
    Produto p1 = {31, "Batata frita", 15.00};
    Produto p2 = {32, "Biscoito recheado", 2.99};
    Produto p3 = {33, "Salsicha", 5.99};
    Produto p4 = {34, "Salgadinho", 2.99};
    Produto p5 = {35, "Bolo pronto", 6.99};

    mercado->produtos[mercado->total_produtos++] = p1;
    mercado->produtos[mercado->total_produtos++] = p2;
    mercado->produtos[mercado->total_produtos++] = p3;
    mercado->produtos[mercado->total_produtos++] = p4;
    mercado->produtos[mercado->total_produtos++] = p5;
}

void inicializarMassas(Mercado *mercado) {
    Produto p1 = {36, "Espaguete", 3.49};
    Produto p2 = {37, "Miojo", 1.50};
    Produto p3 = {38, "Macarrão Parafuso", 4.99};
    Produto p4 = {39, "Lasanha", 7.00};
    Produto p5 = {40, "Pão", 0.50};

    mercado->produtos[mercado->total_produtos++] = p1;
    mercado->produtos[mercado->total_produtos++] = p2;
    mercado->produtos[mercado->total_produtos++] = p3;
    mercado->produtos[mercado->total_produtos++] = p4;
    mercado->produtos[mercado->total_produtos++] = p5;
}

void inicializarEmbalagens(Mercado *mercado) {
    Produto p1 = {41, "Prato descartável", 5.00};
    Produto p2 = {42, "Copo descartável", 5.00};
    Produto p3 = {43, "Talher descartável", 3.00};
    Produto p4 = {44, "Saco de papel", 3.99};
    Produto p5 = {45, "Plástico filme", 2.99};

    mercado->produtos[mercado->total_produtos++] = p1;
    mercado->produtos[mercado->total_produtos++] = p2;
    mercado->produtos[mercado->total_produtos++] = p3;
    mercado->produtos[mercado->total_produtos++] = p4;
    mercado->produtos[mercado->total_produtos++] = p5;
}

void inicializarCarnes(Mercado *mercado) {
    Produto p1 = {46, "Picanha", 50.69};
    Produto p2 = {47, "Fraldinha", 32.99};
    Produto p3 = {48, "Contrafilé", 33.99};
    Produto p4 = {49, "Alcatra", 40.99};
    Produto p5 = {50, "Músculo", 21.00};

    mercado->produtos[mercado->total_produtos++] = p1;
    mercado->produtos[mercado->total_produtos++] = p2;
    mercado->produtos[mercado->total_produtos++] = p3;
    mercado->produtos[mercado->total_produtos++] = p4;
    mercado->produtos[mercado->total_produtos++] = p5;
}

void inicializarBomboniere(Mercado *mercado) {
    Produto p1 = {51, "Fini de Banana", 7.89};
    Produto p2 = {52, "Chocolate Hershey's ao Leite", 9.49};
    Produto p3 = {53, "Fini de Beijos", 7.99};
    Produto p4 = {54, "Chocolate Alpino", 10.00};
    Produto p5 = {55, "Paçoquita", 23.50};

    mercado->produtos[mercado->total_produtos++] = p1;
    mercado->produtos[mercado->total_produtos++] = p2;
    mercado->produtos[mercado->total_produtos++] = p3;
    mercado->produtos[mercado->total_produtos++] = p4;
    mercado->produtos[mercado->total_produtos++] = p5;
}

void adicionarProduto(Mercado *mercado) {
    if (mercado->total_produtos < MAX_PRODUTOS) {
        Produto p;
        printf("Digite o ID do produto: ");
        scanf("%d", &p.id);
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]", p.nome);
        printf("Digite o preço do produto: ");
        scanf("%f", &p.preco);

        mercado->produtos[mercado->total_produtos++] = p;
        printf("Produto adicionado com sucesso!\n");
    } else {
        printf("Mercado cheio! Não é possível adicionar mais produtos.\n");
    }
}

void removerProduto(Mercado *mercado) {
    int id;
    printf("Digite o ID do produto a ser removido: ");
    scanf("%d", &id);

    for (int i = 0; i < mercado->total_produtos; i++) {
        if (mercado->produtos[i].id == id) {
            for (int j = i; j < mercado->total_produtos - 1; j++) {
                mercado->produtos[j] = mercado->produtos[j + 1];
            }
            mercado->total_produtos--;
            printf("Produto removido com sucesso!\n");
            return;
        }
    }
    printf("Produto não encontrado!\n");
}

void listarProdutos(Mercado mercado) {
    printf("Lista de Produtos:\n");
    for (int i = 0; i < mercado.total_produtos; i++) {
        printf("ID: %d, Nome: %s, Preço: %.2f R$\n",
               mercado.produtos[i].id,
               mercado.produtos[i].nome,
               mercado.produtos[i].preco);
    }
}


void gerenciarCategoria(Mercado *mercado) {
    int opcao;
    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Adicionar Produto\n");
        printf("2. Remover Produto\n");
        printf("3. Listar Produtos\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarProduto(mercado);
                break;
            case 2:
                removerProduto(mercado);
                break;
            case 3:
                listarProdutos(*mercado);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);
}

int main() {
    Mercado mercados[MAX_CATEGORIAS] = {{{0}}, 0};

    inicializarHortifrutis(&mercados[HORTIFRUTI]);
    inicializarGraos(&mercados[GRAOS]);
    inicializarFrios(&mercados[FRIOS]);
    inicializarBebidas(&mercados[BEBIDAS]);
    inicializarCondimentos(&mercados[CONDIMENTOS]);
    inicializarLimpezas(&mercados[LIMPEZA]);
    inicializarUltraprocessados(&mercados[ULTRAPROCESSADOS]);
    inicializarMassas(&mercados[MASSAS]);
    inicializarEmbalagens(&mercados[EMBALAGENS]);
    inicializarCarnes(&mercados[CARNES]);
    inicializarBomboniere(&mercados[BOMBONIERE]);

    int opcao;
    do {
        printf("\nEscolha uma categoria:\n");
        printf("0. Sair\n");
        printf("1. Hortifruti\n");
        printf("2. Grãos\n");
        printf("3. Frios\n");
        printf("4. Bebidas\n");
        printf("5. Condimentos\n");
        printf("6. Limpeza\n");
        printf("7. Ultraprocessados\n");
        printf("8. Massas\n");
        printf("9. Embalagens\n");
        printf("10. Carnes\n");
        printf("11. Bomboniere\n");
        printf("Escolha uma categoria: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= MAX_CATEGORIAS) {
            gerenciarCategoria(&mercados[opcao - 1]);
        } else if (opcao != 0) {
            printf("Opção inválida!\n");
        }
    } while (opcao != 0);
}
