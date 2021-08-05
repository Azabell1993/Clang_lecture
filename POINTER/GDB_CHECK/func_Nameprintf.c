int		Nameprintf()
{
	char *name = "ParkJiWoo";

	int i;
	i = 0;
	while(name[i] != '\0')
	{
		function_putchar(name[i]);
		i++;
	}
	return (*name);
}


   0x00000000000012a6 <+0>:		push   %rbp
   0x00000000000012a7 <+1>:		mov    %rsp,%rbp
   0x00000000000012aa <+4>:		sub    $0x10,%rsp
   0x00000000000012ae <+8>:		lea    0xdd0(%rip),%rax        # 0x2085
   0x00000000000012b5 <+15>:	mov    %rax,-0x8(%rbp)
   0x00000000000012b9 <+19>:	movl   $0x0,-0xc(%rbp)
   0x00000000000012c0 <+26>:	jmp    0x12e0 <Nameprintf+58>
   0x00000000000012c2 <+28>:	mov    -0xc(%rbp),%eax
   0x00000000000012c5 <+31>:	movslq %eax,%rdx
   0x00000000000012c8 <+34>:	mov    -0x8(%rbp),%rax
   0x00000000000012cc <+38>:	add    %rdx,%rax
   0x00000000000012cf <+41>:	movzbl (%rax),%eax
   0x00000000000012d2 <+44>:	movsbl %al,%eax
   0x00000000000012d5 <+47>:	mov    %eax,%edi
   0x00000000000012d7 <+49>:	call   0x13a5 <function_putchar>
   0x00000000000012dc <+54>:	addl   $0x1,-0xc(%rbp)
   0x00000000000012e0 <+58>:	mov    -0xc(%rbp),%eax
   0x00000000000012e3 <+61>:	movslq %eax,%rdx
   0x00000000000012e6 <+64>:	mov    -0x8(%rbp),%rax
   0x00000000000012ea <+68>:	add    %rdx,%rax
   0x00000000000012ed <+71>:	movzbl (%rax),%eax
   0x00000000000012f0 <+74>:	test   %al,%al
   0x00000000000012f2 <+76>:	jne    0x12c2 <Nameprintf+28>
   0x00000000000012f4 <+78>:	mov    -0x8(%rbp),%rax
   0x00000000000012f8 <+82>:	movzbl (%rax),%eax
   0x00000000000012fb <+85>:	movsbl %al,%eax
   0x00000000000012fe <+88>:	leave  
   0x00000000000012ff <+89>:	ret    
