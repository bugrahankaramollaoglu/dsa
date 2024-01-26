/* stringler 1 byte kapladıklarından hafızada birer byte arayla tutulurlar

int main()
{
	char *str = "bugra";
	printf("%p\n", &str[0]); >>> 0x5644cade4004
	printf("%p\n", &str[1]); >>> 0x5644cade4005
	printf("%p\n", &str[2]); >>> 0x5644cade4006
	printf("%p\n", &str[3]); >>> 0x5644cade4007
	printf("%p\n", &str[4]); >>> 0x5644cade4008
	printf("%p\n", &str[5]); >>> 0x5644cade4009
} */
