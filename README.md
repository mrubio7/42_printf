42Madrid Cursus - ft_printf

## Objetivo

Volver a programar una parte de printf.

`%c` -> ✅<br/>
`%d` -> ✅<br/>
`%i` -> ✅<br/>
`%s` -> ✅<br/>
`%%` -> ✅<br/>
`%p` -> ✅<br/>
`%u` -> ✅<br/>
`%x` -> ✅<br/>
`%X` -> ✅<br/>

*flags*<br/>
`-` -> ✅ en d/i<br/>
`0` -> 🔃<br/>
`.` -> 🔃<br/>
`*` -> ✅ en d/i<br/>

## Uso

El programa usa un Makefile, por lo que con el comando `make` directamente creara un archivo `libftprintf.a` que deberas compilar y ejecutar.

Una vez creado, si quieres eliminar los archivos "*.o" bastará con usar `make clean`
o si también quieres borrar "libftprintf.a" `make fclean`.
