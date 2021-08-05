int		void_pointer(void *vptr, char type)
{
	int 	result;

	/* void pointer의 임시적 형 변환 학습 */
	if(type == 1)
		result = *(char*)vptr;
	else if(type == 2)
		result = *(short*)vptr;
	else if(type == 4)
		result = *(int*)vptr;

	return (result);
}

   0x000000000000135c <+0>:		push   %rbp
   0x000000000000135d <+1>:		mov    %rsp,%rbp
   0x0000000000001360 <+4>:		mov    %rdi,-0x18(%rbp)
   0x0000000000001364 <+8>:		mov    %esi,%eax
   0x0000000000001366 <+10>:	mov    %al,-0x1c(%rbp)
   0x0000000000001369 <+13>:	cmpb   $0x1,-0x1c(%rbp)
   0x000000000000136d <+17>:	jne    0x137e <void_pointer+34>
   0x000000000000136f <+19>:	mov    -0x18(%rbp),%rax
   0x0000000000001373 <+23>:	movzbl (%rax),%eax
   0x0000000000001376 <+26>:	movsbl %al,%eax
   0x0000000000001379 <+29>:	mov    %eax,-0x4(%rbp)
   0x000000000000137c <+32>:	jmp    0x13a0 <void_pointer+68>
   0x000000000000137e <+34>:	cmpb   $0x2,-0x1c(%rbp)
   0x0000000000001382 <+38>:	jne    0x1391 <void_pointer+53>
   0x0000000000001384 <+40>:	mov    -0x18(%rbp),%rax
   0x0000000000001388 <+44>:	movzwl (%rax),%eax
   0x000000000000138b <+47>:	cwtl   
   0x000000000000138c <+48>:	mov    %eax,-0x4(%rbp)
   0x000000000000138f <+51>:	jmp    0x13a0 <void_pointer+68>
   0x0000000000001391 <+53>:	cmpb   $0x4,-0x1c(%rbp)
   0x0000000000001395 <+57>:	jne    0x13a0 <void_pointer+68>
   0x0000000000001397 <+59>:	mov    -0x18(%rbp),%rax
   0x000000000000139b <+63>:	mov    (%rax),%eax
   0x000000000000139d <+65>:	mov    %eax,-0x4(%rbp)
   0x00000000000013a0 <+68>:	mov    -0x4(%rbp),%eax
   0x00000000000013a3 <+71>:	pop    %rbp
   0x00000000000013a4 <+72>:	ret    
