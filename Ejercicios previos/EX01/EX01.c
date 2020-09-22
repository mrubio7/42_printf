/*Pon aquí los includes que necesites*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void			*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char		*s;
	char		*d;

	if (!dest && !src)
		return (NULL);
	s = (char *)src;
	d = dest;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}

unsigned int	ft_strlen(const char *str)
{
	int x;

	x = 0;
	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}

char			*ft_strdup(const char *src)
{
	char	*s;
	int		x;

	x = ft_strlen(src) + 1;
	if ((s = malloc(x)) == NULL)
		return (NULL);
	if (src == NULL)
	{
		free(s);
		return (NULL);
	}
	ft_memcpy(s, src, x);
	return (s);
}

/*Funciones permitidas:
	- ft_strdup
	- write
	- printf (para pruebas)

Definir dos tipos de variable nuevos (pista: typedef)
	{ } t_box: Struct que contenga:
		-un entero: nb
		-un caracter: c
	{ } t_big_box: Struct que contenga:
		-un entero: nb
		-un caracter: c
		-un string: str
		-una variable del tipo 't_box': box
	{ } t_mega_big_box: Struct que contenga:
		-una variable del tipo 't_box': box
		-una variable del tipo 't_big_box': big_box

Funciones a desarrollar
{ } 2 funciones que inicialicen una variable del tipo 't_box' (una función ha de ser tipo void y otra tipo 't_box')
{ } 2 funciones que inicialicen una variable del tipo 't_big_box' (una función ha de ser tipo void y otra tipo 't_box')
{ } Función que limpie la posible memoria reservada de una 't_big_box'
{ } 2 funciones que inicialicen una variable del tipo 't_mega_big_box' (una función ha de ser tipo 'void' y otra tipo 't_box')
{ } Función que limpie la posible memoria reservada de una 't_mega_big_box'
{ } Función que dada una 't_mega_big_box' imprima el carácter con menor valor ASCII de las dos 't_box' que contiene
*/

typedef struct t_box
{
	int		nb;
	char	c;
}t_box;

typedef struct t_big_box
{
	char	*str;
	int		nb;
	char	c;
	t_box	alias_box_a;
}t_big_box;

typedef struct t_mega_big_box
{
	t_box		alias_box_b;
	t_big_box	alias_big_box;
}t_mega_big_box;


//Ej.1
void	ej_1_a(int x, char c)
{
	t_box	a;

	a.nb = x;
	a.c = c;
}

t_box	ej_1_b(int x, char c)
{
	t_box	b;

	b.nb = x;
	b.c = c;
	return (b);
}

//Ej.2
void	ej_2_a(int xx, char cc, char *str)
{
	t_big_box	d;

	d.str = str;
	d.nb = xx;
	d.c = cc;
	d.alias_box_a = ej_1_b(xx, cc);
}
//_____________________________________________________________________
//No se que devolver
t_box	ej_2_b(int xx, char cc, char *str)
{
	t_big_box	e;

	e.str = str;
	e.nb = xx;
	e.c = cc;
	e.alias_box_a = ej_1_b(xx, cc);
	return (e.alias_box_a);
}
//_____________________________________________________________________

//Ej.3
void	free_tbox(t_big_box *t)
{
	free(t);
}

//Ej.4
void	ej_4_a(int xxx, int xxxx, char ccc, char cccc, char *str)
{
	t_mega_big_box	p;

	p.alias_box_b = ej_1_b(xxx, ccc);
	p.alias_big_box.alias_box_a = ej_2_b(xxxx, cccc, str);
}
//_____________________________________________________________________
//No se que devolver
t_box	ej_4_b(int xxx, int xxxx, char ccc, char cccc, char *str)
{
	t_mega_big_box	o;

	o.alias_box_b = ej_1_b(xxx, ccc);
	o.alias_big_box.alias_box_a = ej_2_b(xxxx, cccc, str);
	return (o¿?);
}
//_____________________________________________________________________

//Ej.5
void	free_mega_big_box(t_mega_big_box *h)
{
	free(h);
}

//Ej.6
char	print_lower_char(t_mega_big_box *r)
{
	if (r->alias_big_box.alias_box_a.c > r->alias_big_box.c)
		return (r->alias_box_b.c);
	else if (r->alias_big_box.alias_box_a.c == r->alias_big_box.c)
		return ('=');
	else
		return (r->alias_big_box.alias_box_a.c);
}


int		main(void)
{
	t_mega_big_box z;

	z = ej_4_b(42, 21, 'P', 'F', "Hola");
	printf("%c", print_lower_char(&z));
}