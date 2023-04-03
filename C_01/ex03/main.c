#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int    main(void)
{
    int    a;
    int    b;
    int    *div;
    int    *mod;

    div = &a;
    mod = &b;
    a = 42;
    b = 5;
    ft_div_mod(a, b, div, mod);
    printf("Division = %d\n", *div); // a'nın b'ye bölümünü verir.
    printf("Mod = %d", *mod);   // a'nın b'ye bölümünden kalanı verir.
}
