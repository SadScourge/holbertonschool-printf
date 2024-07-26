<h1 style="text-align: center;">Printf Function</h1>

## Description

This project is a simpler recreation of the function printf in C.
It was made for [Holberton School](https://www.holbertonschool.com/)

## Compilation
It was compiled with the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Requirements

- Ubuntu 20
- GCC 11.4
- Git 2.34.1

## Examples

```c
_printf("I love %c language.", C);  
// Affiche "I love C language."
_printf("My name is %s.", Lloyd);  
// Affiche "My name is Lloyd."
_printf("I have 24%% battery left.");  
// Affiche "I have 24% battery left."
_printf("There is %d apple in the basket.", 5);
// Affiche "There is 5 apple in the basket."
```

## Man page

You can access the man page using the following command:
```bash
man ./man_3_printf.1
```

## Testing
We tested the program using `valgrind` with the following command:
```bash
valgrind ./_printf
```
## Flowchart

<img title="flowchart" alt="_printf Flowchart" src="/assets/flowchart.svg">

## Authors
#### [Yanis MEFTOUH](https://github.com/yanis59100)
#### [Benoit MARIN](https://github.com/SadScourge)