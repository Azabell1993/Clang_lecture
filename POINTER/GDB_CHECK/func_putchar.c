void	function_putchar(char c)
{	
	write(1, &c, 1);
}

   0x00000000000013a5 <+0>:		push   %rbp
   0x00000000000013a6 <+1>:		mov    %rsp,%rbp
   0x00000000000013a9 <+4>:		sub    $0x10,%rsp
   0x00000000000013ad <+8>:		mov    %edi,%eax
   0x00000000000013af <+10>:	mov    %al,-0x4(%rbp)
   0x00000000000013b2 <+13>:	lea    -0x4(%rbp),%rax
   0x00000000000013b6 <+17>:	mov    $0x1,%edx
   0x00000000000013bb <+22>:	mov    %rax,%rsi
   0x00000000000013be <+25>:	mov    $0x1,%edi
   0x00000000000013c3 <+30>:	call   0x1040 <write@plt>
   0x00000000000013c8 <+35>:	nop
   0x00000000000013c9 <+36>:	leave  
   0x00000000000013ca <+37>:	ret    
