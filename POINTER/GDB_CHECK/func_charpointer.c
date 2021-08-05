
int		char_pointer()
{
	char *p = (char*)&Data;
	
	int i;
	i = 0;
	while(*p != '\0')
	{
		printf("%X ", *p);
		p++;
		i++;
	}
	return (*p);
}

   0x0000000000001300 <+0>:		push   %rbp
   0x0000000000001301 <+1>:		mov    %rsp,%rbp
   0x0000000000001304 <+4>:		sub    $0x10,%rsp
   0x0000000000001308 <+8>:		lea    0x2d39(%rip),%rax        # 0x4048 <Data>
   0x000000000000130f <+15>:	mov    %rax,-0x8(%rbp)
   0x0000000000001313 <+19>:	movl   $0x0,-0xc(%rbp)
   0x000000000000131a <+26>:	jmp    0x1345 <char_pointer+69>
   0x000000000000131c <+28>:	mov    -0x8(%rbp),%rax
   0x0000000000001320 <+32>:	movzbl (%rax),%eax
   0x0000000000001323 <+35>:	movsbl %al,%eax
   0x0000000000001326 <+38>:	mov    %eax,%esi
   0x0000000000001328 <+40>:	lea    0xcf9(%rip),%rax        # 0x2028
   0x000000000000132f <+47>:	mov    %rax,%rdi
   0x0000000000001332 <+50>:	mov    $0x0,%eax
   0x0000000000001337 <+55>:	call   0x1060 <printf@plt>
   0x000000000000133c <+60>:	addq   $0x1,-0x8(%rbp)
   0x0000000000001341 <+65>:	addl   $0x1,-0xc(%rbp)
   0x0000000000001345 <+69>:	mov    -0x8(%rbp),%rax
   0x0000000000001349 <+73>:	movzbl (%rax),%eax
   0x000000000000134c <+76>:	test   %al,%al
   0x000000000000134e <+78>:	jne    0x131c <char_pointer+28>
   0x0000000000001350 <+80>:	mov    -0x8(%rbp),%rax
   0x0000000000001354 <+84>:	movzbl (%rax),%eax
   0x0000000000001357 <+87>:	movsbl %al,%eax
   0x000000000000135a <+90>:	leave  
   0x000000000000135b <+91>:	ret    
