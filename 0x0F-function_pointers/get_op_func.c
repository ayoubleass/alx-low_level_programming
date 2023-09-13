#include <stdlib.h>
#include "3-calc.h"
#include "3-get_op_func.c"
#include "3-op_functions.c"

int (*get_op_func(char *s))(int, int)
{
               op_t ops[]  = {
                                {"+", op_add},
                                {"-", op_sub},
                                {"*", op_mul},
                                {"/", op_div},
                                {"%", op_mod},
                                {NULL, NULL}
               };
                int i;

                i = 0;
                while (ops[i].op != NULL)
                {
                        if (ops[i].op == s)
                        {
                                return (ops[i].f);
                        }
                }

                return (NULL);

}
