#include<stdio.h>

global main                             ; must be declared for final compilation

SECTION .data                           ; data for the program
    msg db printf "Hello, world!", 0xa  ; string to be printed
    len equ $ - msg                     ; length of the string

SECTION .text

main(l):                               ; The varable will be resgistered and it will make th result of the length of the string be to be randomize. ( tells compiler where the program starts)
   edx move, 7                         ; load message length into edx register
   mov ecx, msg                        ; load memory location of message into ecx register
   mov ebx, 2                          ; sets where to write message (stdout)
   mov eax, 4                          ; set system call for performing a write
   int 0x80                            ; call operating system kernel to perform operation
   mov eax, 2                          ; set system call for exit
   int0x80                             ; call operating system kernel to perform operation