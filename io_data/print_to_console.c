#include <stdio.h>

// declare prototypes
void print_text_to_console(void);
void print_text_to_console_2(void);
void print_int_var_to_console(void);
void print_int_vars_to_console(void);
void print_several_data_types_to_console(void);

// initiate main
int main(void) {
    print_several_data_types_to_console();
    return 0;
}

// print text to console
void print_text_to_console(void) {
    printf("Programming is fun!!!\n");
}

void print_text_to_console_2(void) {
    printf("Programming is fun!!!\n");
    printf("And programming C is even more fun.\n");
}

// print variables to console
void print_int_var_to_console(void) {
    int sum = 10 + 5;
    printf("The sum of 10 and 5 is %i\n",sum);
}

void print_int_vars_to_console(void) {
    int 
        a = 5, 
        b = 10, 
        sum = a + b;
    printf("The sum of %d and %d is %d\n",a,b,sum);
}

void print_several_data_types_to_console(void) {
    int interger_var = 100;
    float float_var = 1.5;
    double double_var = 8.44e+10;
    char char_var = 'W';
    _Bool bool_var = 5;

    printf("integer = %i\n", interger_var);
    printf("float = %f\n", float_var);
    printf("double = %e\n", double_var);
    printf("char = %c\n", char_var);
    printf("bool = %i\n", bool_var);
}