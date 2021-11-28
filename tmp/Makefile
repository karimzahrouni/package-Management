

NOM_DE_PACKET=../Hello_1.0_all



myfact : ./utils.o ./main.o 
	gcc $? -o $@ 

main.o : ./main.c ./utils.o
	gcc $^ -c 

utils.o : ./utils.c
	gcc $^ -c 


clean :
	rm -rf *.o myfact
