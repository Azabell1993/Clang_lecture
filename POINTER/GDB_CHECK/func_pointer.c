int		int_pointer()
{
	int Num = 5;
	int *ptr = &Num;

	return (*ptr);
}

   0x0000000000001264 <+0>:		push   %rbp
   0x0000000000001265 <+1>:		mov    %rsp,%rbp
   0x0000000000001268 <+4>:		sub    $0x20,%rsp
   0x000000000000126c <+8>:		mov    %fs:0x28,%rax
   0x0000000000001275 <+17>:	mov    %rax,-0x8(%rbp)
   0x0000000000001279 <+21>:	xor    %eax,%eax
   0x000000000000127b <+23>:	movl   $0x5,-0x14(%rbp)
   0x0000000000001282 <+30>:	lea    -0x14(%rbp),%rax
   0x0000000000001286 <+34>:	mov    %rax,-0x10(%rbp)
   0x000000000000128a <+38>:	mov    -0x10(%rbp),%rax
   0x000000000000128e <+42>:	mov    (%rax),%eax
   0x0000000000001290 <+44>:	mov    -0x8(%rbp),%rdx
   0x0000000000001294 <+48>:	sub    %fs:0x28,%rdx
   0x000000000000129d <+57>:	je     0x12a4 <int_pointer+64>
   0x000000000000129f <+59>:	call   0x1050 <__stack_chk_fail@plt>
   0x00000000000012a4 <+64>:	leave  
   0x00000000000012a5 <+65>:	ret    
