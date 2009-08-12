static int x = 99;

int main () {
  int startTimems = timems();
  int i,j;
  x = 30;
  x = bar(x);
  printf ("answer = %d\n",x);
  for(j=0;j<3;j++) {
    for(i=0;i<30;i++) {
      x = fib(i);
      printf ("answer = %d\n",x);
    }
  }
  printf("Execution time (ms): %d\n",timems()-startTimems);
  exit (0x77);
}

int bar (int y) {
  return y * 3;
}

int fib (int n) {
  return n<2 ? 1 : fib(n-1)+fib(n-2);
}
