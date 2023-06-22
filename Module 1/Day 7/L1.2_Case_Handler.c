#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void changeCase(FILE *sourceFile, FILE *targetFile, char option) {
  int ch;
  while ((ch = fgetc(sourceFile)) != EOF) {
    if (option == 'u')
      fputc(toupper(ch), targetFile);
    else if (option == 'l')
      fputc(tolower(ch), targetFile);
    else if (option == 's') {
      if (islower(ch))
        fputc(toupper(ch), targetFile);
      else
        fputc(ch, targetFile);
    }
    else
      fputc(ch, targetFile);
  }
}

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Insufficient arguments.\n");
    printf("Usage: ./cp <option> <source-file> <target-file>\n");
    printf("Options:\n");
    printf("-u : Change file content to Upper Case\n");
    printf("-l : Change file content to Lower Case\n");
    printf("-s : Change file content to Purely Upper Case\n");
    return 1;
  }

  char *option = argv[1];
  char *sourceFileName = argv[2];
  char *targetFileName = argv[3];

  FILE *sourceFile = fopen(sourceFileName, "r");
  if (sourceFile == NULL) {
    printf("Unable to open source file.\n");
    return 1;
  }

  FILE *targetFile = fopen(targetFileName, "w");
  if (targetFile == NULL) {
    printf("Unable to create target file.\n");
    fclose(sourceFile);
    return 1;
  }

  if (strcmp(option, "-u") == 0 || strcmp(option, "-l") == 0 || strcmp(option, "-s") == 0) {
    changeCase(sourceFile, targetFile, option[1]);
  } else {
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
      fputc(ch, targetFile);
    }
  }

  printf("File copied successfully.\n");

  fclose(sourceFile);
  fclose(targetFile);

  return 0;
}
