// #include "monty.h"

// void parse_line(stack_t **stack, char *line, instruction_t ops[], unsigned int line_number)
// {
//     char *opcode, *argument;

//     opcode = strtok(line, " \t\n");
//     argument = strtok(NULL, " \t\n");

//     for (int i = 0; ops[i].opcode; i++)
//     {
//         if (strcmp(ops[i].opcode, opcode) == 0)
//         {
//             ops[i].f(stack, line_number, argument);
//             return;
//         }
//     }

//     fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
//     exit(EXIT_FAILURE);
// }
