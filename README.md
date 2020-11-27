# Libft

***Libft*** is my very first project as a student of the 19 Coding School.

At 19, syscalls are usually the only functions you can use in your code, and you have to build every project on this basis alone. To avoid recoding everything from scratch every time, the guidelines generally allow students to include their own C library: the *Libft*.

The aim of this project is to code your own C library from scratch and, by reimplementing some of the functions from the standard library, to get used with the specification and its most arcane intricacies 🤓 🧙 

The project guidelines are available [here](/subjects/en.subject.pdf); note that this repository is NOT fully-compliant with the requirements, mainly for organizational purposes. Students, be aware, if you steal my code, you'll face the consequences 😈 

## 'ft', 'lw'… Why did you prefix your functions in that way?

All functions starting with `ft` are mandatory functions, and are prefixed in this fashion according to the guidelines.

Functions starting with `lw` are my own implementations of standard functions; the prefix aims to distinguish them from those from the libc.

Functions without prefix are just custom functions not based on any specification.

## Why is your coding-style so weird? 🤮

I strictly follow the *Norm* enforced by the school. The Norm is a laundry list of coding conventions that students have to follow to the letter on pain of seeing their work sanctioned with a 0. The Norm forbids for instance the use of `goto`, `do while` and `for` loops, requires to declare every variable at the top of a function, and restrains the number of lines, columns and routines. Such restrictions are sometimes leading to the use of obscure code golf tricks 😅

## For students: pitfalls you must avoid

### ✅ Ensure that every malloc is successful, exit the function if not

If a malloc fails, it will return NULL and you won't be able to do anything else, therefore you have to exit the function if it happens. You can easily check the success of the allocation this way:
```c
if (!(ret = malloc(size)))
    return (NULL);
```
To ensure you don't forget to check any malloc, use the command `cat *.c | grep malloc` which lists every line a malloc occurs in your code.

### ✅ Don't forget to free the memory in case of failure

Some functions, like `split` and `lstmap`, proceed to several *mallocs*. If one of them fails, you have to free all the memory previously allocated or you'll get memory leaks.

### ✅ Don't use nonessential flags for the compilation

Some flags, `-fsanitize=address` for instance, silently add functions to your code, which are detected by the Moulinette as cheat (#PrayForMyBSQ 🙏)

### ✅ Only use functions from 'Libft' and static functions in your code

If you use a function that is not specified by the subject requirements nor a static function, the Moulinette will detect your function call as cheat, even if you definitely reimplement this function from scratch according to the guidelines (#PrayForMyLibft 🙏)

### ✅ Atoi: be aware of the overflows

The behavior of atoi in case of overflow is not an undefined behavior: the atoi function as specified in the standard returns the result of the asciiz to integer conversion proceeded by the strtol function, which has a precise behavior in case of overflow. You can detect a variable is overflowing by checking that its value is still positive. If the value becomes negative, then there is an overflow, and you can determine if it's a positive or a negative overflow by considering the sign.

### ✅ Prevent every function from crashing when null pointer is provided as an input

Some proofreaders have a very personal conception of what is an undefined behavior. To avoid nasty surprises, you must always define a behavior which prevents your functions from crashing in such a case.

### ✅ Don't follow the previous recommendation

Some proofreaders have a very personal conception of what is an undefined behavior, and will penalize you when your code doesn't crash whereas the same function from libc does it… so, gl hf 🤞

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

### Bonus functions (from the subject)

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