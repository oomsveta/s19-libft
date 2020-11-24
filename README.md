# Libft
WIP

`Libft` is my very first project as student of the 19 Coding School.

At 19, syscalls are usually the only functions you can use in your code, and you have to build every project on this basis alone. To avoid recoding everything from scratch every time, the guidelines generally allow students to include their own C library: the *Libft*.

The aim of this project is to code your own C library from scratch and, by reimplementing some of the functions from the standard library, to get used with the specification and its most arcana intricacies 🤓 🧙 

The project guidelines are available [here](/subjects/en.subject.pdf); note that this repository is NOT fully-compliant with the requirements, mainly for organizational purposes. Students, be aware, if you steal my code, you'll face the consequences 😈 

## 'ft', 'lw'… Why did you prefix your functions in that way?

All functions starting with the `ft` prefix are mandatory functions, and are prefixed in this way according to the guidelines.

Functions starting with `lw` are my own implementations of standard functions; the prefix aims to distinguish them from those from the libc.

Functions without prefix are just custom functions not based on any specification.

## Why is your coding-style so weird? 🤮

I strictly follow the *Norm* enforced by the school. The Norm is a laundry list of coding conventions that students have to follow to the letter on pain of seeing their work sanctioned with a 0. The Norm forbids for instance the use of `goto`, `do while` and `for` loops, requires to declare every variable at the top of a function, and restrains the number of lines, columns and routines. Such restrictions are sometimes leading to the use of obscure code golf tricks 😅

## Content of the Libft

### Mandatory functions from libc

- [x] atoi
- [x] bzero
- [x] calloc
- [x] isalnum
- [x] isalpha
- [x] isascii
- [x] isdigit
- [x] isprint
- [x] memccpy
- [x] memchr
- [x] memcmp
- [x] memcpy
- [x] memmove
- [x] memset
- [x] strchr
- [x] strdup
- [x] strlcat
- [x] strlcpy
- [x] strlen
- [x] strncmp
- [x] strnstr
- [x] strrchr
- [x] tolower
- [x] toupper

### Additional functions (mandatory)

- [x] itoa
- [x] putchar_fd
- [x] putendl_fd
- [x] putnbr_fd
- [x] putstr_fd
- [x] split
- [x] strjoin
- [x] strmapi
- [x] strtrim
- [x] substr

### Bonus functions

- [x] lstadd_back
- [x] lstadd_front
- [x] lstclear
- [x] lstdelone
- [x] lstiter
- [x] lstlast
- [x] lstmap
- [x] lstnew
- [x] lstsize

### My personal additions

+ lw_isspace
+ lw_isxdigit
+ lw_strcat
+ lw_strcspn
+ lw_strpbrk
+ lw_strspn
+ lw_strtol
+ repeat
+ skip_whitespaces
+ trim
+ trim_end
+ trim_start