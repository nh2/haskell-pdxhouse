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

int timems() {
	int ret;
	__asm__ __volatile__ ("mov $5, %%eax\n\t"
			              "int $0x80\n\t"
			              "mov %%eax, %0"
			              :"=r"(ret)
			              :
			              :"%eax");
	return ret;
}

void getbuf(unsigned size, void *buf) {
  __asm__ ("mov %0,%%ebx": : "rm"(c) : "%ebx");
  __asm__ ("mov $1,%%eax": : : "%eax");
  __asm__ ("int $0x80");
}
