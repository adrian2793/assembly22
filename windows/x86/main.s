section .text
  global _start
	
_start:
  mov	edx,13
  mov	ecx,message
  mov	ebx,1
  mov	eax,4
  int	0x80

section .data
  message DB 'UnknownCheats'
