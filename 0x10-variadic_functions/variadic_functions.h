#ifndef __VARIADIC_FUNCTIONS_H_
#define __VARIADIC_FUNCTIONS_H_
typedef struct print_types
{
    char arg;
    void (*print_func)(va_list);
} p_type;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif /* __VARIADIC_FUNCTIONS_H_ */
