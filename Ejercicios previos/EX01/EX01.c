/*Pon aquí los includes que necesites*/

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

*/

int main()
{
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
		t_box	boxA;
	}t_big_box;

	typedef struct t_mega_big_box
	{
		t_box		boxB;
		t_big_box	big_boxA;
	}t_mega_big_box;

////////////////////////////////////// Ej. 1
//{ } 2 funciones que inicialicen una variable del tipo 't_box' (una función ha de ser tipo void y otra tipo 't_box')

	void	ft_init_t_box_a(void)
	{
		t_box	a;
	}

	t_box	ft_init_t_box_b(void)
	{
		t_box	a;
	}

////////////////////////////////////// Ej. 2
//{ } 2 funciones que inicialicen una variable del tipo 't_big_box' (una función ha de ser tipo void y otra tipo 't_box')

	void	ft_init_t_big_box_a(void)
	{
		t_big_box	a;
	}

	t_box	ft_init_t_big_box_b(void)
	{
		t_big_box	a;
	}

////////////////////////////////////// Ej. 3
//{ } Función que limpie la posible memoria reservada de una 't_big_box'

	void	ft_free_t_big_box(t_big_box *r)
	{
		free((*r)->str);
		free((*r)->nb);
		free((*r)->c);
		free((*r)->boxA->nb);
		free((*r)->boxA->c);
	}

////////////////////////////////////// Ej. 4
//{ } 2 funciones que inicialicen una variable del tipo 't_mega_big_box' (una función ha de ser tipo 'void' y otra tipo 't_box')

	void	ft_init_t_mega_big_box_a(void)
	{
		t_mega_big_box a;
	}

	t_box	ft_init_t_big_box_b(void)
	{
		t_mega_big_box a;
	}

////////////////////////////////////// Ej. 5
//{ } Función que limpie la posible memoria reservada de una 't_mega_big_box'

	void	ft_free_t_mega_big_box(t_mega_big_box *s)
	{
		free((*s)->boxB->nb);
		free((*s)->boxB->c);
		free((*s)->big_boxA->(*str));
		free((*s)->big_boxA->nb);
		free((*s)->big_boxA->c);
		free((*s)->big_boxA->boxA->nb));
		free((*s)->big_boxA->boxA->c));
	}

////////////////////////////////////// Ej. 6
//{ } Función que dada una 't_mega_big_box' imprima el carácter con menor valor ASCII de las dos 't_box' que contiene

	char	ft_print_lower_char(struct *t_mega_big_box)
	{
		if ((*t_mega_big_box)->boxB->c < (*t_mega_big_box)->big_boxA->c)
			return ((*t_mega_big_box)->boxB->c);
		else if ((*t_mega_big_box)->boxB->c == (*t_mega_big_box)->big_boxA->c)
			return (NULL);
		else
			return ((*t_mega_big_box)->big_boxA->c);
	}
}
