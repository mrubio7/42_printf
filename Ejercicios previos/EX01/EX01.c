/*Pon aquí los includes que necesites*/

#include <unistd.h>
#include <stdio.h>

char	*ft_strdup(const char *src)
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

/* Definir dos tipos de variable nuevos (pista: typedef)
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

/*Funciones a desarrollar
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
void	ej_1_a(void)
{
	t_box	a;

	a.nb = 7;
	a.c = 'p';
}

t_box	ej_1_b(void)
{
	t_box	b;

	b.nb = 42;
	b.c = 'M';
}

//Ej.2
void	ej_2_a(void)
{
	t_big_box d;

	d.str = ft_strdup("Hola");
	d.nb = 8;
	d.c = 'D';
	d.alias_box_a.c = 'E';
	d.alias_box_a.nb = 9;
}

t_box	ej_2_b(void)
{
	t_big_box e;

	e.str = ft_strdup("Hola");
	e.nb = 8;
	e.c = 'D';
	e.alias_box_a.c = 'E';
	e.alias_box_a.nb = 9;
}

//Ej.3
void	free_tbox(t_big_box *f)
{
	free(f->nb);
	free(f->c);
	free(f->str);
	free(f->alias_box_a.nb);
	free(f->alias_box_a.c);
}

//Ej.4
void	ej_4_a(void)
{
	t_mega_big_box	f;

	f.alias_box_b.nb = 2;
	f.alias_box_b.c = 'R';
	f.alias_big_box.c = 'A';
	f.alias_big_box.nb = 1;
	f.alias_big_box.str = ft_strdup("Hola hola");
	f.alias_big_box.alias_box_a.c = 'C';
	f.alias_big_box.alias_box_a.nb = 9;
}

t_box	ej_4_b(void)
{
	t_mega_big_box	g;

	f.alias_box_b.nb = 5;
	f.alias_box_b.c = 'U';
	f.alias_big_box.c = 'D';
	f.alias_big_box.nb = 6;
	f.alias_big_box.str = ft_strdup("Que tal");
	f.alias_big_box.alias_box_a.c = 'V';
	f.alias_big_box.alias_box_a.nb = 0;
}

//Ej.5
void	free_mega_big_box(t_mega_big_box *h)
{
	free(h->alias_box_b.nb);
	free(h->alias_box_b.c);
	free(h->alias_big_box.c);
	free(h->alias_big_box.nb);
	free(h->alias_big_box.str);
	free(h->alias_big_box.alias_box_a.c);
	free(h->alias_big_box.alias_box_a.nb);
}

//Ej.6
void	print_lower_char(t_mega_big_box *r)
{
	if (r->alias_big_box.alias_box_a.c > r->alias_big_box.c)
		return (r->alias_box_b.c);
	else if (r->alias_big_box.alias_box_a.c == r->alias_big_box.c)
		return (NULL);
	else
		return (r->alias_big_box.alias_box_a.c);
}