#include <stdio.h>

int main() {
  FILE *sourceFile, *targetFile;
  char ch;

  // Open the source file in read mode
  sourceFile = fopen("source.txt", "r");
  if (sourceFile == NULL) {
    printf("Unable to open source file.\n");
    return 1;
  }

  // Open the target file in write mode
  targetFile = fopen("target.txt", "w");
  if (targetFile == NULL) {
    printf("Unable to create target file.\n");
    fclose(sourceFile);
    return 1;
  }

  // Copy contents from source file to target file
  while ((ch = fgetc(sourceFile)) != EOF) {
    fputc(ch, targetFile);
  }

  printf("File copied successfully.\n");

  // Close the files
  fclose(sourceFile);
  fclose(targetFile);

  return 0;
}
