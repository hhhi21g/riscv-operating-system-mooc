extern void uart_init(void);
extern void uart_puts(char *s);

void start_kernel(void)
{
	uart_init();
	uart_puts("Hello, RVOS!\n");
	uart_puts("Hello, Kernel!\n");
	uart_puts("Hello, Xu Yuetong!\n");

	while (1)
	{
	}; // stop here!
}
