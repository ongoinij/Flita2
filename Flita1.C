#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    FILE *file1;
    FILE *file2;
    int first, second;
    file1 = fopen("C:\\GraphProject\\1\\forgraph1.txt", "r");
    file2 = fopen("C:\\GraphProject\\1\\forgraph1.dot", "w");
    fprintf(file2, "graph{\n");
    while (fscanf(file1, "%d %d", &first, &second) != EOF) 
    {
        fprintf(file2, "%d -- %d\n", first, second);
    }
    fprintf(file2, "}\n");
    fclose(file1);
    fclose(file2);
    system("dot -Tpng -O C:\\GraphProject\\1\\forgraph1.dot");
    system("C:\\GraphProject\\1\\forgraph1.dot.png");
    return 0;
}