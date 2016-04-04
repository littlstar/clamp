
test: test.c
	$(CC) -Ideps deps/*/*.c test.c -o $@
	./$@

clean:
	rm -f test
