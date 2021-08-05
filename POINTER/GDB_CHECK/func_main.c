int		main(void)
{
	/* basic poitner */
	printf("basic pointer : %d\n", int_pointer());

	/* int poitner */
	printf("char pointer : ");
	printf("%X ", char_pointer());
	printf("\n");

	/* void pointer */
	printf("void pointer char type 	: %X\n", void_pointer(&Data, 1));
	printf("void pointer short type : %X\n", void_pointer(&Data, 2));
	printf("void pointer int type 	: %X\n", void_pointer(&Data, 4));

	/* name pointer */
	Nameprintf();
	function_putchar('\n');
	
	return (0);
}

   0x0000000000001169 <+0>:		push   %rbp
   0x000000000000116a <+1>:		mov    %rsp,%rbp
   0x000000000000116d <+4>:		mov    $0x0,%eax
   0x0000000000001172 <+9>:		call   0x1264 <int_pointer>
   0x0000000000001177 <+14>:	mov    %eax,%esi
   0x0000000000001179 <+16>:	lea    0xe84(%rip),%rax        # 0x2004
   0x0000000000001180 <+23>:	mov    %rax,%rdi
   0x0000000000001183 <+26>:	mov    $0x0,%eax
   0x0000000000001188 <+31>:	call   0x1060 <printf@plt>
   0x000000000000118d <+36>:	lea    0xe84(%rip),%rax        # 0x2018
   0x0000000000001194 <+43>:	mov    %rax,%rdi
   0x0000000000001197 <+46>:	mov    $0x0,%eax
   0x000000000000119c <+51>:	call   0x1060 <printf@plt>
   0x00000000000011a1 <+56>:	mov    $0x0,%eax
   0x00000000000011a6 <+61>:	call   0x1300 <char_pointer>
   0x00000000000011ab <+66>:	mov    %eax,%esi
   0x00000000000011ad <+68>:	lea    0xe74(%rip),%rax        # 0x2028
   0x00000000000011b4 <+75>:	mov    %rax,%rdi
   0x00000000000011b7 <+78>:	mov    $0x0,%eax
   0x00000000000011bc <+83>:	call   0x1060 <printf@plt>
   0x00000000000011c1 <+88>:	mov    $0xa,%edi
   0x00000000000011c6 <+93>:	call   0x1030 <putchar@plt>
   0x00000000000011cb <+98>:	mov    $0x1,%esi
   0x00000000000011d0 <+103>:	lea    0x2e71(%rip),%rax        # 0x4048 <Data>
   0x00000000000011d7 <+110>:	mov    %rax,%rdi
   0x00000000000011da <+113>:	call   0x135c <void_pointer>
   0x00000000000011df <+118>:	mov    %eax,%esi
   0x00000000000011e1 <+120>:	lea    0xe44(%rip),%rax        # 0x202c
   0x00000000000011e8 <+127>:	mov    %rax,%rdi
   0x00000000000011eb <+130>:	mov    $0x0,%eax
   0x00000000000011f0 <+135>:	call   0x1060 <printf@plt>
   0x00000000000011f5 <+140>:	mov    $0x2,%esi
   0x00000000000011fa <+145>:	lea    0x2e47(%rip),%rax        # 0x4048 <Data>
   0x0000000000001201 <+152>:	mov    %rax,%rdi
   0x0000000000001204 <+155>:	call   0x135c <void_pointer>
   0x0000000000001209 <+160>:	mov    %eax,%esi
   0x000000000000120b <+162>:	lea    0xe38(%rip),%rax        # 0x204a
   0x0000000000001212 <+169>:	mov    %rax,%rdi
   0x0000000000001215 <+172>:	mov    $0x0,%eax
   0x000000000000121a <+177>:	call   0x1060 <printf@plt>
   0x000000000000121f <+182>:	mov    $0x4,%esi
   0x0000000000001224 <+187>:	lea    0x2e1d(%rip),%rax        # 0x4048 <Data>
   0x000000000000122b <+194>:	mov    %rax,%rdi
   0x000000000000122e <+197>:	call   0x135c <void_pointer>
   0x0000000000001233 <+202>:	mov    %eax,%esi
   0x0000000000001235 <+204>:	lea    0xe2c(%rip),%rax        # 0x2068
   0x000000000000123c <+211>:	mov    %rax,%rdi
   0x000000000000123f <+214>:	mov    $0x0,%eax
   0x0000000000001244 <+219>:	call   0x1060 <printf@plt>
   0x0000000000001249 <+224>:	mov    $0x0,%eax
   0x000000000000124e <+229>:	call   0x12a6 <Nameprintf>
   0x0000000000001253 <+234>:	mov    $0xa,%edi
   0x0000000000001258 <+239>:	call   0x13a5 <function_putchar>
   0x000000000000125d <+244>:	mov    $0x0,%eax
   0x0000000000001262 <+249>:	pop    %rbp
   0x0000000000001263 <+250>:	ret    

