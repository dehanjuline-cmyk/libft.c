*This project has been created as part of the 42 curriculum by <jdehan>.*

#Description

Libft est le tout premier projet du cursus 42.
L’objectif est de recréer une bibliothèque standard en C en réimplémentant des fonctions classiques de la libc ainsi que des fonctions utilitaires supplémentaires.

Ce projet permet de développer une compréhension approfondie de :

la gestion de la mémoire

la manipulation de chaînes de caractères

les pointeurs

les structures de données

les listes chaînées

l’écriture d’un code propre, modulaire et réutilisable

La bibliothèque générée (libft.a) sera réutilisée dans la majorité des projets suivants du cursus.

#Instructions
##Compilation

```bash
make
```
Génère le fichier :

libft.a

Règles disponibles
make        # compile la librairie
make clean  # supprime les fichiers objets (.o)
make fclean # supprime .o + libft.a
make re     # recompile entièrement

Utilisation

Inclure le header :

#include "libft.h"

Compiler avec :

cc main.c libft.a

Contenu de la bibliothèque
Partie 1 — Fonctions libc réimplémentées
isalpha   isdigit   isalnum   isascii   isprint
strlen    memset    bzero     memcpy    memmove
strlcpy   strlcat   toupper   tolower
strchr    strrchr   strncmp   memchr    memcmp
strnstr   atoi      calloc    strdup

Partie 2 — Fonctions supplémentaires
ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_itoa
ft_strmapi
ft_striteri
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd

Ces fonctions facilitent la manipulation de chaînes, la gestion mémoire et l’écriture vers des descripteurs de fichiers.

Partie 3 — Listes chaînées

Structure utilisée :

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;


Fonctions disponibles :

ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap

Ces fonctions permettent de créer, modifier et parcourir des listes chaînées simplement.

Choix techniques

librairie statique créée avec ar

aucune variable globale

gestion stricte des erreurs

aucune fuite mémoire

compilation avec -Wall -Wextra -Werror

respect de la Norm 42

fonctions helpers déclarées static

#Resources

Références utilisées

pages man (man strlen, man malloc, etc.)

documentation officielle C

cppreference.com

sujet Libft (intranet 42)

Utilisation de l’IA

L’IA a été utilisée uniquement pour :

aide à la rédaction du README

clarifications théoriques

Toutes les fonctions et l’implémentation du code ont été écrites et comprises manuellement afin de garantir l’apprentissage.
