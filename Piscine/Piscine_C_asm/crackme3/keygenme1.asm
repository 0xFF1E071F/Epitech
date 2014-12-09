BITS 32

EXTERN puts
EXTERN atoi
EXTERN strlen
	
SECTION .data
	goodboy		db	"Bravo tu as reussis ! code un keygen pour sakiir.. il sera content", 0
	badboy		db	"Mauvais Serial...THE GAME...ASM Keygenme by sakiir", 0
	opt		db	"Usage : ./keygenme <user> <serial>", 0
	
SECTION .text
	GLOBAL main

main:
	pop ecx
	pop ecx
	mov eax, ecx
	pop ecx
	mov ebx, [ecx+4]
	cmp eax, 3
	jne usage
	xor ecx, ecx
	xor eax, eax
	xor edx, edx
	jmp generate
usage:
	push opt
	call puts
	call exit
generate:	
	mov al, [ebx+edx]
	cmp eax, 0
	je end
	add edx, 1
	xor ecx, eax
	jmp generate
end:
	push ebx
	mov esi, ecx
	call strlen
	add ebx, eax
	add ebx, 1
	push ebx
	call atoi
	cmp eax, esi
	jne bad
	jmp good
good:
	push goodboy
	call puts
	jmp exit
	
bad:
	push badboy
	call puts
	jmp exit
	
exit:
	mov eax, 1
	mov ebx, 1
	int 0x80
