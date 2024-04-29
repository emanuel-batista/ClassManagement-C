#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    char email[100];
    float nota[9];
    short semestre; // pode ser 1 ou 2
} aluno;

typedef struct {
    aluno alunos[50];
    char curso[50];
}turma;

typedef struct {
    aluno alunos[50];
    char curso[50];
}turma2;




void adicionarAluno(int *c, turma *turma) {
    int materia=0, aux=0, notaM;//notaM = nota materia
    setbuf(stdin, NULL);
    printf("Digite o nome do aluno: ");
    fgets(turma->alunos[*c].nome, sizeof(turma->alunos[*c].nome), stdin);
    printf("Digite o email do aluno: ");
    fgets(turma->alunos[*c].email, sizeof(turma->alunos[*c].email), stdin);

    do {
        printf("Digite o numero da materia  que deseja atribuir nota: ");
        printf("\n1-Algebra Linear\n2 - Algoritmos II\n3 - APS II\n4 - AOM II\n5 - Atividade de Extensao\n6 - Calculo\n7 - Lab. de Progamacao\n8 - OSM\n9 - Pesquisa Operacional\n>>> ");
        setbuf(stdin, NULL);
        scanf("%d", &materia);
        switch (materia) {
            case 1:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma->alunos[*c].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 2:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma->alunos[*c].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 3:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma->alunos[*c].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 4:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma->alunos[*c].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 5:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma->alunos[*c].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 6:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma->alunos[*c].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 7:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma->alunos[*c].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 8:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma->alunos[*c].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 9:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma->alunos[*c].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            default:
                printf("Opcao invalida!\n");
                setbuf(stdin, NULL);
                break;
        }
        printf("Deseja atribuir outra nota?\n1 - Sim\n2 - Nao\n>>> ");
        scanf("%d", &aux);
        if(aux > 2 || aux < 1){
            printf("Opcao invalida!");
            continue;
        }

    }while(aux != 2);


    (*c)++;
}
void adicionarAluno2(int *d, turma2 *turma2) { //adicionar aluno no segundo semestre
    int materia=0, aux=0, notaM;//notaM = nota materia
    setbuf(stdin, NULL);
    printf("Digite o nome do aluno: ");
    fgets(turma2->alunos[*d].nome, sizeof(turma2->alunos[*d].nome), stdin);
    printf("Digite o email do aluno: ");
    fgets(turma2->alunos[*d].email, sizeof(turma2->alunos[*d].email), stdin);

    do {
        printf("Digite o numero da materia  que deseja atribuir nota: ");
        printf("\n1-Algebra Linear\n2 - Algoritmos II\n3 - APS II\n4 - AOM II\n5 - Atividade de Extensao\n6 - Calculo\n7 - Lab. de Progamacao\n8 - OSM\n9 - Pesquisa Operacional\n>>> ");
        setbuf(stdin, NULL);
        scanf("%d", &materia);
        switch (materia) {
            case 1:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma2->alunos[*d].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 2:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma2->alunos[*d].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 3:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma2->alunos[*d].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 4:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma2->alunos[*d].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 5:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma2->alunos[*d].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 6:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma2->alunos[*d].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 7:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma2->alunos[*d].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 8:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma2->alunos[*d].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            case 9:
                printf("Digite a nota para a materia selecionada: ");
                scanf("%f", &turma2->alunos[*d].nota[materia-1]);
                setbuf(stdin, NULL);
                break;
            default:
                printf("Opcao invalida!\n");
                setbuf(stdin, NULL);
                break;
        }
        printf("Deseja atribuir outra nota?\n1 - Sim\n2 - Nao\n>>> ");
        scanf("%d", &aux);
        if(aux > 2 || aux < 1){
            printf("Opcao invalida!");
            continue;
        }

    }while(aux != 2);


    (*d)++;
}


int main() {
    int a = 0, b = 0, c = 0,d=0;
    turma turma;
    turma2 turma2;

    do {
//        for (int i = 0; i < c; ++i) {
//            printf("Nome: %s", turma.alunos[i].nome);
//        }

        printf("%d", c);
        if (b == 0)
            printf("\n-----Bem-vindo ao gerenciador de turmas!-----");

        fflush(stdin);
        printf("\n***Digite a opcao que deseja executar:*");
        printf("\n|1 - Adicionar um aluno |\n|2 - Encerrar programa  |\n>>> ");
        scanf("%d", &a);

        switch (a) {
            case 1:
                printf("\nDigite o semestre que se matriculou(1 ou 2)");
                scanf("%hd", &turma.alunos[c].semestre);
                if(turma.alunos[c].semestre == 1)
                    adicionarAluno(&c, &turma);
                else if(turma.alunos[c].semestre == 2)
                    adicionarAluno2(&d, &turma2);
                else{
                    printf("Opcao invalida");
                    return 1;
                }
                break;

            case 2:
                printf("\nAte mais!");
                break;

            default:
                printf("Opcao invalida!");
                break;
        }

        b++;
    } while (a != 2);

    return 0;
}