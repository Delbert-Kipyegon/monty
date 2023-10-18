#include "monty.h"

int main(int argc, char **argv)
{
    FILE *file;
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;
    unsigned int line_number = 0;
    stack_t *stack = NULL;
    instruction_t ops[] = {
        {"push", push},
        {"pall", pall},
        {NULL, NULL}};

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((nread = getline(&line, &len, file)) != -1)
    {
        line_number++;
        parse_line(&stack, line, ops, line_number);
    }

    free(line);
    fclose(file);
    return (EXIT_SUCCESS);
}
