CC=gcc
OBJ= max.o min.o var.o test.o
ifeq ($(DEBUG),yes)
	CC_OPTIONS= -g -Wall
else
	CC_OPTIONS=
endif


install: my-binaire
	mv my-binaire ${HOME} 

my-binaire: test.o ${OBJ}
	${CC} ${CC_OPTIONS} $^ -o $@

ifeq    ($(DEBUG),yes)

	@echo "Debug Mode"
else

	@echo "Release Mode"

endif

max.o: max.c
	${CC} ${CC_OPTIONS} -c $< -o $@

min.o: min.c
	${CC} ${CC_OPTIONS} -c $< -o $@

var.o: var.c
	${CC} ${CC_OPTIONS} -c $< -o $@

test.o: test.c 
	${CC} ${CC_OPTIONS} -c $< -o $@

clean:
	rm *.o 


