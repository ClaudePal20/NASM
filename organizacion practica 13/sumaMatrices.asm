%include "./pc_io.inc"
section .data	;Datos inicializados
section .bss	;Datos no inicializados
section .text
	global sumaMatrices:

sumaMatrices:
  push ebp
  mov ebp,esp    ;parametros:
  mov esi,[ebp+8];matriz1
  mov edx,[ebp+12];matriz2
  mov edi,[ebp+16];matriz3
  mov eax,[ebp+20];width
  mov ecx,[ebp+24];height
  mul ecx
  mov ebx,0
  .ciclo:
    mov eax,[esi+ebx*4]
    add eax,[edx+ebx*4]
    mov dword[edi+ebx*4],eax
    inc ebx
  loop .ciclo
  mov esp,ebp
  pop ebp
  mov edx,eax
  call puts



