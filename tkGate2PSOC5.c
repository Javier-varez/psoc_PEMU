

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>


int main(int argc, char const *argv[]) {
  if (argc < 3)  {
    fprintf(stderr, "Not enough arguments provided.\n\tArg. 1: source file\n\tArg. 2: destination file\n");
    return 0;
  }
  // Open files
  FILE *originalFile = fopen(argv[1], "r");
  if (originalFile == NULL) {
    printf("Source file doesn't exist\n");
    return 0;
  }
  FILE *newFile = fopen(argv[2], "w");


  char string[1001];

  uint8_t addrmap[256];

  int i,j;
  for (i = 0; i < 16; i++) {
    for (j = 0; j < 16; j++) {
	  addrmap[16*i+j] = 0;
    }
  }


  while (!feof(originalFile)) {
    fgets(string, 1000, originalFile);

    // If End; was found, exit loop
    //if (strstr(string, "End;")) break;

    // Search substring
    char *addr = strstr(string, "8'h");
    char *inst = strstr(string, "mem_rom");

    if (addr) {
      addr = &addr[3];
      addr[2] = 0x00;
    }
    if (inst) {
      inst = &inst[12];
      inst[2] = 0x00;
    }

	  if (addr && inst) {
      uint8_t dir = strtol(addr, NULL, 16);
      printf("addr: %s, %x\n",addr, dir);
      uint8_t instint = strtol(inst, NULL, 16);
      printf("inst: %s, %x\n", inst, instint);
    	addrmap[dir] = instint;
    }

  }


  fprintf(newFile, "Version, 1\n");
  for (i = 0; i < 16; i++) {
    for (j = 0; j < 16; j++) {
	  if(j==15)
        fprintf(newFile, "0x%02x", addrmap[16*i + j]);
      else
	  	fprintf(newFile, "0x%02x, ", addrmap[16*i + j]);
    }
    fprintf(newFile, "\n");
  }

  // Close file and free memory.
  fclose(originalFile);
  fclose(newFile);
  return 0;
}
