CFLAGS=

monopoly: .o
	g++ $(CFLAGS) -o monopoly .o

.o: .cpp .hpp .hpp
	g++ $(CFLAGS) -c .cpp

clean :
		rm -f *.o
		
vclean: clean
		rm -f mat
