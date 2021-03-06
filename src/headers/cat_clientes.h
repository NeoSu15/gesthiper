#ifndef CatClientes_H
#define	CatClientes_H
#include <stdbool.h>

#define PAGINA_POSSIVEL 0
#define PAGINA_IMPOSSIVEL -1
#define CAT_CLIENTES_ELEMS_PAG 10

typedef struct catalogo_clientes* CatClientes;
typedef struct iterador_cat_clientes* IT_CAT_CLIENTES;
typedef struct cat_lista_clientes* CAT_LISTA_CLIENTES;
typedef struct cat_paginador_lista_clientes* CAT_PAG_LISTA_CLIENTES;


/*
 * CATALOGO CLIENTES
 */
CatClientes inicializa_catalogo_clientes(void);
void cat_insere_cliente(CatClientes cat, char *str);
void cat_remove_cliente(CatClientes cat, char *str);
void free_catalogo_clientes(CatClientes cat);

/*
 * PESQUISA/CONSULTA DE INFORMAÇÃO GLOBAL
 */
bool cat_existe_cliente(CatClientes cat, char *elem);
int cat_total_clientes(CatClientes cat);
int cat_total_clientes_letra(CatClientes cat, char letra);

/*
 * LISTA CLIENTES
 */
CAT_LISTA_CLIENTES cat_lista_clientes_letra(CatClientes catalogo_clientes, char letra);
char *cat_lista_cli_get_elemento(CAT_LISTA_CLIENTES lista, int p);
int cat_lista_cli_get_num_elems(CAT_LISTA_CLIENTES lista);
void cat_free_lista_clientes(CAT_LISTA_CLIENTES lista);

/*
 * PAGINADOR LISTA DE CLIENTES
 */
CAT_PAG_LISTA_CLIENTES cat_cli_inicializa_paginador_default(CAT_LISTA_CLIENTES lista_cli);
CAT_PAG_LISTA_CLIENTES cat_cli_inicializa_paginador_primeira_pag(CAT_LISTA_CLIENTES lista_cli, int elems_por_pag);
CAT_PAG_LISTA_CLIENTES cat_cli_inicializa_paginador_ultima_pag(CAT_LISTA_CLIENTES lista_cli, int elems_por_pag);
CAT_PAG_LISTA_CLIENTES cat_cli_inicializa_paginador_pag(CAT_LISTA_CLIENTES lista_cli, int n_pag, int elems_por_pag);
int cat_cli_goto_pag(CAT_PAG_LISTA_CLIENTES pag, int num_pag);
int cat_cli_pag_get_num_elems(CAT_PAG_LISTA_CLIENTES pag);
int cat_cli_get_pos_inicio_pag(CAT_PAG_LISTA_CLIENTES pag);
int cat_cli_get_num_pags(CAT_PAG_LISTA_CLIENTES pag);
char *cat_cli_get_elemento_pag(CAT_PAG_LISTA_CLIENTES pag, int n_elem);
int cat_cli_pag_get_num_elems_pag(CAT_PAG_LISTA_CLIENTES pag);
void cat_cli_set_num_elems_por_pag(CAT_PAG_LISTA_CLIENTES pag, int new_elems_por_pag);
int cat_cli_get_elems_por_pag(CAT_PAG_LISTA_CLIENTES pag);
int cat_cli_get_num_pag(CAT_PAG_LISTA_CLIENTES pag);
void cat_cli_free_pag(CAT_PAG_LISTA_CLIENTES pag);

/*
 * ITERADORES CLIENTES
 */
IT_CAT_CLIENTES inicializa_it_cat_clientes(CatClientes cat);
IT_CAT_CLIENTES inicializa_it_cat_clientes_letra(CatClientes cat, char c);
IT_CAT_CLIENTES inicializa_it_cat_clientes_primeiro(CatClientes cat);
IT_CAT_CLIENTES inicializa_it_cat_clientes_ultimo(CatClientes cat);
IT_CAT_CLIENTES inicializa_it_cat_clientes_elem(CatClientes cat, char *st);
IT_CAT_CLIENTES inicializa_it_cat_clientes_primeiro_letra(CatClientes cat, char c);
IT_CAT_CLIENTES inicializa_it_cat_clientes_ultimo_letra(CatClientes cat, char c);
char *it_cat_cliente_proximo(IT_CAT_CLIENTES it);
char *it_cat_cliente_actual(IT_CAT_CLIENTES it);
char *it_cat_cliente_anterior(IT_CAT_CLIENTES it);
char *it_cat_cliente_proximo_letra(IT_CAT_CLIENTES it);
char *it_cat_cliente_anterior_letra(IT_CAT_CLIENTES it);
void free_it_cat_cliente(IT_CAT_CLIENTES it);

#endif	/* CatClientes_H */

