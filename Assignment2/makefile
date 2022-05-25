
result: main.o find_lsb.o set_bit.o clear_bit.o toggle_bit.o
	gcc main.o find_lsb.o set_bit.o clear_bit.o toggle_bit.o -o result
main.o: main.c header.h
	gcc -c main.c 
find_lsb.o: find_lsb.c header.h 
	gcc -c find_lsb.c 
set_bit.o: set_bit.c header.h 
	gcc -c set_bit.c
clear_bit.o: clear_bit.c header.h 
	gcc -c clear_bit.c 
toggle_bit.o: toggle_bit.c header.h 
	gcc -c toggle_bit.c 
clean:
	rm *.o result


