all :exercise1 exercise2 exercise3 exercise4 challange1 challange2 exercise16-pointers

exercise1 : exercise1.c
	gcc exercise1.c -o exercise1
exercise2 : exercise2.c
	gcc exercise2.c -o exercise2
exercise3 : exercise3.c
	gcc exercise3.c -o exercise3
exercise4 : exercise4.c
	gcc exercise4.c -o exercise4
challange1 : challange1.c
	gcc challange1.c -o challange1
challange2 : challange2.c
	gcc challange2.c -o challange2
exercise7 : exercise7.c
	gcc exercise7.c -o exercise7
exercise16-pointers :
	gcc exercise16-pointers.c -o exercise16-pointers

clean :
	rm -rf *o challange1 challange2 exercise1 exercise2 exercise16-pointers
