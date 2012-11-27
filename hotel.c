#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
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

main()
{


  system("PAUSE");
  return 0;
}
