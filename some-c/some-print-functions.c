#include <stdio.h>
#include <stdarg.h>

void testing_variadic(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);

    printf("Format string: %s\n", fmt);

    // Loop to get all extra arguments as char* until NULL (you must ensure to pass NULL at end)
    const char* arg;
    while ((arg = va_arg(ap, const char*)) != NULL) {
        printf("Extra arg: %s\n", arg);
    }

    va_end(ap);
}

int main() {
    testing_variadic("My format", "Fdas", "Hello", "World", NULL);
    return 0;
}
