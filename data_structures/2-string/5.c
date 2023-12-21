/* C’de bir kaynak kodu yazıp çalıştırdığında bu kodu çalıştırmak için bilgisayar 3 aşamadan geçer:

	1) preprocessing: Preprocessing is where all you #directives are processed
	and intermediate source code for compiler is created. bu işlemden sonra .i uzantılı
	dosyalar çıkar. onlar da compilation yani derleme aşamasına girerek .o dosyalarına
	dönüştürülür. .o’lar da en son linkingde .out (windows’ta .exe) olurlar.

	2) compilation: Compilation is where your code consisting of keywords
	and function calls is converted in first stage to intermediate code,
	then to assembly code, then to binary form (intermediate is not mandatory,
	but that’s how I’ve been taught about compilers). That binary form is however not yet ready to be executed.

	3) linking: Linking is where all your binary output from compilation is
	taken together and fit into certain address space, aligned, dressed with
	proper meta information, etc. In this process segments are important, as
	all data from particular segments in object files (compilation results) are grouped together.

 */

/* C’de hafıza tutma 4 kısma ayrılır:

1. data segment: where global and static variables you declare in your program are stored

2. heap segment: where dynamic allocations are made, in most operating systems this region
doesn’t exist in final binary as dynamic allocations are managed by the operating systems,
but in bare metal compilation (in embedded systems for example) this section is used to
describe memory region in SRAM or SDRAM

3. stack segment: where automatic variables (variables local to a function) are
stored and information about functions are stored. When a function is called, a
part of the stack is allocated to store information about the function (its local
variables, the return address etc.) This part is called a stack frame. Every function
has its own stack frame in the stack segment and thus a stack segment can have
multiple stack frames depending on the number of function calls in your program.

4. text segment: where all the executable code, usually read-only area are after
loaded into memory prior to execution.

*/


