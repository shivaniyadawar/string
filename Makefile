all:calc.c testcalc.c unity.c
	gcc $^ -o all.exe -lm
clean:	
	rm -rf *.o *.exe
	
run:all
	./all.exe