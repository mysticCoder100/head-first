encrypt_action.o: encrypt_action.c encrypt.h
	gcc -c encrypt_action.c 

encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c

action: encrypt.o encrypt_action.o 
	gcc encrypt.o encrypt_action.o -o action