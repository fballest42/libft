# libft

### 42 Cursus, Libft Library is a the first project in 42 Madrid, that requires us to recreate some C functions for use in future projects. It will be growing with our new own functions as we advance in the 42 cursus. You can find the [spanish][1] or [english][2] subject of this project to know more about it.

### Graded:

[![fballest's 42 Libft Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/1618808)](https://github.com/JaeSeoKim/badge42)

### List of functions:

The funtions are divided in 4 categories. Libft, Additional, Bonus and Personal funtions. Libft and additional are the mandatory part to aprobed this project. Bonus funtions are optional, all the funtions in this block is designed to work with list. Personal funtions are funtions that I have added to my libft as I needed during the development of other projects or becuase we can not use the original one.

Libft functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
[ft_memset](#ft_memset)		|[ft_substr](#ft_substr)    | [ft_lstnew](#ft_lstnew)            | [ft_atolli](#ft_atolli) 
[ft_bzero](#ft_bzero)		|[ft_strjoin](#ft_strjoin)  | [ft_lstadd_front](#ft_lstadd_front)| [ft_matrixfree](#ft_matrixfree) 
[ft_memcpy](#ft_memcpy)		|[ft_strtrim](#ft_strjoin)  | [ft_lstsize](#ft_lstsize)          | [ft_matrixlines](#ft_matrixlines)   
[ft_memccpy](#ft_memccpy)	|[ft_split](#ft_split)      | [ft_lstlast](#ft_lstlast)          | [ft_strchr2](#ft_strchr2)
[ft_memmove](#ft_memmove)	|[ft_itoa](#ft_itoa)       | [ft_lstadd_back](#ft_lstadd_back)  | [ft_strtok](#ft_strtok)
[ft_memchr](#ft_memchr)		|[ft_strmapi](#ft_strmapi)  | [ft_lstdelone](#ft_lstdelone)     | [get_next_line](#get_next_line) 
[ft_memcmp](#ft_memcmp)		|[ft_putchar_fd](#ft_putchar_fd)| [ft_lstclear](#ft_lstclear)    | 
[ft_strlen](#ft_strlen)		|[ft_putstr_fd](#ft_putstr_fd)	| [ft_lstiter](#ft_lstiter)      | 
[ft_strdup](#ft_strdup)		|[ft_putendl_fd](#ft_putendl_fd)| [ft_lstmap](#ft_lstmap)        | 
[ft_strcpy](#ft_strcpy)		|[ft_putnbr_fd](#ft_putnbr_fd)	|				| 
[ft_strlcpy](#ft_strlcpy)	| 	|			| 
[ft_strcat](#ft_strcat)		| 	| | 
[ft_strlcat](#ft_strlcat)	| 	| | 
[ft_strchr](#ft_strchr)		| 	| | 
[ft_strrchr](#ft_strrchr)	| 	| | 
[ft_strstr](#ft_strstr)		|   | | 
[ft_strnstr](#ft_strnstr)	| 	| | 
[ft_strcmp](#ft_strcmp)		| 	| | 
[ft_strncmp](#ft_strncmp)	| 	| | 
[ft_atoi](#ft_atoi)         | 	| | 
[ft_isalpha](#ft_isalpha)	| 	| | 
[ft_isdigit](#ft_isdigit)	| 	| |
[ft_isalnum](#ft_isalnum)	|   | | 
[ft_isascii](#ft_isascii)	|   | | 
[ft_isprint](#ft_isprint)	|   | | 
[ft_toupper](#ft_toupper)   |   | | 
[ft_tolower](#ft_tolower)	|   | | 
[ft_calloc](#ft_calloc)     |   | |



#### [ft_memset](ft_memset.c)
Prototype: `void       *ft_memset(void *s, int c, size_t len)`

Original funtion: `memset in string.h library.` 

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Fill with "len" bytes of "c" the memory of "s"| The string on which to operate | Value c (converted to an unsigned char) | The number of bytes | A pointer to the memory area s

#### [ft_bzero](ft_bzero.c)
Prototype: `void       *ft_bzero(void *s,  size_t n)`

Original funtion: `bzero in strings.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
 Erases the data in the "n" bytes of the memory starting at the location pointed by "s" writing zeroes | The string on which to operate | The number of bytes | None

#### [ft_memcpy](ft_memcpy.c)
Prototype: `void       *ft_memcpy(void *dst, const void *src, size_t n)`

Original funtion: `memcpy in string.h library.`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies n bytes from memory area src to memory of dst. The memory  areas  must  not  overlap.  Use [ft_memmove](#ft_memmove) if the memory areas do overlap.| Memory area dst | Memory area src | The number of bytes | A pointer to the memory area dst

#### [ft_memccpy](ft_memccpy.c)
Prototype: `void       *ft_memccpy(void *dst, const void *src, int c, size_t n)`

Original funtion: `memccpy in string.h library.`

Description | Param. #1 | Param. #2 | Param. #3 | Param. #4 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies n bytes from memory area  src  to memory  area  dst, stopping when the character c is found, or after n characters are copied, whichever comes first. If copying takes place between objects that overlap, the behavior is undefined.| Memory area dst | Memory area src | A character to search | Number of bytes that memccpy() copied | A pointer to the next character in dst after c, or NULL if c was not found in the first n bytes

#### [ft_memmove](ft_memmove.c)
Prototype: `void       *ft_memmove(void *dst, const void *src, size_t len)`

Original funtion: `memmove in string.h library.`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies len bytes from the memory of src to dst. Memories may overlap. First, the bytes in src are copied into a temporary array and then to dst.| Memory area dst | Memory ares arc | The number of bytes | A pointer to the memory area dst

#### [ft_memchr](ft_memchr.c)
Prototype: `void       *ft_memchr(const void *s, int c, size_t n)`

Original funtion: `memchr in string.h library.`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Scans the initial n bytes of s for the first instance of c | Memory area s| A character to search | The number of bytes | A pointer to the matching byte or NULL if the character does not occur in the given memory area

#### [ft_memcmp](ft_memcmp.c)
Prototype: `void       *ft_memcmp(void *dst, const void *src, size_t n)`

Original funtion: `memcmp in string.h library.`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Compares byte string s1 against byte string s2 | Memory area s1| Memory area s2 | The number of bytes | < 0 if s1 is less than s2, > 0 if s1 is graeter than s2, = 0 if s1 is equal to s2 

#### [ft_strlen](ft_strlen.c) 
Prototype: `size_t     ft_strlen(const char *s)`

Original funtion: `strlen in string.h library.`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0')	| The string to calculate | Number of characters in the string pointed to by s

#### [ft_strdup](ft_strdup.c) 
Prototype: `char       *ft_strdup(const char *s))`

Original funtion: `strdup in string.h library.`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Duplicate string s1. Memory  for  the new string is obtained with malloc, and can  be  freed with free | The string to duplicate| A pointer   to  the  duplicated  string.  NULL  if  insufficient  memory  was available

#### [ft_strndup](ft_strndup.c)
Prototype: `char       *ft_strndup(const char *s, size_t n)`

Original funtion: `strndup in string.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates a specific amount of memory to copy a string | The string to copy | The maximum amount of characters to copy from the string | A pointer to the new string

#### [ft_strcdup](ft_strcdup.c)
Prototype: `char       *ft_strcdup(const char *s, int c)`

Original funtion: `strcdup in string.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates a specific amount of memory to copy a string until the occurence of c. Example: ft_strcdup("Blue", 'u') -> "Bl"  | The string to copy before c | The character c | A pointer to the new string

#### [ft_strchr](ft_strchr.c)
Prototype: `char		*ft_strchr(const char *s, int c)`

Original funtion: `strchr in string.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locates the first occurrence of 'c' in the string pointed to by 's'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0'| Pointer to string | Character to be located | A pointer to the first occurrence of the character c in the string or NULL if the character is not found

#### [ft_strrchr](ft_strrchr.c)
Prototype: `char		*ft_strrchr(const char *s, int c)`

Original funtion: `strrchr in string.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locates the last occurrence of 'c' in the string pointed to by 's'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0'| Pointer to string | Character to be located | A pointer to the last occurrence of the character c in the string or NULL if the character is not found

#### [ft_strcpy](ft_strcpy.c)
Prototype: `char       *ft_strcpy(char *dst, const char *src)`

Original funtion: `strcpy in string.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Copy a string, including the terminating null byte ('\0') | Destination array | String to be copied | A pointer to the destination string dst

#### [ft_strlcpy](ft_strlcpy.c)
Prototype: `size_t     ft_strlcpy(char *dst, const char *src, size_t dstsize)`

Original funtion: `strlcpy in string.h library.`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies up to dstsize - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result| Destination array | String to be copied | Number of characters to be copied from src | Total length of the string to create (length of src)

#### [ft_strcat](ft_strcat.c)
Prototype: `char       *ft_strcpy(char *dst, const char *src)`

Original funtion: `strcat in string.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Concatenate two strings (append s2 to s1), including the terminating null byte ('\0') | Destination array | String to be appended to dst | A pointer to the resulting string dst

#### [ft_strlcat](ft_strlcat.c)
Prototype: `size_t     ft_strlcat(char *dst, const char *src, size_t size)`

Original funtion: `strlcat in string.h library.`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Concatenate the string src to the end of dst. It will concatenate at most size - strlen(dst) - 1 bytes, NUL-terminating the result | Destination array | String to be appended to dst | Maximum number of characters to be appended | The initial length of dst plus the length of src

#### [ft_strstr](ft_strstr.c)
Prototype: `char       *ft_strstr(const char *haystack, const char *needle)`

Original funtion: `strstr in string.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locate substring. Finds the first occurrence of the substring 'needle' in  the  string 'haystack'. The terminating null bytes ('\0') are not compared | String to be scanned | The small string to be searched in haystack string | A pointer to the beginning of the located substring. NULL if the substring is not found. If 'needle' is an empty string, 'haystack' is returned

#### [ft_strnstr](ft_strnstr.c)
Prototype: `char       *ft_strnstr(const char *haystack, const char *needle, size_t len)`

Original funtion: `strnstr in string.h library.`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Locate substring, where not more than 'len' characters are searched. Finds the first occurrence of the substring 'needle' in  the  string 'haystack'. The terminating null bytes ('\0') are not compared. | String to be scanned | The small string to be searched in 'haystack' string|The maximum amount of characters to be searched |A pointer to the first character of the first occurrence of little is returned. NULL if the substring is not found. If 'needle' is an empty string, 'haystack' is returned

#### [ft_atoi](ft_atoi.c)
Prototype: `int        ft_atoi(const char *str)`

Original funtion: `atoi in string.h library.`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Convert a string to a integer | The string to be converted to int | The converted value

#### [ft_isalpha](ft_isalpha.c)
Prototype: `int        ft_isalpha(int c)`

Original funtion: `isalpha in string.h library.`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a alpabetic character, it is equivalent to ([ft_isupper](#ft_isupper)(c) or [ft_islower](#ft_islower)(c)) | The character to test | 0 if the character tests false and 1 if the character tests true

#### [ft_isdigit](ft_isdigit.c)
Prototype: `int         ft_isdigit(int c)`

Original funtion: `isdigit in string.h library.`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a digit (0 through 9) | The character to test | 0 if the character tests false and 1 if the character tests true

#### [ft_isalnum](ft_isalnum.c)
Prototype: `int        ft_isalnum(int c)`

Original funtion: `isalnum in string.h library.`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for an alphanumeric character; it is equivalent to ([ft_isalpha](#ft_isalpha) or [ft_isdigit](#ft_isdigit))| The character to test | 0 if the character tests false and 1 if the character tests true

#### [ft_isascii](ft_isascii.c)
Prototype: `int        ft_isascii(int c)`

Original funtion: `isascii in string.h library.`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Checks for an ASCII character, which is any character between 0 and octal 0177 inclusive | The character to test | 0 if the character tests false and 1 if the character tests true

#### [ft_isprint](ft_isprint.c)
Prototype: `int        ft_isprint(int c)`

Original funtion: `isprint in string.h library.`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Checks for any printable character including space| The character to test | 0 if the character tests false and 1 if the character tests true

#### [ft_toupper](ft_toupper.c)
Prototype: `int        ft_toupper(int c)`

Original funtion: `toupper in string.h library.`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
If the character passed as an argument is a lowercase, convert to upper| The character to convert | If c is a lowercase letter, returns its uppercase equivalent. Otherwise,  it  returns  c.

#### [ft_tolower](ft_tolower.c)
Prototype: `int        ft_tolower(int c)`

Original funtion: `tolower in string.h library.`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
If the character passed as an argument is an uppercase, convert to lower| The character to convert | If c is a uppercase letter, returns its lowercase equivalent. Otherwise,  it  returns  c.

#### [ft_calloc](ft_calloc.c)
Prototype: `void       *ft_calloc(size_t count, size_t size)`

Original funtion: `calloc in string.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
 Allocates enough space for count objects that are size bytes of memory each, and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero | Number of elements to be allocated | Size of elements | A pointer to the allocated memory, or NULL if the request fails

#### [ft_substr](ft_substr.c)
Prototype: `char   *ft_substr(char const *s, unsigned int start, size_t len)`

Original funtion: `substr in string.h library.`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a substring from the string given in argument. The substring begins at index 'start' and is of maximum size 'len'| The string from which create the substring | The start index of the substring in the string| The maximum length of the substring | The substring. NULL if the allocation fails

#### [ft_strjoin](ft_strjoin.c)
Prototype: `char *ft_strjoin(char const *s1, char const *s2)`

Original funtion: `strjoin in string.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a new string, result of the concatenation of s1 and s2 |The prefix string |The suffix string | The new string. NULL if the allocation fails

#### [ft_strtrim](ft_strtrim.c)
Prototype: `char *ft_strjoin(char const *s1, char const *s2)`

Original funtion: `strtrim in string.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a copy of the string given as argument without the characters specified in the set argument at the beginning and the end of the string|The string to be trimmed |The reference set of character to trim | The trimmed string. NULL if the allocation fails

#### [ft_strsplit](ft_split.c)
Prototype: `char **ft_split(char const *s, char c)`

Original funtion: `split in string.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns  an array of strings obtained by splitting s using the character 'c' as a delimiter. The array must be ended by a NULL pointer|The string to be split |The delimiter character| The array of new strings result of the split. NULL if the allocation fails

#### [ft_strmapi](ft_strmapi.c)
Prototype: `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))`

Original funtion: `strmapi in string.h library.`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Applies the function f to each character of the string passed as argument to create a new string (with malloc) resulting from successive applications of f |The string on which to iterate| The function to apply to each character| The string created from the successive applications of f. Returns NULL if the allocation fails

#### [ft_atoi](ft_itoa.c)
Prototype: `char   ft_itoa(int n)`

Original funtion: `itoa in string.h library.` 

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled | The integer to convert | The string representing the integer. NULL if the allocation fails.

#### [ft_atolli](ft_atolli.c)
Prototype: `long long int       ft_atolli(const char *str)`

Original funtion: `atoll in string.h library.`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Convert a string to a long long integer | The string to be converted to long long int | The converted value

#### [ft_matrixlines](ft_matrixlines.c) 
Prototype: `int     ft_matrixlines(char **str)`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Calculates the number of lines of the matrix pointed to by str	| The matrix to calculate | Number of lines in the matrix pointed to by str

#### [ft_matrixfree](ft_matrixfree.c) 
Prototype: `void    ft_matrixfree(void **str)`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Free the allocated memory of a matrix	| The matrix to be free | No value returned


#### [ft_strchr2](ft_strchr2.c)
Prototype: `char	*ft_strchr2(const char *str, char c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locates the first occurrence of 'c' in the string pointed to by 'str'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0'| Pointer to string | Character to be located | Return a new string ended by '\0' form str begining it in the next character to c in str to the end.

#### [ft_strtok](ft_strtok.c)
Prototype: `char	*ft_strtok(const char *str, char c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locates the first occurrence of 'c' in the string pointed to by 'str'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0'| Pointer to string | Character to be located | Return a new string ended by '\0', from the begining of the original string to this character on str (not included in the new string) or NULL if the character is not found

#### [get_next_line](get_next_line.c)
Prototype: `int	get_next_line(int fd, char **line)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Reads the characters of a file descriptor, till it finds '\n' or the end of file | File descriptor number | double pointer to the line | Return 0 if it fails or 1 if the execution of the funtions is ok, some mistakes on the funtion execution returns -1.


[1]: Enlace al subject en español 
[2]: Enlace al subject en ingles
[3]: Enlace




Badge42
🚀 Dynamically generated 42 badge for your git readmes.

💡 42 Stats Card!

BANNER PRINCIPAL

[![fballest's 42 stats](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/stats?cursusId=21&coalitionId=66)](https://github.com/JaeSeoKim/badge42)

✅ 42 ProjectScore Badge!

WEBSERV
[![fballest's 42 webserv Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2572155)](https://github.com/JaeSeoKim/badge42)


FT_CONTAINERS
[![fballest's 42 ft_containers Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2572158)](https://github.com/JaeSeoKim/badge42)


INCEPTION
[![fballest's 42 Inception Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2547736)](https://github.com/JaeSeoKim/badge42)


EXAM RANK 04
[![fballest's 42 Exam Rank 04 Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2504175)](https://github.com/JaeSeoKim/badge42)


CPP08
[![fballest's 42 CPP Module 08 Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2538055)](https://github.com/JaeSeoKim/badge42)


CPP07
[![fballest's 42 CPP Module 07 Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2537860)](https://github.com/JaeSeoKim/badge42)


CPP06
[![fballest's 42 CPP Module 06 Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2535146)](https://github.com/JaeSeoKim/badge42)


CPP05
[![fballest's 42 CPP Module 05 Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2524904)](https://github.com/JaeSeoKim/badge42)


PUSH SWAP
[![fballest's 42 push_swap Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2138660)](https://github.com/JaeSeoKim/badge42)


CPP04
[![fballest's 42 CPP Module 04 Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2520408)](https://github.com/JaeSeoKim/badge42)


CPP03
[![fballest's 42 CPP Module 03 Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2519078)](https://github.com/JaeSeoKim/badge42)


CPP02
[![fballest's 42 CPP Module 02 Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2513067)](https://github.com/JaeSeoKim/badge42)


CPP01
[![fballest's 42 CPP Module 01 Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2511140)](https://github.com/JaeSeoKim/badge42)


CPP00
[![fballest's 42 CPP Module 00 Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2504189)](https://github.com/JaeSeoKim/badge42)


EXAM RANK 03
[![fballest's 42 Exam Rank 03 Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2439917)](https://github.com/JaeSeoKim/badge42)


PHILOSOPHERS
[![fballest's 42 Philosophers Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2439916)](https://github.com/JaeSeoKim/badge42)


MINISHELL
[![fballest's 42 minishell Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2108285)](https://github.com/JaeSeoKim/badge42)


PIIPEX
[![fballest's 42 pipex Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2214341)](https://github.com/JaeSeoKim/badge42)


FRACT_OL
[![fballest's 42 fract-ol Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2214342)](https://github.com/JaeSeoKim/badge42)


LIBASM
[![fballest's 42 libasm Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2086078)](https://github.com/JaeSeoKim/badge42)


BORN2BEROOT
[![fballest's 42 Born2beroot Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/2180820)](https://github.com/JaeSeoKim/badge42)


CUB3D
[![fballest's 42 cub3d Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/1926249)](https://github.com/JaeSeoKim/badge42)


FT_SERVER
[![fballest's 42 ft_server Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/1982339)](https://github.com/JaeSeoKim/badge42)


EXAM RANK 02
[![fballest's 42 Exam Rank 02 Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/1915391)](https://github.com/JaeSeoKim/badge42)


FT_PRINTF
[![fballest's 42 ft_printf Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/1640521)](https://github.com/JaeSeoKim/badge42)


NETWHAT
[![fballest's 42 netwhat Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/1633121)](https://github.com/JaeSeoKim/badge42)


GET_NEXT_LINE
[![fballest's 42 get_next_line Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/1633128)](https://github.com/JaeSeoKim/badge42)


LIBFT
[![fballest's 42 Libft Score](https://badge42.vercel.app/api/v2/cl45d74de005409l9l5r3ozl6/project/1618808)](https://github.com/JaeSeoKim/badge42)
