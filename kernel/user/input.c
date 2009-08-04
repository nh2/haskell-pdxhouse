/* Code for input syscalls */

int getch() {
	int ret;
	__asm__ __volatile__ ("mov $3, %%eax\n\t"
			              "int $0x80\n\t"
			              "mov %%eax, %0"
			              :"=r"(ret)
			              :
			              :"%eax");
	return ret;
}
