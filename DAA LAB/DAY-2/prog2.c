#include <stdio.h>
#include <stdlib.h>

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Usage: %s input_file output_file\n", argv[0]);
        return 1;
    }

    FILE *input, *output;
    input = fopen(argv[1], "r");
    if (input == NULL) {
        perror("Error in File Opening");
        return -1;
    }

    output = fopen(argv[2], "w");
    if (output == NULL) {
        perror("Error in opening the file");
        fclose(input); // Close the input file before returning
        return -1;
    }

    int no = 0;
    int count_no = 1;
    int no_1 = 0, no_2 = 0;
    while (fscanf(input, "%d", &no) == 1) {
        if (count_no % 2 == 1) {
            no_1 = no;
        } else if (count_no % 2 == 0) {
            no_2 = no;
            fprintf(output, "The GCD of %d and %d is %d\n", no_1, no_2,hcf(no_1, no_2));
        }
        count_no++;
    }

    fclose(input);
    fclose(output);

    return 0;
}
