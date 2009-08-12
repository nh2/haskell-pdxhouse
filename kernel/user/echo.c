main () {
    int startTimems = timems();
    int count = 0;
    while ('\n'!=getch()) {
	  count++;
    }
    printf("\nRead: %d characters\n", count++);
    int endTimems = timems();
    printf("Start time (ms): %d\n",startTimems);
    printf("End time(ms): %d\n",endTimems);
    printf("Execution time (ms): %d\n",endTimems-startTimems);

  exit(6*7);
}

