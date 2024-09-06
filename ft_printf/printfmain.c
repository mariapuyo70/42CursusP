

int main()
{
        int i;
        int     j;

        i = 0;
        j = 0;
        //prueba
        // printf("Hola");
        ft_printf("prueba de ft_print:\n");
        j = ft_printf("myprintf: cadena de caracteres: %s, myprintf: puntero: %p\n", "hola punky", (void *) 0x12345678);
        i = printf("printf: cadena de caracteres: %s, printf: puntero: %p\n", "hola punky", (void *) 0x12345678);
        printf("printf : %i\nmyprintf : %i\n\n", i, j);

        j = ft_printf("myprintf: puntero: %p\n", (void *) 0x12345678);
        i = printf("printf: puntero: %p\n", (void *) 0x12345678);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);
        
        j = ft_printf("myprintf: puntero: %p\n", (void *) 0x0);
        i = printf("printf: puntero: %p\n", (void *) 0x0);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

        j = ft_printf("myprintf: numero hexadecimal: %x\n", -254639852);
        i = printf("printf: numero hexadecimal: %x\n", -254639852);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

        j = ft_printf("myprintf: numero en formato decimal: %i\n", 2546);
        i = printf("printf: numero en formato decimal: %i\n", 2546);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

        j = ft_printf("myprintf: numero entero: %d\n", 42);
        i = printf("printf: numero entero: %d\n", 42);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

        j = ft_printf("myprintf: unsigned %u\n", 5);
        i = printf("printf: unsigned %u\n", 5);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);
		
 		j = ft_printf("myprintf: char %c\n", 'b');
        i = printf("printf: char %c\n", 'b');
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

}
