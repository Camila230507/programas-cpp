/*Implemente um programa em C chamado file_tool.c que realize manipulação de
arquivos de texto a partir de parâmetros fornecidos via linha de comando.
O programa deve receber os seguintes comandos:
  <write> <arquivo> <texto>
Cria ou sobrescreve o arquivo indicado, escrevendo o texto fornecido.
  <append> <arquivo> <texto>
Acrescenta o texto ao final do arquivo indicado.
  <read> <arquivo>
Lê o conteúdo do arquivo e o imprime na tela.
Dica: Combine os código de exemplos apresentados em sala.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void write_text_overwrite(const char *filename, const char *text) {
    FILE *f = fopen(filename, "w"); // "w" cria ou sobrescreve
    if (!f) {
        perror("Erro ao abrir arquivo para escrita");
        return;
    }
    fprintf(f, "%s\n", text);
    fclose(f);
}

void append_text(const char *filename, const char *text) {
  FILE *f = fopen(filename, "a"); // "a" abre para append
  if (!f) {
      perror("Erro ao abrir arquivo para append");
      return;
  }
  fprintf(f, "%s\n", text);
  fclose(f);
}

void read_text(const char *filename) {
  FILE *f = fopen(filename, "r");
  if (!f) {
      perror("Erro ao abrir arquivo para leitura");
      return;
  }

  char buffer[256];
  while (fgets(buffer, sizeof(buffer), f)) {
      printf("%s", buffer);
  }

  fclose(f);
}


int main(int argc, char *argv[]) {
  if (argc < 3) {
      printf("Uso:\n");
      printf("  %s write <arquivo> <texto>\n", argv[0]);
      printf("  %s append <arquivo> <texto>\n", argv[0]);
      printf("  %s read <arquivo>\n", argv[0]);
      return 1;
  }


  if (strcmp(argv[1], "write") == 0) {
    if (argc < 4) {
        printf("Erro: faltam argumentos para write\n");
        return 1;
    }
    write_text_overwrite(argv[2], argv[3]);
    printf("Texto escrito (sobrescrevendo) no arquivo %s\n", argv[2]);


  } else if (strcmp(argv[1], "append") == 0) {
      if (argc < 4) {
          printf("Erro: faltam argumentos para append\n");
          return 1;
      }
      append_text(argv[2], argv[3]);
      printf("Texto adicionado ao arquivo %s\n", argv[2]);

  } else if (strcmp(argv[1], "read") == 0) {
    read_text(argv[2]);

  } else {
      printf("Comando desconhecido: %s\n", argv[1]);
  }

    return 0;
}



