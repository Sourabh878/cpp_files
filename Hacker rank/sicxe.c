#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void passOne() {
    char label[10], opcode[10], operand[10],mnemonic[10];
    int start, locctr;
    char line[100];
    FILE *input, *optab, *symtab, *intermediate;

    input = fopen("PASS1_INPUT_CODE_SIX_XE.txt", "r");
    optab = fopen("PASS1_OPTAB_1.txt", "r");
    symtab = fopen("PASS1_SYMTAB_1.txt", "w");
    intermediate = fopen("PASS1_INTERMEDIATE_CODE_1.txt", "w");

    if (!input || !optab || !symtab || !intermediate) {
        printf("Error: Could not open one or more files.\n");
        exit(1);
    }

    fgets(line, sizeof(line), input);
    sscanf(line, "%s %s %s", label, opcode, operand);
    if (strcmp(opcode, "START") == 0) {
        start = (int)strtol(operand, NULL, 16);
        locctr = start;
        fprintf(intermediate, "%04X\t%s\t%s\t%s\n", locctr, label, opcode, operand);
    } else {
        locctr = 0;
    }

    while (fgets(line, sizeof(line), input) != NULL) {
        sscanf(line, "%s %s %s", label, opcode, operand);

        fprintf(intermediate, "%04X\t%s\t%s\t%s\n", locctr, label, opcode, operand);

        if (strcmp(label, "_") != 0) {
            fprintf(symtab, "%s\t%04X\n", label, locctr);
        }

        rewind(optab);
        int found = 0, format = 3;
        while (fgets(line, sizeof(line), optab) != NULL) {
            sscanf(line, "%s", mnemonic);
            if (strcmp(opcode, mnemonic) == 0) {
                found = 1;
                break;
            }
        }

        if (found) {
            if (strcmp(opcode, "CLEAR") == 0 || strcmp(opcode, "TIXR") == 0 || strcmp(opcode, "ADDR") == 0 || strcmp(opcode, "SUBR") == 0 || strcmp(opcode, "MULR") == 0 || strcmp(opcode, "DIVR") == 0 || strcmp(opcode, "COMPR") == 0 || strcmp(opcode, "SHIFTL") == 0 || strcmp(opcode, "SHIFTR") == 0 || strcmp(opcode, "SVC") == 0 || (opcode[strlen(opcode) - 1] == 'R' && strlen(opcode) <= 5))
            {
                format = 2;
            }
            else if(strcmp(operand, "_") == 0){

                format = 1;
            }
            else if (opcode[0] == '/+') {
                format = 4;
            }

            if (format == 1) {
                locctr += 1;
            } else if (format == 2) {
                locctr += 2;
            } else if (format == 4) {
                locctr += 4;
            } else {
                locctr += 3;
            }
        } else if (strcmp(opcode, "WORD") == 0) {
            locctr += 3;
        } else if (strcmp(opcode, "RESW") == 0) {
            locctr += 3 * atoi(operand);
        } else if (strcmp(opcode, "RESB") == 0) {
            locctr += atoi(operand);
        } else if (strcmp(opcode, "BYTE") == 0) {
            if (operand[0] == 'C') {
                locctr += strlen(operand) - 3;
            } else if (operand[0] == '\X') {
                locctr += (strlen(operand) - 3) / 2;
            }
        }

        if (strcmp(opcode, "END") == 0) {
            break;
        }
    }

    fclose(input);
    fclose(optab);
    fclose(symtab);
    fclose(intermediate);

    int length = locctr-start;
    printf("Length of the program is %04X\n",length);
    printf("Pass 1 completed successfully for SIC.\n");}

int main() {
    passOne();
    return 0;
}
