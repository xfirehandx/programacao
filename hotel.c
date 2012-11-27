#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>



// Função Gotoxy: muda o cursor para a posição x,y na tela
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
// definir estruturas
typedef struct{ //definir estrutura de reserva
        char nome_res[100];
        int res_cod;
        int num_quartos;
        int res_chegada;
        int num_noites;
        int res_preco;
}reserva;

typedef struct{ //definir estrutura de reserva
        int estado;
        char nome_hos[100];
        int qua_entrada;
        int num_quartos;
        int qua_chegada;
        int qua_saida;
        int res_preco;
        int chave;
}quarto;

menureservas()
{
    char op;
 do{
        system("cls");
        gotoxy(10,6);
        printf("(1) - Fazer uma Reservas");
        gotoxy(10,8);
        printf("(2) - Anular uma Reserva");
        gotoxy(10,10);
        printf("(3) - Listar Reservas");
        gotoxy(10,12);
        printf("(4) - Listar uma Reserva");
        gotoxy(10,14);
        printf("(5) - Listar uma Reserva");
        gotoxy(10,18);
        printf("Introduza uma opcao valida: ");
        scanf("%c",&op);
        switch(op)
        {
            case '1':
            {
                menureservas();
                break;
            }
            case '2':
            {
                menurecepcao();
                break;
            }
            case '3':
            {
                menureservas();
                break;
            }
            case '4':
            {
                menurecepcao();
                break;
            }
            case '5':
            {
                menurecepcao();
                break;
            }
        }



    }while(1);
}

 menurecepcao()
 {
char op;
 do{
        system("cls");
        gotoxy(10,6);
        printf("(1) - Realizar Check-IN");
        gotoxy(10,8);
        printf("(2) - Realizar Check-OUT");
        gotoxy(10,10);
        printf("(3) - Carregar ficheiros");
        gotoxy(10,12);
        printf("Introduza uma opcao valida: ");
        scanf("%c",&op);
        switch(op)
        {
            case '1':
            {
                menureservas();
                break;
            }
            case '2':
            {
                menurecepcao();
                break;
            }
            case '3':
            {
                menureservas();
                break;
            }
            case '4':
            {
                menurecepcao();
                break;
            }
            case '5':
            {
                menurecepcao();
                break;
            }
        }



    }while(1);
}




main()
{

    quarto quartoshotel[20];
    reserva reservashotel[4000];
    int datasreserva[12][31];
    FILE *fpdata,*fpreserv,*fpquart;
    char op;
    fpdata=fopen("datasreservas.txt","a+");
    fpreserv=fopen("reservashotel.txt","a+");
    fpquart=fopen("quartohotel.txt","a+");
    do{

        gotoxy(10,10);
        printf("(1) - Reservas");
        gotoxy(10,12);
        printf("(2) - Recepcao");
        gotoxy(10,18);
        printf("Introduza uma opcao valida: ");
        scanf("%c",&op);
        switch(op)
        {
            case '1':
            {
                menureservas();
                break;
            }
            case '2':
            {
                menurecepcao();
                break;
            }
        }



    }while(1);





}
