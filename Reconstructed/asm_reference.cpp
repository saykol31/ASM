// ASM: 
// ASM: /home/saykol/C/project_C/dibujoXCB:     file format elf64-x86-64
// ASM: 
// ASM: 
// ASM: Disassembly of section .init:
// ASM: 
// ASM: 0000000000001000 <_init>:
// ASM:     1000:	48 83 ec 08          	sub    $0x8,%rsp
// ASM:     1004:	48 8b 05 c5 4f 00 00 	mov    0x4fc5(%rip),%rax        # 5fd0 <__gmon_start__@Base>
// ASM:     100b:	48 85 c0             	test   %rax,%rax
// ASM:     100e:	74 02                	je     1012 <_init+0x12>
// ASM:     1010:	ff d0                	call   *%rax
// ASM:     1012:	48 83 c4 08          	add    $0x8,%rsp
// ASM:     1016:	c3                   	ret
// ASM: 
// ASM: Disassembly of section .plt:
// ASM: 
// ASM: 0000000000001020 <_ZSt17__throw_bad_allocv@plt-0x10>:
// ASM:     1020:	ff 35 ca 4f 00 00    	push   0x4fca(%rip)        # 5ff0 <_GLOBAL_OFFSET_TABLE_+0x8>
// ASM:     1026:	ff 25 cc 4f 00 00    	jmp    *0x4fcc(%rip)        # 5ff8 <_GLOBAL_OFFSET_TABLE_+0x10>
// ASM:     102c:	0f 1f 40 00          	nopl   0x0(%rax)
// ASM: 
// ASM: 0000000000001030 <_ZSt17__throw_bad_allocv@plt>:
// ASM:     1030:	ff 25 ca 4f 00 00    	jmp    *0x4fca(%rip)        # 6000 <_ZSt17__throw_bad_allocv@GLIBCXX_3.4>
// ASM:     1036:	68 00 00 00 00       	push   $0x0
// ASM:     103b:	e9 e0 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001040 <xcb_get_setup@plt>:
// ASM:     1040:	ff 25 c2 4f 00 00    	jmp    *0x4fc2(%rip)        # 6008 <xcb_get_setup@Base>
// ASM:     1046:	68 01 00 00 00       	push   $0x1
// ASM:     104b:	e9 d0 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001050 <xcb_poll_for_event@plt>:
// ASM:     1050:	ff 25 ba 4f 00 00    	jmp    *0x4fba(%rip)        # 6010 <xcb_poll_for_event@Base>
// ASM:     1056:	68 02 00 00 00       	push   $0x2
// ASM:     105b:	e9 c0 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001060 <xcb_flush@plt>:
// ASM:     1060:	ff 25 b2 4f 00 00    	jmp    *0x4fb2(%rip)        # 6018 <xcb_flush@Base>
// ASM:     1066:	68 03 00 00 00       	push   $0x3
// ASM:     106b:	e9 b0 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001070 <_ZSt20__throw_length_errorPKc@plt>:
// ASM:     1070:	ff 25 aa 4f 00 00    	jmp    *0x4faa(%rip)        # 6020 <_ZSt20__throw_length_errorPKc@GLIBCXX_3.4>
// ASM:     1076:	68 04 00 00 00       	push   $0x4
// ASM:     107b:	e9 a0 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001080 <xcb_connection_has_error@plt>:
// ASM:     1080:	ff 25 a2 4f 00 00    	jmp    *0x4fa2(%rip)        # 6028 <xcb_connection_has_error@Base>
// ASM:     1086:	68 05 00 00 00       	push   $0x5
// ASM:     108b:	e9 90 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001090 <_ZSt28__throw_bad_array_new_lengthv@plt>:
// ASM:     1090:	ff 25 9a 4f 00 00    	jmp    *0x4f9a(%rip)        # 6030 <_ZSt28__throw_bad_array_new_lengthv@GLIBCXX_3.4.29>
// ASM:     1096:	68 06 00 00 00       	push   $0x6
// ASM:     109b:	e9 80 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 00000000000010a0 <xcb_disconnect@plt>:
// ASM:     10a0:	ff 25 92 4f 00 00    	jmp    *0x4f92(%rip)        # 6038 <xcb_disconnect@Base>
// ASM:     10a6:	68 07 00 00 00       	push   $0x7
// ASM:     10ab:	e9 70 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 00000000000010b0 <xcb_setup_roots_iterator@plt>:
// ASM:     10b0:	ff 25 8a 4f 00 00    	jmp    *0x4f8a(%rip)        # 6040 <xcb_setup_roots_iterator@Base>
// ASM:     10b6:	68 08 00 00 00       	push   $0x8
// ASM:     10bb:	e9 60 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 00000000000010c0 <__cxa_atexit@plt>:
// ASM:     10c0:	ff 25 82 4f 00 00    	jmp    *0x4f82(%rip)        # 6048 <__cxa_atexit@GLIBC_2.2.5>
// ASM:     10c6:	68 09 00 00 00       	push   $0x9
// ASM:     10cb:	e9 50 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 00000000000010d0 <_ZNSolsEs@plt>:
// ASM:     10d0:	ff 25 7a 4f 00 00    	jmp    *0x4f7a(%rip)        # 6050 <_ZNSolsEs@GLIBCXX_3.4>
// ASM:     10d6:	68 0a 00 00 00       	push   $0xa
// ASM:     10db:	e9 40 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 00000000000010e0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>:
// ASM:     10e0:	ff 25 72 4f 00 00    	jmp    *0x4f72(%rip)        # 6058 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@GLIBCXX_3.4>
// ASM:     10e6:	68 0b 00 00 00       	push   $0xb
// ASM:     10eb:	e9 30 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 00000000000010f0 <_Znwm@plt>:
// ASM:     10f0:	ff 25 6a 4f 00 00    	jmp    *0x4f6a(%rip)        # 6060 <_Znwm@GLIBCXX_3.4>
// ASM:     10f6:	68 0c 00 00 00       	push   $0xc
// ASM:     10fb:	e9 20 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001100 <_ZdlPvm@plt>:
// ASM:     1100:	ff 25 62 4f 00 00    	jmp    *0x4f62(%rip)        # 6068 <_ZdlPvm@CXXABI_1.3.9>
// ASM:     1106:	68 0d 00 00 00       	push   $0xd
// ASM:     110b:	e9 10 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001110 <vkDestroyInstance@plt>:
// ASM:     1110:	ff 25 5a 4f 00 00    	jmp    *0x4f5a(%rip)        # 6070 <vkDestroyInstance@Base>
// ASM:     1116:	68 0e 00 00 00       	push   $0xe
// ASM:     111b:	e9 00 ff ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001120 <xcb_generate_id@plt>:
// ASM:     1120:	ff 25 52 4f 00 00    	jmp    *0x4f52(%rip)        # 6078 <xcb_generate_id@Base>
// ASM:     1126:	68 0f 00 00 00       	push   $0xf
// ASM:     112b:	e9 f0 fe ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001130 <xcb_map_window@plt>:
// ASM:     1130:	ff 25 4a 4f 00 00    	jmp    *0x4f4a(%rip)        # 6080 <xcb_map_window@Base>
// ASM:     1136:	68 10 00 00 00       	push   $0x10
// ASM:     113b:	e9 e0 fe ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001140 <free@plt>:
// ASM:     1140:	ff 25 42 4f 00 00    	jmp    *0x4f42(%rip)        # 6088 <free@GLIBC_2.2.5>
// ASM:     1146:	68 11 00 00 00       	push   $0x11
// ASM:     114b:	e9 d0 fe ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001150 <vkCreateInstance@plt>:
// ASM:     1150:	ff 25 3a 4f 00 00    	jmp    *0x4f3a(%rip)        # 6090 <vkCreateInstance@Base>
// ASM:     1156:	68 12 00 00 00       	push   $0x12
// ASM:     115b:	e9 c0 fe ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001160 <xcb_create_window@plt>:
// ASM:     1160:	ff 25 32 4f 00 00    	jmp    *0x4f32(%rip)        # 6098 <xcb_create_window@Base>
// ASM:     1166:	68 13 00 00 00       	push   $0x13
// ASM:     116b:	e9 b0 fe ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001170 <setenv@plt>:
// ASM:     1170:	ff 25 2a 4f 00 00    	jmp    *0x4f2a(%rip)        # 60a0 <setenv@GLIBC_2.2.5>
// ASM:     1176:	68 14 00 00 00       	push   $0x14
// ASM:     117b:	e9 a0 fe ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001180 <_ZNSt8ios_base4InitC1Ev@plt>:
// ASM:     1180:	ff 25 22 4f 00 00    	jmp    *0x4f22(%rip)        # 60a8 <_ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4>
// ASM:     1186:	68 15 00 00 00       	push   $0x15
// ASM:     118b:	e9 90 fe ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 0000000000001190 <memmove@plt>:
// ASM:     1190:	ff 25 1a 4f 00 00    	jmp    *0x4f1a(%rip)        # 60b0 <memmove@GLIBC_2.2.5>
// ASM:     1196:	68 16 00 00 00       	push   $0x16
// ASM:     119b:	e9 80 fe ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 00000000000011a0 <_ZNSolsEi@plt>:
// ASM:     11a0:	ff 25 12 4f 00 00    	jmp    *0x4f12(%rip)        # 60b8 <_ZNSolsEi@GLIBCXX_3.4>
// ASM:     11a6:	68 17 00 00 00       	push   $0x17
// ASM:     11ab:	e9 70 fe ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 00000000000011b0 <_Unwind_Resume@plt>:
// ASM:     11b0:	ff 25 0a 4f 00 00    	jmp    *0x4f0a(%rip)        # 60c0 <_Unwind_Resume@GCC_3.0>
// ASM:     11b6:	68 18 00 00 00       	push   $0x18
// ASM:     11bb:	e9 60 fe ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 00000000000011c0 <xcb_connect@plt>:
// ASM:     11c0:	ff 25 02 4f 00 00    	jmp    *0x4f02(%rip)        # 60c8 <xcb_connect@Base>
// ASM:     11c6:	68 19 00 00 00       	push   $0x19
// ASM:     11cb:	e9 50 fe ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: 00000000000011d0 <xcb_destroy_window@plt>:
// ASM:     11d0:	ff 25 fa 4e 00 00    	jmp    *0x4efa(%rip)        # 60d0 <xcb_destroy_window@Base>
// ASM:     11d6:	68 1a 00 00 00       	push   $0x1a
// ASM:     11db:	e9 40 fe ff ff       	jmp    1020 <_init+0x20>
// ASM: 
// ASM: Disassembly of section .plt.got:
// ASM: 
// ASM: 00000000000011e0 <__cxa_finalize@plt>:
// ASM:     11e0:	ff 25 d2 4d 00 00    	jmp    *0x4dd2(%rip)        # 5fb8 <__cxa_finalize@GLIBC_2.2.5>
// ASM:     11e6:	66 90                	xchg   %ax,%ax
// ASM: 
// ASM: Disassembly of section .text:
// ASM: 
// ASM: 00000000000011f0 <_start>:
// ASM:     11f0:	31 ed                	xor    %ebp,%ebp
// ASM:     11f2:	49 89 d1             	mov    %rdx,%r9
// ASM:     11f5:	5e                   	pop    %rsi
// ASM:     11f6:	48 89 e2             	mov    %rsp,%rdx
// ASM:     11f9:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
// ASM:     11fd:	50                   	push   %rax
// ASM:     11fe:	54                   	push   %rsp
// ASM:     11ff:	45 31 c0             	xor    %r8d,%r8d
// ASM:     1202:	31 c9                	xor    %ecx,%ecx
// ASM:     1204:	48 8d 3d ce 00 00 00 	lea    0xce(%rip),%rdi        # 12d9 <main>
// ASM:     120b:	ff 15 af 4d 00 00    	call   *0x4daf(%rip)        # 5fc0 <__libc_start_main@GLIBC_2.34>
// ASM:     1211:	f4                   	hlt
// ASM:     1212:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
// ASM:     1219:	00 00 00 
// ASM:     121c:	0f 1f 40 00          	nopl   0x0(%rax)
// ASM: 
// ASM: 0000000000001220 <deregister_tm_clones>:
// ASM:     1220:	48 8d 3d c9 4e 00 00 	lea    0x4ec9(%rip),%rdi        # 60f0 <__TMC_END__>
// ASM:     1227:	48 8d 05 c2 4e 00 00 	lea    0x4ec2(%rip),%rax        # 60f0 <__TMC_END__>
// ASM:     122e:	48 39 f8             	cmp    %rdi,%rax
// ASM:     1231:	74 15                	je     1248 <deregister_tm_clones+0x28>
// ASM:     1233:	48 8b 05 8e 4d 00 00 	mov    0x4d8e(%rip),%rax        # 5fc8 <_ITM_deregisterTMCloneTable@Base>
// ASM:     123a:	48 85 c0             	test   %rax,%rax
// ASM:     123d:	74 09                	je     1248 <deregister_tm_clones+0x28>
// ASM:     123f:	ff e0                	jmp    *%rax
// ASM:     1241:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
// ASM:     1248:	c3                   	ret
// ASM:     1249:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
// ASM: 
// ASM: 0000000000001250 <register_tm_clones>:
// ASM:     1250:	48 8d 3d 99 4e 00 00 	lea    0x4e99(%rip),%rdi        # 60f0 <__TMC_END__>
// ASM:     1257:	48 8d 35 92 4e 00 00 	lea    0x4e92(%rip),%rsi        # 60f0 <__TMC_END__>
// ASM:     125e:	48 29 fe             	sub    %rdi,%rsi
// ASM:     1261:	48 89 f0             	mov    %rsi,%rax
// ASM:     1264:	48 c1 ee 3f          	shr    $0x3f,%rsi
// ASM:     1268:	48 c1 f8 03          	sar    $0x3,%rax
// ASM:     126c:	48 01 c6             	add    %rax,%rsi
// ASM:     126f:	48 d1 fe             	sar    %rsi
// ASM:     1272:	74 14                	je     1288 <register_tm_clones+0x38>
// ASM:     1274:	48 8b 05 5d 4d 00 00 	mov    0x4d5d(%rip),%rax        # 5fd8 <_ITM_registerTMCloneTable@Base>
// ASM:     127b:	48 85 c0             	test   %rax,%rax
// ASM:     127e:	74 08                	je     1288 <register_tm_clones+0x38>
// ASM:     1280:	ff e0                	jmp    *%rax
// ASM:     1282:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
// ASM:     1288:	c3                   	ret
// ASM:     1289:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
// ASM: 
// ASM: 0000000000001290 <__do_global_dtors_aux>:
// ASM:     1290:	f3 0f 1e fa          	endbr64
// ASM:     1294:	80 3d 95 50 00 00 00 	cmpb   $0x0,0x5095(%rip)        # 6330 <completed.0>
// ASM:     129b:	75 2b                	jne    12c8 <__do_global_dtors_aux+0x38>
// ASM:     129d:	55                   	push   %rbp
// ASM:     129e:	48 83 3d 12 4d 00 00 	cmpq   $0x0,0x4d12(%rip)        # 5fb8 <__cxa_finalize@GLIBC_2.2.5>
// ASM:     12a5:	00 
// ASM:     12a6:	48 89 e5             	mov    %rsp,%rbp
// ASM:     12a9:	74 0c                	je     12b7 <__do_global_dtors_aux+0x27>
// ASM:     12ab:	48 8b 3d 2e 4e 00 00 	mov    0x4e2e(%rip),%rdi        # 60e0 <__dso_handle>
// ASM:     12b2:	e8 29 ff ff ff       	call   11e0 <__cxa_finalize@plt>
// ASM:     12b7:	e8 64 ff ff ff       	call   1220 <deregister_tm_clones>
// ASM:     12bc:	c6 05 6d 50 00 00 01 	movb   $0x1,0x506d(%rip)        # 6330 <completed.0>
// ASM:     12c3:	5d                   	pop    %rbp
// ASM:     12c4:	c3                   	ret
// ASM:     12c5:	0f 1f 00             	nopl   (%rax)
// ASM:     12c8:	c3                   	ret
// ASM:     12c9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
// ASM: 
// ASM: 00000000000012d0 <frame_dummy>:
// ASM:     12d0:	f3 0f 1e fa          	endbr64
// ASM:     12d4:	e9 77 ff ff ff       	jmp    1250 <register_tm_clones>
// ASM: 
// ASM: 00000000000012d9 <main>:
// ASM:     12d9:	55                   	push   %rbp
// ASM:     12da:	48 89 e5             	mov    %rsp,%rbp
// ASM:     12dd:	53                   	push   %rbx
// ASM:     12de:	48 81 ec e8 00 00 00 	sub    $0xe8,%rsp
// ASM:     12e5:	be 00 00 00 00       	mov    $0x0,%esi
// ASM:     12ea:	bf 00 00 00 00       	mov    $0x0,%edi
// ASM:     12ef:	e8 cc fe ff ff       	call   11c0 <xcb_connect@plt>
// ASM:     12f4:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
// ASM:     12f8:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     12fc:	48 89 c7             	mov    %rax,%rdi
// ASM:     12ff:	e8 7c fd ff ff       	call   1080 <xcb_connection_has_error@plt>
// ASM:     1304:	85 c0                	test   %eax,%eax
// ASM:     1306:	0f 95 c0             	setne  %al
// ASM:     1309:	84 c0                	test   %al,%al
// ASM:     130b:	74 23                	je     1330 <main+0x57>
// ASM:     130d:	48 8d 05 5c 26 00 00 	lea    0x265c(%rip),%rax        # 3970 <_ZL6HEIGHT+0x4>
// ASM:     1314:	48 89 c6             	mov    %rax,%rsi
// ASM:     1317:	48 8d 05 02 4f 00 00 	lea    0x4f02(%rip),%rax        # 6220 <_ZSt4cerr@GLIBCXX_3.4>
// ASM:     131e:	48 89 c7             	mov    %rax,%rdi
// ASM:     1321:	e8 ba fd ff ff       	call   10e0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
// ASM:     1326:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
// ASM:     132b:	e9 fe 03 00 00       	jmp    172e <main+0x455>
// ASM:     1330:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     1334:	48 89 c7             	mov    %rax,%rdi
// ASM:     1337:	e8 04 fd ff ff       	call   1040 <xcb_get_setup@plt>
// ASM:     133c:	48 89 c7             	mov    %rax,%rdi
// ASM:     133f:	e8 6c fd ff ff       	call   10b0 <xcb_setup_roots_iterator@plt>
// ASM:     1344:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
// ASM:     1348:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     134c:	48 89 c7             	mov    %rax,%rdi
// ASM:     134f:	e8 cc fd ff ff       	call   1120 <xcb_generate_id@plt>
// ASM:     1354:	89 45 d4             	mov    %eax,-0x2c(%rbp)
// ASM:     1357:	c7 45 d0 02 08 00 00 	movl   $0x802,-0x30(%rbp)
// ASM:     135e:	48 c7 45 a8 00 00 00 	movq   $0x0,-0x58(%rbp)
// ASM:     1365:	00 
// ASM:     1366:	c7 45 ac 44 80 00 00 	movl   $0x8044,-0x54(%rbp)
// ASM:     136d:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     1371:	8b 40 0c             	mov    0xc(%rax),%eax
// ASM:     1374:	89 45 a8             	mov    %eax,-0x58(%rbp)
// ASM:     1377:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     137b:	8b 70 20             	mov    0x20(%rax),%esi
// ASM:     137e:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     1382:	8b 08                	mov    (%rax),%ecx
// ASM:     1384:	8b 55 d4             	mov    -0x2c(%rbp),%edx
// ASM:     1387:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     138b:	48 83 ec 08          	sub    $0x8,%rsp
// ASM:     138f:	48 8d 7d a8          	lea    -0x58(%rbp),%rdi
// ASM:     1393:	57                   	push   %rdi
// ASM:     1394:	8b 7d d0             	mov    -0x30(%rbp),%edi
// ASM:     1397:	57                   	push   %rdi
// ASM:     1398:	56                   	push   %rsi
// ASM:     1399:	6a 01                	push   $0x1
// ASM:     139b:	6a 00                	push   $0x0
// ASM:     139d:	68 58 02 00 00       	push   $0x258
// ASM:     13a2:	68 20 03 00 00       	push   $0x320
// ASM:     13a7:	41 b9 00 00 00 00    	mov    $0x0,%r9d
// ASM:     13ad:	41 b8 00 00 00 00    	mov    $0x0,%r8d
// ASM:     13b3:	be 00 00 00 00       	mov    $0x0,%esi
// ASM:     13b8:	48 89 c7             	mov    %rax,%rdi
// ASM:     13bb:	e8 a0 fd ff ff       	call   1160 <xcb_create_window@plt>
// ASM:     13c0:	48 83 c4 40          	add    $0x40,%rsp
// ASM:     13c4:	8b 55 d4             	mov    -0x2c(%rbp),%edx
// ASM:     13c7:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     13cb:	89 d6                	mov    %edx,%esi
// ASM:     13cd:	48 89 c7             	mov    %rax,%rdi
// ASM:     13d0:	e8 5b fd ff ff       	call   1130 <xcb_map_window@plt>
// ASM:     13d5:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     13d9:	48 89 c7             	mov    %rax,%rdi
// ASM:     13dc:	e8 7f fc ff ff       	call   1060 <xcb_flush@plt>
// ASM:     13e1:	48 8d 05 ac 25 00 00 	lea    0x25ac(%rip),%rax        # 3994 <_ZL6HEIGHT+0x28>
// ASM:     13e8:	48 89 c6             	mov    %rax,%rsi
// ASM:     13eb:	48 8d 05 0e 4d 00 00 	lea    0x4d0e(%rip),%rax        # 6100 <_ZSt4cout@GLIBCXX_3.4>
// ASM:     13f2:	48 89 c7             	mov    %rax,%rdi
// ASM:     13f5:	e8 e6 fc ff ff       	call   10e0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
// ASM:     13fa:	66 0f ef c0          	pxor   %xmm0,%xmm0
// ASM:     13fe:	0f 29 85 70 ff ff ff 	movaps %xmm0,-0x90(%rbp)
// ASM:     1405:	0f 29 45 80          	movaps %xmm0,-0x80(%rbp)
// ASM:     1409:	0f 29 45 90          	movaps %xmm0,-0x70(%rbp)
// ASM:     140d:	c7 85 70 ff ff ff 00 	movl   $0x0,-0x90(%rbp)
// ASM:     1414:	00 00 00 
// ASM:     1417:	48 8d 05 90 25 00 00 	lea    0x2590(%rip),%rax        # 39ae <_ZL6HEIGHT+0x42>
// ASM:     141e:	48 89 45 80          	mov    %rax,-0x80(%rbp)
// ASM:     1422:	c7 45 88 00 00 40 00 	movl   $0x400000,-0x78(%rbp)
// ASM:     1429:	48 8d 05 8f 25 00 00 	lea    0x258f(%rip),%rax        # 39bf <_ZL6HEIGHT+0x53>
// ASM:     1430:	48 89 45 90          	mov    %rax,-0x70(%rbp)
// ASM:     1434:	c7 45 98 00 00 40 00 	movl   $0x400000,-0x68(%rbp)
// ASM:     143b:	c7 45 9c 00 00 40 00 	movl   $0x400000,-0x64(%rbp)
// ASM:     1442:	66 0f ef c0          	pxor   %xmm0,%xmm0
// ASM:     1446:	0f 29 85 30 ff ff ff 	movaps %xmm0,-0xd0(%rbp)
// ASM:     144d:	0f 29 85 40 ff ff ff 	movaps %xmm0,-0xc0(%rbp)
// ASM:     1454:	0f 29 85 50 ff ff ff 	movaps %xmm0,-0xb0(%rbp)
// ASM:     145b:	0f 29 85 60 ff ff ff 	movaps %xmm0,-0xa0(%rbp)
// ASM:     1462:	c7 85 30 ff ff ff 01 	movl   $0x1,-0xd0(%rbp)
// ASM:     1469:	00 00 00 
// ASM:     146c:	48 8d 85 70 ff ff ff 	lea    -0x90(%rbp),%rax
// ASM:     1473:	48 89 85 48 ff ff ff 	mov    %rax,-0xb8(%rbp)
// ASM:     147a:	48 8d 55 a0          	lea    -0x60(%rbp),%rdx
// ASM:     147e:	48 8d 85 30 ff ff ff 	lea    -0xd0(%rbp),%rax
// ASM:     1485:	be 00 00 00 00       	mov    $0x0,%esi
// ASM:     148a:	48 89 c7             	mov    %rax,%rdi
// ASM:     148d:	e8 be fc ff ff       	call   1150 <vkCreateInstance@plt>
// ASM:     1492:	85 c0                	test   %eax,%eax
// ASM:     1494:	0f 95 c0             	setne  %al
// ASM:     1497:	84 c0                	test   %al,%al
// ASM:     1499:	74 23                	je     14be <main+0x1e5>
// ASM:     149b:	48 8d 05 2e 25 00 00 	lea    0x252e(%rip),%rax        # 39d0 <_ZL6HEIGHT+0x64>
// ASM:     14a2:	48 89 c6             	mov    %rax,%rsi
// ASM:     14a5:	48 8d 05 74 4d 00 00 	lea    0x4d74(%rip),%rax        # 6220 <_ZSt4cerr@GLIBCXX_3.4>
// ASM:     14ac:	48 89 c7             	mov    %rax,%rdi
// ASM:     14af:	e8 2c fc ff ff       	call   10e0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
// ASM:     14b4:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
// ASM:     14b9:	e9 70 02 00 00       	jmp    172e <main+0x455>
// ASM:     14be:	48 8d 05 2f 25 00 00 	lea    0x252f(%rip),%rax        # 39f4 <_ZL6HEIGHT+0x88>
// ASM:     14c5:	48 89 c6             	mov    %rax,%rsi
// ASM:     14c8:	48 8d 05 31 4c 00 00 	lea    0x4c31(%rip),%rax        # 6100 <_ZSt4cout@GLIBCXX_3.4>
// ASM:     14cf:	48 89 c7             	mov    %rax,%rdi
// ASM:     14d2:	e8 09 fc ff ff       	call   10e0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
// ASM:     14d7:	ba 01 00 00 00       	mov    $0x1,%edx
// ASM:     14dc:	48 8d 05 2e 25 00 00 	lea    0x252e(%rip),%rax        # 3a11 <_ZL6HEIGHT+0xa5>
// ASM:     14e3:	48 89 c6             	mov    %rax,%rsi
// ASM:     14e6:	48 8d 05 26 25 00 00 	lea    0x2526(%rip),%rax        # 3a13 <_ZL6HEIGHT+0xa7>
// ASM:     14ed:	48 89 c7             	mov    %rax,%rdi
// ASM:     14f0:	e8 7b fc ff ff       	call   1170 <setenv@plt>
// ASM:     14f5:	ba 01 00 00 00       	mov    $0x1,%edx
// ASM:     14fa:	48 8d 05 2c 25 00 00 	lea    0x252c(%rip),%rax        # 3a2d <_ZL6HEIGHT+0xc1>
// ASM:     1501:	48 89 c6             	mov    %rax,%rsi
// ASM:     1504:	48 8d 05 29 25 00 00 	lea    0x2529(%rip),%rax        # 3a34 <_ZL6HEIGHT+0xc8>
// ASM:     150b:	48 89 c7             	mov    %rax,%rdi
// ASM:     150e:	e8 5d fc ff ff       	call   1170 <setenv@plt>
// ASM:     1513:	ba 01 00 00 00       	mov    $0x1,%edx
// ASM:     1518:	48 8d 05 31 25 00 00 	lea    0x2531(%rip),%rax        # 3a50 <_ZL6HEIGHT+0xe4>
// ASM:     151f:	48 89 c6             	mov    %rax,%rsi
// ASM:     1522:	48 8d 05 4f 25 00 00 	lea    0x254f(%rip),%rax        # 3a78 <_ZL6HEIGHT+0x10c>
// ASM:     1529:	48 89 c7             	mov    %rax,%rdi
// ASM:     152c:	e8 3f fc ff ff       	call   1170 <setenv@plt>
// ASM:     1531:	48 8d 05 51 25 00 00 	lea    0x2551(%rip),%rax        # 3a89 <_ZL6HEIGHT+0x11d>
// ASM:     1538:	48 89 c6             	mov    %rax,%rsi
// ASM:     153b:	48 8d 05 be 4b 00 00 	lea    0x4bbe(%rip),%rax        # 6100 <_ZSt4cout@GLIBCXX_3.4>
// ASM:     1542:	48 89 c7             	mov    %rax,%rdi
// ASM:     1545:	e8 96 fb ff ff       	call   10e0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
// ASM:     154a:	48 8d 85 10 ff ff ff 	lea    -0xf0(%rbp),%rax
// ASM:     1551:	48 89 c7             	mov    %rax,%rdi
// ASM:     1554:	e8 ad 02 00 00       	call   1806 <_ZNSt6vectorI5PointSaIS0_EEC1Ev>
// ASM:     1559:	c6 45 ef 01          	movb   $0x1,-0x11(%rbp)
// ASM:     155d:	e9 6b 01 00 00       	jmp    16cd <main+0x3f4>
// ASM:     1562:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
// ASM:     1566:	0f b6 00             	movzbl (%rax),%eax
// ASM:     1569:	0f b6 c0             	movzbl %al,%eax
// ASM:     156c:	24 7f                	and    $0x7f,%al
// ASM:     156e:	83 f8 0c             	cmp    $0xc,%eax
// ASM:     1571:	0f 84 23 01 00 00    	je     169a <main+0x3c1>
// ASM:     1577:	83 f8 0c             	cmp    $0xc,%eax
// ASM:     157a:	0f 8f 1d 01 00 00    	jg     169d <main+0x3c4>
// ASM:     1580:	83 f8 04             	cmp    $0x4,%eax
// ASM:     1583:	0f 84 b1 00 00 00    	je     163a <main+0x361>
// ASM:     1589:	83 f8 06             	cmp    $0x6,%eax
// ASM:     158c:	74 05                	je     1593 <main+0x2ba>
// ASM:     158e:	e9 0a 01 00 00       	jmp    169d <main+0x3c4>
// ASM:     1593:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
// ASM:     1597:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
// ASM:     159b:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
// ASM:     159f:	0f b7 40 18          	movzwl 0x18(%rax),%eax
// ASM:     15a3:	98                   	cwtl
// ASM:     15a4:	89 45 b0             	mov    %eax,-0x50(%rbp)
// ASM:     15a7:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
// ASM:     15ab:	0f b7 40 1a          	movzwl 0x1a(%rax),%eax
// ASM:     15af:	98                   	cwtl
// ASM:     15b0:	89 45 b4             	mov    %eax,-0x4c(%rbp)
// ASM:     15b3:	48 8d 55 b0          	lea    -0x50(%rbp),%rdx
// ASM:     15b7:	48 8d 85 10 ff ff ff 	lea    -0xf0(%rbp),%rax
// ASM:     15be:	48 89 d6             	mov    %rdx,%rsi
// ASM:     15c1:	48 89 c7             	mov    %rax,%rdi
// ASM:     15c4:	e8 2f 03 00 00       	call   18f8 <_ZNSt6vectorI5PointSaIS0_EE9push_backEOS0_>
// ASM:     15c9:	48 8d 05 d7 24 00 00 	lea    0x24d7(%rip),%rax        # 3aa7 <_ZL6HEIGHT+0x13b>
// ASM:     15d0:	48 89 c6             	mov    %rax,%rsi
// ASM:     15d3:	48 8d 05 26 4b 00 00 	lea    0x4b26(%rip),%rax        # 6100 <_ZSt4cout@GLIBCXX_3.4>
// ASM:     15da:	48 89 c7             	mov    %rax,%rdi
// ASM:     15dd:	e8 fe fa ff ff       	call   10e0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
// ASM:     15e2:	48 89 c2             	mov    %rax,%rdx
// ASM:     15e5:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
// ASM:     15e9:	0f b7 40 18          	movzwl 0x18(%rax),%eax
// ASM:     15ed:	98                   	cwtl
// ASM:     15ee:	89 c6                	mov    %eax,%esi
// ASM:     15f0:	48 89 d7             	mov    %rdx,%rdi
// ASM:     15f3:	e8 d8 fa ff ff       	call   10d0 <_ZNSolsEs@plt>
// ASM:     15f8:	48 89 c2             	mov    %rax,%rdx
// ASM:     15fb:	48 8d 05 ba 24 00 00 	lea    0x24ba(%rip),%rax        # 3abc <_ZL6HEIGHT+0x150>
// ASM:     1602:	48 89 c6             	mov    %rax,%rsi
// ASM:     1605:	48 89 d7             	mov    %rdx,%rdi
// ASM:     1608:	e8 d3 fa ff ff       	call   10e0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
// ASM:     160d:	48 89 c2             	mov    %rax,%rdx
// ASM:     1610:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
// ASM:     1614:	0f b7 40 1a          	movzwl 0x1a(%rax),%eax
// ASM:     1618:	98                   	cwtl
// ASM:     1619:	89 c6                	mov    %eax,%esi
// ASM:     161b:	48 89 d7             	mov    %rdx,%rdi
// ASM:     161e:	e8 ad fa ff ff       	call   10d0 <_ZNSolsEs@plt>
// ASM:     1623:	48 89 c2             	mov    %rax,%rdx
// ASM:     1626:	48 8d 05 92 24 00 00 	lea    0x2492(%rip),%rax        # 3abf <_ZL6HEIGHT+0x153>
// ASM:     162d:	48 89 c6             	mov    %rax,%rsi
// ASM:     1630:	48 89 d7             	mov    %rdx,%rdi
// ASM:     1633:	e8 a8 fa ff ff       	call   10e0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
// ASM:     1638:	eb 67                	jmp    16a1 <main+0x3c8>
// ASM:     163a:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
// ASM:     163e:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
// ASM:     1642:	48 8d 05 79 24 00 00 	lea    0x2479(%rip),%rax        # 3ac2 <_ZL6HEIGHT+0x156>
// ASM:     1649:	48 89 c6             	mov    %rax,%rsi
// ASM:     164c:	48 8d 05 ad 4a 00 00 	lea    0x4aad(%rip),%rax        # 6100 <_ZSt4cout@GLIBCXX_3.4>
// ASM:     1653:	48 89 c7             	mov    %rax,%rdi
// ASM:     1656:	e8 85 fa ff ff       	call   10e0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
// ASM:     165b:	48 89 c2             	mov    %rax,%rdx
// ASM:     165e:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
// ASM:     1662:	0f b6 40 01          	movzbl 0x1(%rax),%eax
// ASM:     1666:	0f b6 c0             	movzbl %al,%eax
// ASM:     1669:	89 c6                	mov    %eax,%esi
// ASM:     166b:	48 89 d7             	mov    %rdx,%rdi
// ASM:     166e:	e8 2d fb ff ff       	call   11a0 <_ZNSolsEi@plt>
// ASM:     1673:	48 89 c2             	mov    %rax,%rdx
// ASM:     1676:	48 8d 05 59 24 00 00 	lea    0x2459(%rip),%rax        # 3ad6 <_ZL6HEIGHT+0x16a>
// ASM:     167d:	48 89 c6             	mov    %rax,%rsi
// ASM:     1680:	48 89 d7             	mov    %rdx,%rdi
// ASM:     1683:	e8 58 fa ff ff       	call   10e0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
// ASM:     1688:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
// ASM:     168c:	0f b6 40 01          	movzbl 0x1(%rax),%eax
// ASM:     1690:	3c 01                	cmp    $0x1,%al
// ASM:     1692:	75 0c                	jne    16a0 <main+0x3c7>
// ASM:     1694:	c6 45 ef 00          	movb   $0x0,-0x11(%rbp)
// ASM:     1698:	eb 06                	jmp    16a0 <main+0x3c7>
// ASM:     169a:	90                   	nop
// ASM:     169b:	eb 04                	jmp    16a1 <main+0x3c8>
// ASM:     169d:	90                   	nop
// ASM:     169e:	eb 01                	jmp    16a1 <main+0x3c8>
// ASM:     16a0:	90                   	nop
// ASM:     16a1:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
// ASM:     16a5:	48 89 c7             	mov    %rax,%rdi
// ASM:     16a8:	e8 93 fa ff ff       	call   1140 <free@plt>
// ASM:     16ad:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     16b1:	48 89 c7             	mov    %rax,%rdi
// ASM:     16b4:	e8 97 f9 ff ff       	call   1050 <xcb_poll_for_event@plt>
// ASM:     16b9:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
// ASM:     16bd:	48 83 7d c8 00       	cmpq   $0x0,-0x38(%rbp)
// ASM:     16c2:	0f 95 c0             	setne  %al
// ASM:     16c5:	84 c0                	test   %al,%al
// ASM:     16c7:	0f 85 95 fe ff ff    	jne    1562 <main+0x289>
// ASM:     16cd:	80 7d ef 00          	cmpb   $0x0,-0x11(%rbp)
// ASM:     16d1:	75 da                	jne    16ad <main+0x3d4>
// ASM:     16d3:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
// ASM:     16d7:	be 00 00 00 00       	mov    $0x0,%esi
// ASM:     16dc:	48 89 c7             	mov    %rax,%rdi
// ASM:     16df:	e8 2c fa ff ff       	call   1110 <vkDestroyInstance@plt>
// ASM:     16e4:	8b 55 d4             	mov    -0x2c(%rbp),%edx
// ASM:     16e7:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     16eb:	89 d6                	mov    %edx,%esi
// ASM:     16ed:	48 89 c7             	mov    %rax,%rdi
// ASM:     16f0:	e8 db fa ff ff       	call   11d0 <xcb_destroy_window@plt>
// ASM:     16f5:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     16f9:	48 89 c7             	mov    %rax,%rdi
// ASM:     16fc:	e8 9f f9 ff ff       	call   10a0 <xcb_disconnect@plt>
// ASM:     1701:	48 8d 05 d0 23 00 00 	lea    0x23d0(%rip),%rax        # 3ad8 <_ZL6HEIGHT+0x16c>
// ASM:     1708:	48 89 c6             	mov    %rax,%rsi
// ASM:     170b:	48 8d 05 ee 49 00 00 	lea    0x49ee(%rip),%rax        # 6100 <_ZSt4cout@GLIBCXX_3.4>
// ASM:     1712:	48 89 c7             	mov    %rax,%rdi
// ASM:     1715:	e8 c6 f9 ff ff       	call   10e0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
// ASM:     171a:	bb 00 00 00 00       	mov    $0x0,%ebx
// ASM:     171f:	48 8d 85 10 ff ff ff 	lea    -0xf0(%rbp),%rax
// ASM:     1726:	48 89 c7             	mov    %rax,%rdi
// ASM:     1729:	e8 86 01 00 00       	call   18b4 <_ZNSt6vectorI5PointSaIS0_EED1Ev>
// ASM:     172e:	89 d8                	mov    %ebx,%eax
// ASM:     1730:	eb 1d                	jmp    174f <main+0x476>
// ASM:     1732:	48 89 c3             	mov    %rax,%rbx
// ASM:     1735:	48 8d 85 10 ff ff ff 	lea    -0xf0(%rbp),%rax
// ASM:     173c:	48 89 c7             	mov    %rax,%rdi
// ASM:     173f:	e8 70 01 00 00       	call   18b4 <_ZNSt6vectorI5PointSaIS0_EED1Ev>
// ASM:     1744:	48 89 d8             	mov    %rbx,%rax
// ASM:     1747:	48 89 c7             	mov    %rax,%rdi
// ASM:     174a:	e8 61 fa ff ff       	call   11b0 <_Unwind_Resume@plt>
// ASM:     174f:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
// ASM:     1753:	c9                   	leave
// ASM:     1754:	c3                   	ret
// ASM: 
// ASM: 0000000000001755 <_Z41__static_initialization_and_destruction_0ii>:
// ASM:     1755:	55                   	push   %rbp
// ASM:     1756:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1759:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     175d:	89 7d fc             	mov    %edi,-0x4(%rbp)
// ASM:     1760:	89 75 f8             	mov    %esi,-0x8(%rbp)
// ASM:     1763:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
// ASM:     1767:	75 3b                	jne    17a4 <_Z41__static_initialization_and_destruction_0ii+0x4f>
// ASM:     1769:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
// ASM:     1770:	75 32                	jne    17a4 <_Z41__static_initialization_and_destruction_0ii+0x4f>
// ASM:     1772:	48 8d 05 b8 4b 00 00 	lea    0x4bb8(%rip),%rax        # 6331 <_ZStL8__ioinit>
// ASM:     1779:	48 89 c7             	mov    %rax,%rdi
// ASM:     177c:	e8 ff f9 ff ff       	call   1180 <_ZNSt8ios_base4InitC1Ev@plt>
// ASM:     1781:	48 8d 05 58 49 00 00 	lea    0x4958(%rip),%rax        # 60e0 <__dso_handle>
// ASM:     1788:	48 89 c2             	mov    %rax,%rdx
// ASM:     178b:	48 8d 05 9f 4b 00 00 	lea    0x4b9f(%rip),%rax        # 6331 <_ZStL8__ioinit>
// ASM:     1792:	48 89 c6             	mov    %rax,%rsi
// ASM:     1795:	48 8b 05 44 48 00 00 	mov    0x4844(%rip),%rax        # 5fe0 <_ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4>
// ASM:     179c:	48 89 c7             	mov    %rax,%rdi
// ASM:     179f:	e8 1c f9 ff ff       	call   10c0 <__cxa_atexit@plt>
// ASM:     17a4:	90                   	nop
// ASM:     17a5:	c9                   	leave
// ASM:     17a6:	c3                   	ret
// ASM: 
// ASM: 00000000000017a7 <_GLOBAL__sub_I_main>:
// ASM:     17a7:	55                   	push   %rbp
// ASM:     17a8:	48 89 e5             	mov    %rsp,%rbp
// ASM:     17ab:	be ff ff 00 00       	mov    $0xffff,%esi
// ASM:     17b0:	bf 01 00 00 00       	mov    $0x1,%edi
// ASM:     17b5:	e8 9b ff ff ff       	call   1755 <_Z41__static_initialization_and_destruction_0ii>
// ASM:     17ba:	5d                   	pop    %rbp
// ASM:     17bb:	c3                   	ret
// ASM: 
// ASM: 00000000000017bc <_ZnwmPv>:
// ASM:     17bc:	55                   	push   %rbp
// ASM:     17bd:	48 89 e5             	mov    %rsp,%rbp
// ASM:     17c0:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     17c4:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     17c8:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
// ASM:     17cc:	5d                   	pop    %rbp
// ASM:     17cd:	c3                   	ret
// ASM: 
// ASM: 00000000000017ce <_ZNSt12_Vector_baseI5PointSaIS0_EE12_Vector_implD1Ev>:
// ASM:     17ce:	55                   	push   %rbp
// ASM:     17cf:	48 89 e5             	mov    %rsp,%rbp
// ASM:     17d2:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     17d6:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     17da:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     17de:	48 89 c7             	mov    %rax,%rdi
// ASM:     17e1:	e8 64 00 00 00       	call   184a <_ZNSaI5PointED1Ev>
// ASM:     17e6:	90                   	nop
// ASM:     17e7:	c9                   	leave
// ASM:     17e8:	c3                   	ret
// ASM:     17e9:	90                   	nop
// ASM: 
// ASM: 00000000000017ea <_ZNSt12_Vector_baseI5PointSaIS0_EEC1Ev>:
// ASM:     17ea:	55                   	push   %rbp
// ASM:     17eb:	48 89 e5             	mov    %rsp,%rbp
// ASM:     17ee:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     17f2:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     17f6:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     17fa:	48 89 c7             	mov    %rax,%rdi
// ASM:     17fd:	e8 20 00 00 00       	call   1822 <_ZNSt12_Vector_baseI5PointSaIS0_EE12_Vector_implC1Ev>
// ASM:     1802:	90                   	nop
// ASM:     1803:	c9                   	leave
// ASM:     1804:	c3                   	ret
// ASM:     1805:	90                   	nop
// ASM: 
// ASM: 0000000000001806 <_ZNSt6vectorI5PointSaIS0_EEC1Ev>:
// ASM:     1806:	55                   	push   %rbp
// ASM:     1807:	48 89 e5             	mov    %rsp,%rbp
// ASM:     180a:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     180e:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1812:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1816:	48 89 c7             	mov    %rax,%rdi
// ASM:     1819:	e8 cc ff ff ff       	call   17ea <_ZNSt12_Vector_baseI5PointSaIS0_EEC1Ev>
// ASM:     181e:	90                   	nop
// ASM:     181f:	c9                   	leave
// ASM:     1820:	c3                   	ret
// ASM:     1821:	90                   	nop
// ASM: 
// ASM: 0000000000001822 <_ZNSt12_Vector_baseI5PointSaIS0_EE12_Vector_implC1Ev>:
// ASM:     1822:	55                   	push   %rbp
// ASM:     1823:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1826:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     182a:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     182e:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1832:	48 89 c7             	mov    %rax,%rdi
// ASM:     1835:	e8 f0 00 00 00       	call   192a <_ZNSaI5PointEC1Ev>
// ASM:     183a:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     183e:	48 89 c7             	mov    %rax,%rdi
// ASM:     1841:	e8 00 01 00 00       	call   1946 <_ZNSt12_Vector_baseI5PointSaIS0_EE17_Vector_impl_dataC1Ev>
// ASM:     1846:	90                   	nop
// ASM:     1847:	c9                   	leave
// ASM:     1848:	c3                   	ret
// ASM:     1849:	90                   	nop
// ASM: 
// ASM: 000000000000184a <_ZNSaI5PointED1Ev>:
// ASM:     184a:	55                   	push   %rbp
// ASM:     184b:	48 89 e5             	mov    %rsp,%rbp
// ASM:     184e:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     1852:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1856:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     185a:	48 89 c7             	mov    %rax,%rdi
// ASM:     185d:	e8 12 01 00 00       	call   1974 <_ZNSt15__new_allocatorI5PointED1Ev>
// ASM:     1862:	90                   	nop
// ASM:     1863:	c9                   	leave
// ASM:     1864:	c3                   	ret
// ASM:     1865:	90                   	nop
// ASM: 
// ASM: 0000000000001866 <_ZNSt12_Vector_baseI5PointSaIS0_EED1Ev>:
// ASM:     1866:	55                   	push   %rbp
// ASM:     1867:	48 89 e5             	mov    %rsp,%rbp
// ASM:     186a:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     186e:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1872:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1876:	48 8b 50 10          	mov    0x10(%rax),%rdx
// ASM:     187a:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     187e:	48 8b 00             	mov    (%rax),%rax
// ASM:     1881:	48 29 c2             	sub    %rax,%rdx
// ASM:     1884:	48 89 d0             	mov    %rdx,%rax
// ASM:     1887:	48 c1 f8 03          	sar    $0x3,%rax
// ASM:     188b:	48 89 c2             	mov    %rax,%rdx
// ASM:     188e:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1892:	48 8b 08             	mov    (%rax),%rcx
// ASM:     1895:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1899:	48 89 ce             	mov    %rcx,%rsi
// ASM:     189c:	48 89 c7             	mov    %rax,%rdi
// ASM:     189f:	e8 dc 00 00 00       	call   1980 <_ZNSt12_Vector_baseI5PointSaIS0_EE13_M_deallocateEPS0_m>
// ASM:     18a4:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     18a8:	48 89 c7             	mov    %rax,%rdi
// ASM:     18ab:	e8 1e ff ff ff       	call   17ce <_ZNSt12_Vector_baseI5PointSaIS0_EE12_Vector_implD1Ev>
// ASM:     18b0:	90                   	nop
// ASM:     18b1:	c9                   	leave
// ASM:     18b2:	c3                   	ret
// ASM:     18b3:	90                   	nop
// ASM: 
// ASM: 00000000000018b4 <_ZNSt6vectorI5PointSaIS0_EED1Ev>:
// ASM:     18b4:	55                   	push   %rbp
// ASM:     18b5:	48 89 e5             	mov    %rsp,%rbp
// ASM:     18b8:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     18bc:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     18c0:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     18c4:	48 89 c7             	mov    %rax,%rdi
// ASM:     18c7:	e8 ea 00 00 00       	call   19b6 <_ZNSt12_Vector_baseI5PointSaIS0_EE19_M_get_Tp_allocatorEv>
// ASM:     18cc:	48 89 c2             	mov    %rax,%rdx
// ASM:     18cf:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     18d3:	48 8b 48 08          	mov    0x8(%rax),%rcx
// ASM:     18d7:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     18db:	48 8b 00             	mov    (%rax),%rax
// ASM:     18de:	48 89 ce             	mov    %rcx,%rsi
// ASM:     18e1:	48 89 c7             	mov    %rax,%rdi
// ASM:     18e4:	e8 db 00 00 00       	call   19c4 <_ZSt8_DestroyIP5PointS0_EvT_S2_RSaIT0_E>
// ASM:     18e9:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     18ed:	48 89 c7             	mov    %rax,%rdi
// ASM:     18f0:	e8 71 ff ff ff       	call   1866 <_ZNSt12_Vector_baseI5PointSaIS0_EED1Ev>
// ASM:     18f5:	90                   	nop
// ASM:     18f6:	c9                   	leave
// ASM:     18f7:	c3                   	ret
// ASM: 
// ASM: 00000000000018f8 <_ZNSt6vectorI5PointSaIS0_EE9push_backEOS0_>:
// ASM:     18f8:	55                   	push   %rbp
// ASM:     18f9:	48 89 e5             	mov    %rsp,%rbp
// ASM:     18fc:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     1900:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1904:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     1908:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
// ASM:     190c:	48 89 c7             	mov    %rax,%rdi
// ASM:     190f:	e8 da 00 00 00       	call   19ee <_ZSt4moveIR5PointEONSt16remove_referenceIT_E4typeEOS3_>
// ASM:     1914:	48 89 c2             	mov    %rax,%rdx
// ASM:     1917:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     191b:	48 89 d6             	mov    %rdx,%rsi
// ASM:     191e:	48 89 c7             	mov    %rax,%rdi
// ASM:     1921:	e8 d6 00 00 00       	call   19fc <_ZNSt6vectorI5PointSaIS0_EE12emplace_backIJS0_EEERS0_DpOT_>
// ASM:     1926:	90                   	nop
// ASM:     1927:	c9                   	leave
// ASM:     1928:	c3                   	ret
// ASM:     1929:	90                   	nop
// ASM: 
// ASM: 000000000000192a <_ZNSaI5PointEC1Ev>:
// ASM:     192a:	55                   	push   %rbp
// ASM:     192b:	48 89 e5             	mov    %rsp,%rbp
// ASM:     192e:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     1932:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1936:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     193a:	48 89 c7             	mov    %rax,%rdi
// ASM:     193d:	e8 5e 01 00 00       	call   1aa0 <_ZNSt15__new_allocatorI5PointEC1Ev>
// ASM:     1942:	90                   	nop
// ASM:     1943:	c9                   	leave
// ASM:     1944:	c3                   	ret
// ASM:     1945:	90                   	nop
// ASM: 
// ASM: 0000000000001946 <_ZNSt12_Vector_baseI5PointSaIS0_EE17_Vector_impl_dataC1Ev>:
// ASM:     1946:	55                   	push   %rbp
// ASM:     1947:	48 89 e5             	mov    %rsp,%rbp
// ASM:     194a:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     194e:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1952:	48 c7 00 00 00 00 00 	movq   $0x0,(%rax)
// ASM:     1959:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     195d:	48 c7 40 08 00 00 00 	movq   $0x0,0x8(%rax)
// ASM:     1964:	00 
// ASM:     1965:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1969:	48 c7 40 10 00 00 00 	movq   $0x0,0x10(%rax)
// ASM:     1970:	00 
// ASM:     1971:	90                   	nop
// ASM:     1972:	5d                   	pop    %rbp
// ASM:     1973:	c3                   	ret
// ASM: 
// ASM: 0000000000001974 <_ZNSt15__new_allocatorI5PointED1Ev>:
// ASM:     1974:	55                   	push   %rbp
// ASM:     1975:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1978:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     197c:	90                   	nop
// ASM:     197d:	5d                   	pop    %rbp
// ASM:     197e:	c3                   	ret
// ASM:     197f:	90                   	nop
// ASM: 
// ASM: 0000000000001980 <_ZNSt12_Vector_baseI5PointSaIS0_EE13_M_deallocateEPS0_m>:
// ASM:     1980:	55                   	push   %rbp
// ASM:     1981:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1984:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     1988:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     198c:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     1990:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
// ASM:     1994:	48 83 7d f0 00       	cmpq   $0x0,-0x10(%rbp)
// ASM:     1999:	74 17                	je     19b2 <_ZNSt12_Vector_baseI5PointSaIS0_EE13_M_deallocateEPS0_m+0x32>
// ASM:     199b:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     199f:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
// ASM:     19a3:	48 8b 4d f0          	mov    -0x10(%rbp),%rcx
// ASM:     19a7:	48 89 ce             	mov    %rcx,%rsi
// ASM:     19aa:	48 89 c7             	mov    %rax,%rdi
// ASM:     19ad:	e8 f9 00 00 00       	call   1aab <_ZNSt16allocator_traitsISaI5PointEE10deallocateERS1_PS0_m>
// ASM:     19b2:	90                   	nop
// ASM:     19b3:	c9                   	leave
// ASM:     19b4:	c3                   	ret
// ASM:     19b5:	90                   	nop
// ASM: 
// ASM: 00000000000019b6 <_ZNSt12_Vector_baseI5PointSaIS0_EE19_M_get_Tp_allocatorEv>:
// ASM:     19b6:	55                   	push   %rbp
// ASM:     19b7:	48 89 e5             	mov    %rsp,%rbp
// ASM:     19ba:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     19be:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     19c2:	5d                   	pop    %rbp
// ASM:     19c3:	c3                   	ret
// ASM: 
// ASM: 00000000000019c4 <_ZSt8_DestroyIP5PointS0_EvT_S2_RSaIT0_E>:
// ASM:     19c4:	55                   	push   %rbp
// ASM:     19c5:	48 89 e5             	mov    %rsp,%rbp
// ASM:     19c8:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     19cc:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     19d0:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     19d4:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
// ASM:     19d8:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
// ASM:     19dc:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     19e0:	48 89 d6             	mov    %rdx,%rsi
// ASM:     19e3:	48 89 c7             	mov    %rax,%rdi
// ASM:     19e6:	e8 ee 00 00 00       	call   1ad9 <_ZSt8_DestroyIP5PointEvT_S2_>
// ASM:     19eb:	90                   	nop
// ASM:     19ec:	c9                   	leave
// ASM:     19ed:	c3                   	ret
// ASM: 
// ASM: 00000000000019ee <_ZSt4moveIR5PointEONSt16remove_referenceIT_E4typeEOS3_>:
// ASM:     19ee:	55                   	push   %rbp
// ASM:     19ef:	48 89 e5             	mov    %rsp,%rbp
// ASM:     19f2:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     19f6:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     19fa:	5d                   	pop    %rbp
// ASM:     19fb:	c3                   	ret
// ASM: 
// ASM: 00000000000019fc <_ZNSt6vectorI5PointSaIS0_EE12emplace_backIJS0_EEERS0_DpOT_>:
// ASM:     19fc:	55                   	push   %rbp
// ASM:     19fd:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1a00:	53                   	push   %rbx
// ASM:     1a01:	48 83 ec 18          	sub    $0x18,%rsp
// ASM:     1a05:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
// ASM:     1a09:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
// ASM:     1a0d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1a11:	48 8b 50 08          	mov    0x8(%rax),%rdx
// ASM:     1a15:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1a19:	48 8b 40 10          	mov    0x10(%rax),%rax
// ASM:     1a1d:	48 39 c2             	cmp    %rax,%rdx
// ASM:     1a20:	74 3c                	je     1a5e <_ZNSt6vectorI5PointSaIS0_EE12emplace_backIJS0_EEERS0_DpOT_+0x62>
// ASM:     1a22:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     1a26:	48 89 c7             	mov    %rax,%rdi
// ASM:     1a29:	e8 d1 00 00 00       	call   1aff <_ZSt7forwardI5PointEOT_RNSt16remove_referenceIS1_E4typeE>
// ASM:     1a2e:	48 89 c2             	mov    %rax,%rdx
// ASM:     1a31:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1a35:	48 8b 48 08          	mov    0x8(%rax),%rcx
// ASM:     1a39:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1a3d:	48 89 ce             	mov    %rcx,%rsi
// ASM:     1a40:	48 89 c7             	mov    %rax,%rdi
// ASM:     1a43:	e8 c5 00 00 00       	call   1b0d <_ZNSt16allocator_traitsISaI5PointEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_>
// ASM:     1a48:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1a4c:	48 8b 40 08          	mov    0x8(%rax),%rax
// ASM:     1a50:	48 8d 50 08          	lea    0x8(%rax),%rdx
// ASM:     1a54:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1a58:	48 89 50 08          	mov    %rdx,0x8(%rax)
// ASM:     1a5c:	eb 30                	jmp    1a8e <_ZNSt6vectorI5PointSaIS0_EE12emplace_backIJS0_EEERS0_DpOT_+0x92>
// ASM:     1a5e:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     1a62:	48 89 c7             	mov    %rax,%rdi
// ASM:     1a65:	e8 95 00 00 00       	call   1aff <_ZSt7forwardI5PointEOT_RNSt16remove_referenceIS1_E4typeE>
// ASM:     1a6a:	48 89 c3             	mov    %rax,%rbx
// ASM:     1a6d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1a71:	48 89 c7             	mov    %rax,%rdi
// ASM:     1a74:	e8 cd 00 00 00       	call   1b46 <_ZNSt6vectorI5PointSaIS0_EE3endEv>
// ASM:     1a79:	48 89 c1             	mov    %rax,%rcx
// ASM:     1a7c:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1a80:	48 89 da             	mov    %rbx,%rdx
// ASM:     1a83:	48 89 ce             	mov    %rcx,%rsi
// ASM:     1a86:	48 89 c7             	mov    %rax,%rdi
// ASM:     1a89:	e8 e2 00 00 00       	call   1b70 <_ZNSt6vectorI5PointSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_>
// ASM:     1a8e:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1a92:	48 89 c7             	mov    %rax,%rdi
// ASM:     1a95:	e8 68 02 00 00       	call   1d02 <_ZNSt6vectorI5PointSaIS0_EE4backEv>
// ASM:     1a9a:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
// ASM:     1a9e:	c9                   	leave
// ASM:     1a9f:	c3                   	ret
// ASM: 
// ASM: 0000000000001aa0 <_ZNSt15__new_allocatorI5PointEC1Ev>:
// ASM:     1aa0:	55                   	push   %rbp
// ASM:     1aa1:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1aa4:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1aa8:	90                   	nop
// ASM:     1aa9:	5d                   	pop    %rbp
// ASM:     1aaa:	c3                   	ret
// ASM: 
// ASM: 0000000000001aab <_ZNSt16allocator_traitsISaI5PointEE10deallocateERS1_PS0_m>:
// ASM:     1aab:	55                   	push   %rbp
// ASM:     1aac:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1aaf:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     1ab3:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1ab7:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     1abb:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
// ASM:     1abf:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
// ASM:     1ac3:	48 8b 4d f0          	mov    -0x10(%rbp),%rcx
// ASM:     1ac7:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1acb:	48 89 ce             	mov    %rcx,%rsi
// ASM:     1ace:	48 89 c7             	mov    %rax,%rdi
// ASM:     1ad1:	e8 6c 02 00 00       	call   1d42 <_ZNSt15__new_allocatorI5PointE10deallocateEPS0_m>
// ASM:     1ad6:	90                   	nop
// ASM:     1ad7:	c9                   	leave
// ASM:     1ad8:	c3                   	ret
// ASM: 
// ASM: 0000000000001ad9 <_ZSt8_DestroyIP5PointEvT_S2_>:
// ASM:     1ad9:	55                   	push   %rbp
// ASM:     1ada:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1add:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     1ae1:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1ae5:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     1ae9:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
// ASM:     1aed:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1af1:	48 89 d6             	mov    %rdx,%rsi
// ASM:     1af4:	48 89 c7             	mov    %rax,%rdi
// ASM:     1af7:	e8 77 02 00 00       	call   1d73 <_ZNSt12_Destroy_auxILb1EE9__destroyIP5PointEEvT_S4_>
// ASM:     1afc:	90                   	nop
// ASM:     1afd:	c9                   	leave
// ASM:     1afe:	c3                   	ret
// ASM: 
// ASM: 0000000000001aff <_ZSt7forwardI5PointEOT_RNSt16remove_referenceIS1_E4typeE>:
// ASM:     1aff:	55                   	push   %rbp
// ASM:     1b00:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1b03:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1b07:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1b0b:	5d                   	pop    %rbp
// ASM:     1b0c:	c3                   	ret
// ASM: 
// ASM: 0000000000001b0d <_ZNSt16allocator_traitsISaI5PointEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_>:
// ASM:     1b0d:	55                   	push   %rbp
// ASM:     1b0e:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1b11:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     1b15:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1b19:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     1b1d:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
// ASM:     1b21:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1b25:	48 89 c7             	mov    %rax,%rdi
// ASM:     1b28:	e8 d2 ff ff ff       	call   1aff <_ZSt7forwardI5PointEOT_RNSt16remove_referenceIS1_E4typeE>
// ASM:     1b2d:	48 89 c2             	mov    %rax,%rdx
// ASM:     1b30:	48 8b 4d f0          	mov    -0x10(%rbp),%rcx
// ASM:     1b34:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1b38:	48 89 ce             	mov    %rcx,%rsi
// ASM:     1b3b:	48 89 c7             	mov    %rax,%rdi
// ASM:     1b3e:	e8 3f 02 00 00       	call   1d82 <_ZNSt15__new_allocatorI5PointE9constructIS0_JS0_EEEvPT_DpOT0_>
// ASM:     1b43:	90                   	nop
// ASM:     1b44:	c9                   	leave
// ASM:     1b45:	c3                   	ret
// ASM: 
// ASM: 0000000000001b46 <_ZNSt6vectorI5PointSaIS0_EE3endEv>:
// ASM:     1b46:	55                   	push   %rbp
// ASM:     1b47:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1b4a:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     1b4e:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
// ASM:     1b52:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1b56:	48 8d 50 08          	lea    0x8(%rax),%rdx
// ASM:     1b5a:	48 8d 45 f8          	lea    -0x8(%rbp),%rax
// ASM:     1b5e:	48 89 d6             	mov    %rdx,%rsi
// ASM:     1b61:	48 89 c7             	mov    %rax,%rdi
// ASM:     1b64:	e8 5b 02 00 00       	call   1dc4 <_ZN9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEEC1ERKS2_>
// ASM:     1b69:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1b6d:	c9                   	leave
// ASM:     1b6e:	c3                   	ret
// ASM:     1b6f:	90                   	nop
// ASM: 
// ASM: 0000000000001b70 <_ZNSt6vectorI5PointSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_>:
// ASM:     1b70:	55                   	push   %rbp
// ASM:     1b71:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1b74:	53                   	push   %rbx
// ASM:     1b75:	48 83 ec 68          	sub    $0x68,%rsp
// ASM:     1b79:	48 89 7d a8          	mov    %rdi,-0x58(%rbp)
// ASM:     1b7d:	48 89 75 a0          	mov    %rsi,-0x60(%rbp)
// ASM:     1b81:	48 89 55 98          	mov    %rdx,-0x68(%rbp)
// ASM:     1b85:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
// ASM:     1b89:	48 8d 15 64 1f 00 00 	lea    0x1f64(%rip),%rdx        # 3af4 <_ZL6HEIGHT+0x188>
// ASM:     1b90:	be 01 00 00 00       	mov    $0x1,%esi
// ASM:     1b95:	48 89 c7             	mov    %rax,%rdi
// ASM:     1b98:	e8 45 02 00 00       	call   1de2 <_ZNKSt6vectorI5PointSaIS0_EE12_M_check_lenEmPKc>
// ASM:     1b9d:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
// ASM:     1ba1:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
// ASM:     1ba5:	48 8b 00             	mov    (%rax),%rax
// ASM:     1ba8:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
// ASM:     1bac:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
// ASM:     1bb0:	48 8b 40 08          	mov    0x8(%rax),%rax
// ASM:     1bb4:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
// ASM:     1bb8:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
// ASM:     1bbc:	48 89 c7             	mov    %rax,%rdi
// ASM:     1bbf:	e8 e6 02 00 00       	call   1eaa <_ZNSt6vectorI5PointSaIS0_EE5beginEv>
// ASM:     1bc4:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
// ASM:     1bc8:	48 8d 55 b8          	lea    -0x48(%rbp),%rdx
// ASM:     1bcc:	48 8d 45 a0          	lea    -0x60(%rbp),%rax
// ASM:     1bd0:	48 89 d6             	mov    %rdx,%rsi
// ASM:     1bd3:	48 89 c7             	mov    %rax,%rdi
// ASM:     1bd6:	e8 f4 02 00 00       	call   1ecf <_ZN9__gnu_cxxmiIP5PointSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_>
// ASM:     1bdb:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
// ASM:     1bdf:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
// ASM:     1be3:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
// ASM:     1be7:	48 89 d6             	mov    %rdx,%rsi
// ASM:     1bea:	48 89 c7             	mov    %rax,%rdi
// ASM:     1bed:	e8 20 03 00 00       	call   1f12 <_ZNSt12_Vector_baseI5PointSaIS0_EE11_M_allocateEm>
// ASM:     1bf2:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
// ASM:     1bf6:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
// ASM:     1bfa:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
// ASM:     1bfe:	48 8b 45 98          	mov    -0x68(%rbp),%rax
// ASM:     1c02:	48 89 c7             	mov    %rax,%rdi
// ASM:     1c05:	e8 f5 fe ff ff       	call   1aff <_ZSt7forwardI5PointEOT_RNSt16remove_referenceIS1_E4typeE>
// ASM:     1c0a:	48 89 c2             	mov    %rax,%rdx
// ASM:     1c0d:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
// ASM:     1c11:	48 8d 0c c5 00 00 00 	lea    0x0(,%rax,8),%rcx
// ASM:     1c18:	00 
// ASM:     1c19:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
// ASM:     1c1d:	48 01 c1             	add    %rax,%rcx
// ASM:     1c20:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
// ASM:     1c24:	48 89 ce             	mov    %rcx,%rsi
// ASM:     1c27:	48 89 c7             	mov    %rax,%rdi
// ASM:     1c2a:	e8 de fe ff ff       	call   1b0d <_ZNSt16allocator_traitsISaI5PointEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_>
// ASM:     1c2f:	48 c7 45 c0 00 00 00 	movq   $0x0,-0x40(%rbp)
// ASM:     1c36:	00 
// ASM:     1c37:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
// ASM:     1c3b:	48 89 c7             	mov    %rax,%rdi
// ASM:     1c3e:	e8 73 fd ff ff       	call   19b6 <_ZNSt12_Vector_baseI5PointSaIS0_EE19_M_get_Tp_allocatorEv>
// ASM:     1c43:	48 89 c3             	mov    %rax,%rbx
// ASM:     1c46:	48 8d 45 a0          	lea    -0x60(%rbp),%rax
// ASM:     1c4a:	48 89 c7             	mov    %rax,%rdi
// ASM:     1c4d:	e8 26 03 00 00       	call   1f78 <_ZNK9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEE4baseEv>
// ASM:     1c52:	48 8b 30             	mov    (%rax),%rsi
// ASM:     1c55:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
// ASM:     1c59:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     1c5d:	48 89 d9             	mov    %rbx,%rcx
// ASM:     1c60:	48 89 c7             	mov    %rax,%rdi
// ASM:     1c63:	e8 dd 02 00 00       	call   1f45 <_ZNSt6vectorI5PointSaIS0_EE11_S_relocateEPS0_S3_S3_RS1_>
// ASM:     1c68:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
// ASM:     1c6c:	48 83 45 c0 08       	addq   $0x8,-0x40(%rbp)
// ASM:     1c71:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
// ASM:     1c75:	48 89 c7             	mov    %rax,%rdi
// ASM:     1c78:	e8 39 fd ff ff       	call   19b6 <_ZNSt12_Vector_baseI5PointSaIS0_EE19_M_get_Tp_allocatorEv>
// ASM:     1c7d:	48 89 c3             	mov    %rax,%rbx
// ASM:     1c80:	48 8d 45 a0          	lea    -0x60(%rbp),%rax
// ASM:     1c84:	48 89 c7             	mov    %rax,%rdi
// ASM:     1c87:	e8 ec 02 00 00       	call   1f78 <_ZNK9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEE4baseEv>
// ASM:     1c8c:	48 8b 00             	mov    (%rax),%rax
// ASM:     1c8f:	48 8b 55 c0          	mov    -0x40(%rbp),%rdx
// ASM:     1c93:	48 8b 75 d8          	mov    -0x28(%rbp),%rsi
// ASM:     1c97:	48 89 d9             	mov    %rbx,%rcx
// ASM:     1c9a:	48 89 c7             	mov    %rax,%rdi
// ASM:     1c9d:	e8 a3 02 00 00       	call   1f45 <_ZNSt6vectorI5PointSaIS0_EE11_S_relocateEPS0_S3_S3_RS1_>
// ASM:     1ca2:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
// ASM:     1ca6:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
// ASM:     1caa:	48 8b 55 a8          	mov    -0x58(%rbp),%rdx
// ASM:     1cae:	48 8b 52 10          	mov    0x10(%rdx),%rdx
// ASM:     1cb2:	48 2b 55 e0          	sub    -0x20(%rbp),%rdx
// ASM:     1cb6:	48 c1 fa 03          	sar    $0x3,%rdx
// ASM:     1cba:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
// ASM:     1cbe:	48 89 ce             	mov    %rcx,%rsi
// ASM:     1cc1:	48 89 c7             	mov    %rax,%rdi
// ASM:     1cc4:	e8 b7 fc ff ff       	call   1980 <_ZNSt12_Vector_baseI5PointSaIS0_EE13_M_deallocateEPS0_m>
// ASM:     1cc9:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
// ASM:     1ccd:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
// ASM:     1cd1:	48 89 10             	mov    %rdx,(%rax)
// ASM:     1cd4:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
// ASM:     1cd8:	48 8b 55 c0          	mov    -0x40(%rbp),%rdx
// ASM:     1cdc:	48 89 50 08          	mov    %rdx,0x8(%rax)
// ASM:     1ce0:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1ce4:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
// ASM:     1ceb:	00 
// ASM:     1cec:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
// ASM:     1cf0:	48 01 c2             	add    %rax,%rdx
// ASM:     1cf3:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
// ASM:     1cf7:	48 89 50 10          	mov    %rdx,0x10(%rax)
// ASM:     1cfb:	90                   	nop
// ASM:     1cfc:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
// ASM:     1d00:	c9                   	leave
// ASM:     1d01:	c3                   	ret
// ASM: 
// ASM: 0000000000001d02 <_ZNSt6vectorI5PointSaIS0_EE4backEv>:
// ASM:     1d02:	55                   	push   %rbp
// ASM:     1d03:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1d06:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     1d0a:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
// ASM:     1d0e:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1d12:	48 89 c7             	mov    %rax,%rdi
// ASM:     1d15:	e8 2c fe ff ff       	call   1b46 <_ZNSt6vectorI5PointSaIS0_EE3endEv>
// ASM:     1d1a:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
// ASM:     1d1e:	48 8d 45 f8          	lea    -0x8(%rbp),%rax
// ASM:     1d22:	be 01 00 00 00       	mov    $0x1,%esi
// ASM:     1d27:	48 89 c7             	mov    %rax,%rdi
// ASM:     1d2a:	e8 57 02 00 00       	call   1f86 <_ZNK9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEEmiEl>
// ASM:     1d2f:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
// ASM:     1d33:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
// ASM:     1d37:	48 89 c7             	mov    %rax,%rdi
// ASM:     1d3a:	e8 89 02 00 00       	call   1fc8 <_ZNK9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEEdeEv>
// ASM:     1d3f:	c9                   	leave
// ASM:     1d40:	c3                   	ret
// ASM:     1d41:	90                   	nop
// ASM: 
// ASM: 0000000000001d42 <_ZNSt15__new_allocatorI5PointE10deallocateEPS0_m>:
// ASM:     1d42:	55                   	push   %rbp
// ASM:     1d43:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1d46:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     1d4a:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1d4e:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     1d52:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
// ASM:     1d56:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1d5a:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
// ASM:     1d61:	00 
// ASM:     1d62:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
// ASM:     1d66:	48 89 d6             	mov    %rdx,%rsi
// ASM:     1d69:	48 89 c7             	mov    %rax,%rdi
// ASM:     1d6c:	e8 8f f3 ff ff       	call   1100 <_ZdlPvm@plt>
// ASM:     1d71:	c9                   	leave
// ASM:     1d72:	c3                   	ret
// ASM: 
// ASM: 0000000000001d73 <_ZNSt12_Destroy_auxILb1EE9__destroyIP5PointEEvT_S4_>:
// ASM:     1d73:	55                   	push   %rbp
// ASM:     1d74:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1d77:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1d7b:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     1d7f:	90                   	nop
// ASM:     1d80:	5d                   	pop    %rbp
// ASM:     1d81:	c3                   	ret
// ASM: 
// ASM: 0000000000001d82 <_ZNSt15__new_allocatorI5PointE9constructIS0_JS0_EEEvPT_DpOT0_>:
// ASM:     1d82:	55                   	push   %rbp
// ASM:     1d83:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1d86:	53                   	push   %rbx
// ASM:     1d87:	48 83 ec 28          	sub    $0x28,%rsp
// ASM:     1d8b:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
// ASM:     1d8f:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
// ASM:     1d93:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
// ASM:     1d97:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     1d9b:	48 89 c6             	mov    %rax,%rsi
// ASM:     1d9e:	bf 08 00 00 00       	mov    $0x8,%edi
// ASM:     1da3:	e8 14 fa ff ff       	call   17bc <_ZnwmPv>
// ASM:     1da8:	48 89 c3             	mov    %rax,%rbx
// ASM:     1dab:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     1daf:	48 89 c7             	mov    %rax,%rdi
// ASM:     1db2:	e8 48 fd ff ff       	call   1aff <_ZSt7forwardI5PointEOT_RNSt16remove_referenceIS1_E4typeE>
// ASM:     1db7:	48 8b 00             	mov    (%rax),%rax
// ASM:     1dba:	48 89 03             	mov    %rax,(%rbx)
// ASM:     1dbd:	90                   	nop
// ASM:     1dbe:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
// ASM:     1dc2:	c9                   	leave
// ASM:     1dc3:	c3                   	ret
// ASM: 
// ASM: 0000000000001dc4 <_ZN9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEEC1ERKS2_>:
// ASM:     1dc4:	55                   	push   %rbp
// ASM:     1dc5:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1dc8:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1dcc:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     1dd0:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
// ASM:     1dd4:	48 8b 10             	mov    (%rax),%rdx
// ASM:     1dd7:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1ddb:	48 89 10             	mov    %rdx,(%rax)
// ASM:     1dde:	90                   	nop
// ASM:     1ddf:	5d                   	pop    %rbp
// ASM:     1de0:	c3                   	ret
// ASM:     1de1:	90                   	nop
// ASM: 
// ASM: 0000000000001de2 <_ZNKSt6vectorI5PointSaIS0_EE12_M_check_lenEmPKc>:
// ASM:     1de2:	55                   	push   %rbp
// ASM:     1de3:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1de6:	53                   	push   %rbx
// ASM:     1de7:	48 83 ec 38          	sub    $0x38,%rsp
// ASM:     1deb:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
// ASM:     1def:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
// ASM:     1df3:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
// ASM:     1df7:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     1dfb:	48 89 c7             	mov    %rax,%rdi
// ASM:     1dfe:	e8 d7 01 00 00       	call   1fda <_ZNKSt6vectorI5PointSaIS0_EE8max_sizeEv>
// ASM:     1e03:	48 89 c3             	mov    %rax,%rbx
// ASM:     1e06:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     1e0a:	48 89 c7             	mov    %rax,%rdi
// ASM:     1e0d:	e8 ea 01 00 00       	call   1ffc <_ZNKSt6vectorI5PointSaIS0_EE4sizeEv>
// ASM:     1e12:	48 29 c3             	sub    %rax,%rbx
// ASM:     1e15:	48 89 da             	mov    %rbx,%rdx
// ASM:     1e18:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
// ASM:     1e1c:	48 39 c2             	cmp    %rax,%rdx
// ASM:     1e1f:	0f 92 c0             	setb   %al
// ASM:     1e22:	84 c0                	test   %al,%al
// ASM:     1e24:	74 0c                	je     1e32 <_ZNKSt6vectorI5PointSaIS0_EE12_M_check_lenEmPKc+0x50>
// ASM:     1e26:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
// ASM:     1e2a:	48 89 c7             	mov    %rax,%rdi
// ASM:     1e2d:	e8 3e f2 ff ff       	call   1070 <_ZSt20__throw_length_errorPKc@plt>
// ASM:     1e32:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     1e36:	48 89 c7             	mov    %rax,%rdi
// ASM:     1e39:	e8 be 01 00 00       	call   1ffc <_ZNKSt6vectorI5PointSaIS0_EE4sizeEv>
// ASM:     1e3e:	48 89 c3             	mov    %rax,%rbx
// ASM:     1e41:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     1e45:	48 89 c7             	mov    %rax,%rdi
// ASM:     1e48:	e8 af 01 00 00       	call   1ffc <_ZNKSt6vectorI5PointSaIS0_EE4sizeEv>
// ASM:     1e4d:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
// ASM:     1e51:	48 8d 55 d0          	lea    -0x30(%rbp),%rdx
// ASM:     1e55:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
// ASM:     1e59:	48 89 d6             	mov    %rdx,%rsi
// ASM:     1e5c:	48 89 c7             	mov    %rax,%rdi
// ASM:     1e5f:	e8 bb 01 00 00       	call   201f <_ZSt3maxImERKT_S2_S2_>
// ASM:     1e64:	48 8b 00             	mov    (%rax),%rax
// ASM:     1e67:	48 01 d8             	add    %rbx,%rax
// ASM:     1e6a:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
// ASM:     1e6e:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     1e72:	48 89 c7             	mov    %rax,%rdi
// ASM:     1e75:	e8 82 01 00 00       	call   1ffc <_ZNKSt6vectorI5PointSaIS0_EE4sizeEv>
// ASM:     1e7a:	48 39 45 e8          	cmp    %rax,-0x18(%rbp)
// ASM:     1e7e:	72 12                	jb     1e92 <_ZNKSt6vectorI5PointSaIS0_EE12_M_check_lenEmPKc+0xb0>
// ASM:     1e80:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     1e84:	48 89 c7             	mov    %rax,%rdi
// ASM:     1e87:	e8 4e 01 00 00       	call   1fda <_ZNKSt6vectorI5PointSaIS0_EE8max_sizeEv>
// ASM:     1e8c:	48 3b 45 e8          	cmp    -0x18(%rbp),%rax
// ASM:     1e90:	73 0e                	jae    1ea0 <_ZNKSt6vectorI5PointSaIS0_EE12_M_check_lenEmPKc+0xbe>
// ASM:     1e92:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     1e96:	48 89 c7             	mov    %rax,%rdi
// ASM:     1e99:	e8 3c 01 00 00       	call   1fda <_ZNKSt6vectorI5PointSaIS0_EE8max_sizeEv>
// ASM:     1e9e:	eb 04                	jmp    1ea4 <_ZNKSt6vectorI5PointSaIS0_EE12_M_check_lenEmPKc+0xc2>
// ASM:     1ea0:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1ea4:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
// ASM:     1ea8:	c9                   	leave
// ASM:     1ea9:	c3                   	ret
// ASM: 
// ASM: 0000000000001eaa <_ZNSt6vectorI5PointSaIS0_EE5beginEv>:
// ASM:     1eaa:	55                   	push   %rbp
// ASM:     1eab:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1eae:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     1eb2:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
// ASM:     1eb6:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
// ASM:     1eba:	48 8d 45 f8          	lea    -0x8(%rbp),%rax
// ASM:     1ebe:	48 89 d6             	mov    %rdx,%rsi
// ASM:     1ec1:	48 89 c7             	mov    %rax,%rdi
// ASM:     1ec4:	e8 fb fe ff ff       	call   1dc4 <_ZN9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEEC1ERKS2_>
// ASM:     1ec9:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1ecd:	c9                   	leave
// ASM:     1ece:	c3                   	ret
// ASM: 
// ASM: 0000000000001ecf <_ZN9__gnu_cxxmiIP5PointSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_>:
// ASM:     1ecf:	55                   	push   %rbp
// ASM:     1ed0:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1ed3:	53                   	push   %rbx
// ASM:     1ed4:	48 83 ec 18          	sub    $0x18,%rsp
// ASM:     1ed8:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
// ASM:     1edc:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
// ASM:     1ee0:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1ee4:	48 89 c7             	mov    %rax,%rdi
// ASM:     1ee7:	e8 8c 00 00 00       	call   1f78 <_ZNK9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEE4baseEv>
// ASM:     1eec:	48 8b 18             	mov    (%rax),%rbx
// ASM:     1eef:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     1ef3:	48 89 c7             	mov    %rax,%rdi
// ASM:     1ef6:	e8 7d 00 00 00       	call   1f78 <_ZNK9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEE4baseEv>
// ASM:     1efb:	48 8b 00             	mov    (%rax),%rax
// ASM:     1efe:	48 89 da             	mov    %rbx,%rdx
// ASM:     1f01:	48 29 c2             	sub    %rax,%rdx
// ASM:     1f04:	48 89 d0             	mov    %rdx,%rax
// ASM:     1f07:	48 c1 f8 03          	sar    $0x3,%rax
// ASM:     1f0b:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
// ASM:     1f0f:	c9                   	leave
// ASM:     1f10:	c3                   	ret
// ASM:     1f11:	90                   	nop
// ASM: 
// ASM: 0000000000001f12 <_ZNSt12_Vector_baseI5PointSaIS0_EE11_M_allocateEm>:
// ASM:     1f12:	55                   	push   %rbp
// ASM:     1f13:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1f16:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     1f1a:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1f1e:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     1f22:	48 83 7d f0 00       	cmpq   $0x0,-0x10(%rbp)
// ASM:     1f27:	74 15                	je     1f3e <_ZNSt12_Vector_baseI5PointSaIS0_EE11_M_allocateEm+0x2c>
// ASM:     1f29:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1f2d:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
// ASM:     1f31:	48 89 d6             	mov    %rdx,%rsi
// ASM:     1f34:	48 89 c7             	mov    %rax,%rdi
// ASM:     1f37:	e8 0e 01 00 00       	call   204a <_ZNSt16allocator_traitsISaI5PointEE8allocateERS1_m>
// ASM:     1f3c:	eb 05                	jmp    1f43 <_ZNSt12_Vector_baseI5PointSaIS0_EE11_M_allocateEm+0x31>
// ASM:     1f3e:	b8 00 00 00 00       	mov    $0x0,%eax
// ASM:     1f43:	c9                   	leave
// ASM:     1f44:	c3                   	ret
// ASM: 
// ASM: 0000000000001f45 <_ZNSt6vectorI5PointSaIS0_EE11_S_relocateEPS0_S3_S3_RS1_>:
// ASM:     1f45:	55                   	push   %rbp
// ASM:     1f46:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1f49:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     1f4d:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1f51:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     1f55:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
// ASM:     1f59:	48 89 4d e0          	mov    %rcx,-0x20(%rbp)
// ASM:     1f5d:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
// ASM:     1f61:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
// ASM:     1f65:	48 8b 75 f0          	mov    -0x10(%rbp),%rsi
// ASM:     1f69:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1f6d:	48 89 c7             	mov    %rax,%rdi
// ASM:     1f70:	e8 ff 00 00 00       	call   2074 <_ZSt12__relocate_aIP5PointS1_SaIS0_EET0_T_S4_S3_RT1_>
// ASM:     1f75:	c9                   	leave
// ASM:     1f76:	c3                   	ret
// ASM:     1f77:	90                   	nop
// ASM: 
// ASM: 0000000000001f78 <_ZNK9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEE4baseEv>:
// ASM:     1f78:	55                   	push   %rbp
// ASM:     1f79:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1f7c:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1f80:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1f84:	5d                   	pop    %rbp
// ASM:     1f85:	c3                   	ret
// ASM: 
// ASM: 0000000000001f86 <_ZNK9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEEmiEl>:
// ASM:     1f86:	55                   	push   %rbp
// ASM:     1f87:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1f8a:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     1f8e:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
// ASM:     1f92:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
// ASM:     1f96:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     1f9a:	48 8b 00             	mov    (%rax),%rax
// ASM:     1f9d:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
// ASM:     1fa1:	48 c1 e2 03          	shl    $0x3,%rdx
// ASM:     1fa5:	48 f7 da             	neg    %rdx
// ASM:     1fa8:	48 01 d0             	add    %rdx,%rax
// ASM:     1fab:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
// ASM:     1faf:	48 8d 55 f8          	lea    -0x8(%rbp),%rdx
// ASM:     1fb3:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
// ASM:     1fb7:	48 89 d6             	mov    %rdx,%rsi
// ASM:     1fba:	48 89 c7             	mov    %rax,%rdi
// ASM:     1fbd:	e8 02 fe ff ff       	call   1dc4 <_ZN9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEEC1ERKS2_>
// ASM:     1fc2:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
// ASM:     1fc6:	c9                   	leave
// ASM:     1fc7:	c3                   	ret
// ASM: 
// ASM: 0000000000001fc8 <_ZNK9__gnu_cxx17__normal_iteratorIP5PointSt6vectorIS1_SaIS1_EEEdeEv>:
// ASM:     1fc8:	55                   	push   %rbp
// ASM:     1fc9:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1fcc:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1fd0:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1fd4:	48 8b 00             	mov    (%rax),%rax
// ASM:     1fd7:	5d                   	pop    %rbp
// ASM:     1fd8:	c3                   	ret
// ASM:     1fd9:	90                   	nop
// ASM: 
// ASM: 0000000000001fda <_ZNKSt6vectorI5PointSaIS0_EE8max_sizeEv>:
// ASM:     1fda:	55                   	push   %rbp
// ASM:     1fdb:	48 89 e5             	mov    %rsp,%rbp
// ASM:     1fde:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     1fe2:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     1fe6:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     1fea:	48 89 c7             	mov    %rax,%rdi
// ASM:     1fed:	e8 28 01 00 00       	call   211a <_ZNKSt12_Vector_baseI5PointSaIS0_EE19_M_get_Tp_allocatorEv>
// ASM:     1ff2:	48 89 c7             	mov    %rax,%rdi
// ASM:     1ff5:	e8 dd 00 00 00       	call   20d7 <_ZNSt6vectorI5PointSaIS0_EE11_S_max_sizeERKS1_>
// ASM:     1ffa:	c9                   	leave
// ASM:     1ffb:	c3                   	ret
// ASM: 
// ASM: 0000000000001ffc <_ZNKSt6vectorI5PointSaIS0_EE4sizeEv>:
// ASM:     1ffc:	55                   	push   %rbp
// ASM:     1ffd:	48 89 e5             	mov    %rsp,%rbp
// ASM:     2000:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     2004:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     2008:	48 8b 50 08          	mov    0x8(%rax),%rdx
// ASM:     200c:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     2010:	48 8b 00             	mov    (%rax),%rax
// ASM:     2013:	48 29 c2             	sub    %rax,%rdx
// ASM:     2016:	48 89 d0             	mov    %rdx,%rax
// ASM:     2019:	48 c1 f8 03          	sar    $0x3,%rax
// ASM:     201d:	5d                   	pop    %rbp
// ASM:     201e:	c3                   	ret
// ASM: 
// ASM: 000000000000201f <_ZSt3maxImERKT_S2_S2_>:
// ASM:     201f:	55                   	push   %rbp
// ASM:     2020:	48 89 e5             	mov    %rsp,%rbp
// ASM:     2023:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     2027:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     202b:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     202f:	48 8b 10             	mov    (%rax),%rdx
// ASM:     2032:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
// ASM:     2036:	48 8b 00             	mov    (%rax),%rax
// ASM:     2039:	48 39 c2             	cmp    %rax,%rdx
// ASM:     203c:	73 06                	jae    2044 <_ZSt3maxImERKT_S2_S2_+0x25>
// ASM:     203e:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
// ASM:     2042:	eb 04                	jmp    2048 <_ZSt3maxImERKT_S2_S2_+0x29>
// ASM:     2044:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     2048:	5d                   	pop    %rbp
// ASM:     2049:	c3                   	ret
// ASM: 
// ASM: 000000000000204a <_ZNSt16allocator_traitsISaI5PointEE8allocateERS1_m>:
// ASM:     204a:	55                   	push   %rbp
// ASM:     204b:	48 89 e5             	mov    %rsp,%rbp
// ASM:     204e:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     2052:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     2056:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     205a:	48 8b 4d f0          	mov    -0x10(%rbp),%rcx
// ASM:     205e:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     2062:	ba 00 00 00 00       	mov    $0x0,%edx
// ASM:     2067:	48 89 ce             	mov    %rcx,%rsi
// ASM:     206a:	48 89 c7             	mov    %rax,%rdi
// ASM:     206d:	e8 b6 00 00 00       	call   2128 <_ZNSt15__new_allocatorI5PointE8allocateEmPKv>
// ASM:     2072:	c9                   	leave
// ASM:     2073:	c3                   	ret
// ASM: 
// ASM: 0000000000002074 <_ZSt12__relocate_aIP5PointS1_SaIS0_EET0_T_S4_S3_RT1_>:
// ASM:     2074:	55                   	push   %rbp
// ASM:     2075:	48 89 e5             	mov    %rsp,%rbp
// ASM:     2078:	41 54                	push   %r12
// ASM:     207a:	53                   	push   %rbx
// ASM:     207b:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     207f:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
// ASM:     2083:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
// ASM:     2087:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
// ASM:     208b:	48 89 4d d0          	mov    %rcx,-0x30(%rbp)
// ASM:     208f:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     2093:	48 89 c7             	mov    %rax,%rdi
// ASM:     2096:	e8 ee 00 00 00       	call   2189 <_ZSt12__niter_baseIP5PointET_S2_>
// ASM:     209b:	49 89 c4             	mov    %rax,%r12
// ASM:     209e:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     20a2:	48 89 c7             	mov    %rax,%rdi
// ASM:     20a5:	e8 df 00 00 00       	call   2189 <_ZSt12__niter_baseIP5PointET_S2_>
// ASM:     20aa:	48 89 c3             	mov    %rax,%rbx
// ASM:     20ad:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     20b1:	48 89 c7             	mov    %rax,%rdi
// ASM:     20b4:	e8 d0 00 00 00       	call   2189 <_ZSt12__niter_baseIP5PointET_S2_>
// ASM:     20b9:	48 89 c7             	mov    %rax,%rdi
// ASM:     20bc:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
// ASM:     20c0:	48 89 c1             	mov    %rax,%rcx
// ASM:     20c3:	4c 89 e2             	mov    %r12,%rdx
// ASM:     20c6:	48 89 de             	mov    %rbx,%rsi
// ASM:     20c9:	e8 c9 00 00 00       	call   2197 <_ZSt14__relocate_a_1I5PointS0_ENSt9enable_ifIXsrSt24__is_bitwise_relocatableIT_vE5valueEPS3_E4typeES5_S5_S5_RSaIT0_E>
// ASM:     20ce:	48 83 c4 20          	add    $0x20,%rsp
// ASM:     20d2:	5b                   	pop    %rbx
// ASM:     20d3:	41 5c                	pop    %r12
// ASM:     20d5:	5d                   	pop    %rbp
// ASM:     20d6:	c3                   	ret
// ASM: 
// ASM: 00000000000020d7 <_ZNSt6vectorI5PointSaIS0_EE11_S_max_sizeERKS1_>:
// ASM:     20d7:	55                   	push   %rbp
// ASM:     20d8:	48 89 e5             	mov    %rsp,%rbp
// ASM:     20db:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     20df:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
// ASM:     20e3:	48 b8 ff ff ff ff ff 	movabs $0xfffffffffffffff,%rax
// ASM:     20ea:	ff ff 0f 
// ASM:     20ed:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
// ASM:     20f1:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
// ASM:     20f5:	48 89 c7             	mov    %rax,%rdi
// ASM:     20f8:	e8 fd 00 00 00       	call   21fa <_ZNSt16allocator_traitsISaI5PointEE8max_sizeERKS1_>
// ASM:     20fd:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
// ASM:     2101:	48 8d 55 f0          	lea    -0x10(%rbp),%rdx
// ASM:     2105:	48 8d 45 f8          	lea    -0x8(%rbp),%rax
// ASM:     2109:	48 89 d6             	mov    %rdx,%rsi
// ASM:     210c:	48 89 c7             	mov    %rax,%rdi
// ASM:     210f:	e8 00 01 00 00       	call   2214 <_ZSt3minImERKT_S2_S2_>
// ASM:     2114:	48 8b 00             	mov    (%rax),%rax
// ASM:     2117:	c9                   	leave
// ASM:     2118:	c3                   	ret
// ASM:     2119:	90                   	nop
// ASM: 
// ASM: 000000000000211a <_ZNKSt12_Vector_baseI5PointSaIS0_EE19_M_get_Tp_allocatorEv>:
// ASM:     211a:	55                   	push   %rbp
// ASM:     211b:	48 89 e5             	mov    %rsp,%rbp
// ASM:     211e:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     2122:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     2126:	5d                   	pop    %rbp
// ASM:     2127:	c3                   	ret
// ASM: 
// ASM: 0000000000002128 <_ZNSt15__new_allocatorI5PointE8allocateEmPKv>:
// ASM:     2128:	55                   	push   %rbp
// ASM:     2129:	48 89 e5             	mov    %rsp,%rbp
// ASM:     212c:	48 83 ec 20          	sub    $0x20,%rsp
// ASM:     2130:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     2134:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     2138:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
// ASM:     213c:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     2140:	48 89 c7             	mov    %rax,%rdi
// ASM:     2143:	e8 f8 00 00 00       	call   2240 <_ZNKSt15__new_allocatorI5PointE11_M_max_sizeEv>
// ASM:     2148:	48 3b 45 f0          	cmp    -0x10(%rbp),%rax
// ASM:     214c:	0f 92 c0             	setb   %al
// ASM:     214f:	0f b6 c0             	movzbl %al,%eax
// ASM:     2152:	48 85 c0             	test   %rax,%rax
// ASM:     2155:	0f 95 c0             	setne  %al
// ASM:     2158:	84 c0                	test   %al,%al
// ASM:     215a:	74 1a                	je     2176 <_ZNSt15__new_allocatorI5PointE8allocateEmPKv+0x4e>
// ASM:     215c:	48 b8 ff ff ff ff ff 	movabs $0x1fffffffffffffff,%rax
// ASM:     2163:	ff ff 1f 
// ASM:     2166:	48 3b 45 f0          	cmp    -0x10(%rbp),%rax
// ASM:     216a:	73 05                	jae    2171 <_ZNSt15__new_allocatorI5PointE8allocateEmPKv+0x49>
// ASM:     216c:	e8 1f ef ff ff       	call   1090 <_ZSt28__throw_bad_array_new_lengthv@plt>
// ASM:     2171:	e8 ba ee ff ff       	call   1030 <_ZSt17__throw_bad_allocv@plt>
// ASM:     2176:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
// ASM:     217a:	48 c1 e0 03          	shl    $0x3,%rax
// ASM:     217e:	48 89 c7             	mov    %rax,%rdi
// ASM:     2181:	e8 6a ef ff ff       	call   10f0 <_Znwm@plt>
// ASM:     2186:	90                   	nop
// ASM:     2187:	c9                   	leave
// ASM:     2188:	c3                   	ret
// ASM: 
// ASM: 0000000000002189 <_ZSt12__niter_baseIP5PointET_S2_>:
// ASM:     2189:	55                   	push   %rbp
// ASM:     218a:	48 89 e5             	mov    %rsp,%rbp
// ASM:     218d:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     2191:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     2195:	5d                   	pop    %rbp
// ASM:     2196:	c3                   	ret
// ASM: 
// ASM: 0000000000002197 <_ZSt14__relocate_a_1I5PointS0_ENSt9enable_ifIXsrSt24__is_bitwise_relocatableIT_vE5valueEPS3_E4typeES5_S5_S5_RSaIT0_E>:
// ASM:     2197:	55                   	push   %rbp
// ASM:     2198:	48 89 e5             	mov    %rsp,%rbp
// ASM:     219b:	48 83 ec 30          	sub    $0x30,%rsp
// ASM:     219f:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
// ASM:     21a3:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
// ASM:     21a7:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
// ASM:     21ab:	48 89 4d d0          	mov    %rcx,-0x30(%rbp)
// ASM:     21af:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
// ASM:     21b3:	48 2b 45 e8          	sub    -0x18(%rbp),%rax
// ASM:     21b7:	48 c1 f8 03          	sar    $0x3,%rax
// ASM:     21bb:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
// ASM:     21bf:	48 83 7d f8 00       	cmpq   $0x0,-0x8(%rbp)
// ASM:     21c4:	7e 1f                	jle    21e5 <_ZSt14__relocate_a_1I5PointS0_ENSt9enable_ifIXsrSt24__is_bitwise_relocatableIT_vE5valueEPS3_E4typeES5_S5_S5_RSaIT0_E+0x4e>
// ASM:     21c6:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     21ca:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
// ASM:     21d1:	00 
// ASM:     21d2:	48 8b 4d e8          	mov    -0x18(%rbp),%rcx
// ASM:     21d6:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     21da:	48 89 ce             	mov    %rcx,%rsi
// ASM:     21dd:	48 89 c7             	mov    %rax,%rdi
// ASM:     21e0:	e8 ab ef ff ff       	call   1190 <memmove@plt>
// ASM:     21e5:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     21e9:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
// ASM:     21f0:	00 
// ASM:     21f1:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
// ASM:     21f5:	48 01 d0             	add    %rdx,%rax
// ASM:     21f8:	c9                   	leave
// ASM:     21f9:	c3                   	ret
// ASM: 
// ASM: 00000000000021fa <_ZNSt16allocator_traitsISaI5PointEE8max_sizeERKS1_>:
// ASM:     21fa:	55                   	push   %rbp
// ASM:     21fb:	48 89 e5             	mov    %rsp,%rbp
// ASM:     21fe:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     2202:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     2206:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     220a:	48 89 c7             	mov    %rax,%rdi
// ASM:     220d:	e8 42 00 00 00       	call   2254 <_ZNKSt15__new_allocatorI5PointE8max_sizeEv>
// ASM:     2212:	c9                   	leave
// ASM:     2213:	c3                   	ret
// ASM: 
// ASM: 0000000000002214 <_ZSt3minImERKT_S2_S2_>:
// ASM:     2214:	55                   	push   %rbp
// ASM:     2215:	48 89 e5             	mov    %rsp,%rbp
// ASM:     2218:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     221c:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
// ASM:     2220:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
// ASM:     2224:	48 8b 10             	mov    (%rax),%rdx
// ASM:     2227:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     222b:	48 8b 00             	mov    (%rax),%rax
// ASM:     222e:	48 39 c2             	cmp    %rax,%rdx
// ASM:     2231:	73 06                	jae    2239 <_ZSt3minImERKT_S2_S2_+0x25>
// ASM:     2233:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
// ASM:     2237:	eb 04                	jmp    223d <_ZSt3minImERKT_S2_S2_+0x29>
// ASM:     2239:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     223d:	5d                   	pop    %rbp
// ASM:     223e:	c3                   	ret
// ASM:     223f:	90                   	nop
// ASM: 
// ASM: 0000000000002240 <_ZNKSt15__new_allocatorI5PointE11_M_max_sizeEv>:
// ASM:     2240:	55                   	push   %rbp
// ASM:     2241:	48 89 e5             	mov    %rsp,%rbp
// ASM:     2244:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     2248:	48 b8 ff ff ff ff ff 	movabs $0xfffffffffffffff,%rax
// ASM:     224f:	ff ff 0f 
// ASM:     2252:	5d                   	pop    %rbp
// ASM:     2253:	c3                   	ret
// ASM: 
// ASM: 0000000000002254 <_ZNKSt15__new_allocatorI5PointE8max_sizeEv>:
// ASM:     2254:	55                   	push   %rbp
// ASM:     2255:	48 89 e5             	mov    %rsp,%rbp
// ASM:     2258:	48 83 ec 10          	sub    $0x10,%rsp
// ASM:     225c:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
// ASM:     2260:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
// ASM:     2264:	48 89 c7             	mov    %rax,%rdi
// ASM:     2267:	e8 d4 ff ff ff       	call   2240 <_ZNKSt15__new_allocatorI5PointE11_M_max_sizeEv>
// ASM:     226c:	c9                   	leave
// ASM:     226d:	c3                   	ret
// ASM: 
// ASM: Disassembly of section .fini:
// ASM: 
// ASM: 0000000000002270 <_fini>:
// ASM:     2270:	48 83 ec 08          	sub    $0x8,%rsp
// ASM:     2274:	48 83 c4 08          	add    $0x8,%rsp
// ASM:     2278:	c3                   	ret
