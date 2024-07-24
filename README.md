<h1 style="text-align: center;">Printf Function</h1>

This project is a simpler recreation of the function printf in C.
It was made for [Holberton School](https://www.holbertonschool.com/)

## Compilation
It was compiled with the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Requirements

- Ubuntu 20
- GCC
- Git

## examples

```c
_printf("Il y a %d pommes dans le panier.", 5);
// Affiche "Il y a 5 pommes dans le panier."
_printf("Le prix est %.2f euros.", 12.3456);  
// Affiche "Le prix est 12.35 euros.
```

## Man page


## Testing
We tested the program using `valgrind` with the following command:
```bash
valgrind ./_printf
```
## Flowchart

## Authors
#### [Yanis MEFTOUH](https://github.com/yanis59100)
#### [Benoit MARIN](https://github.com/SadScourge)