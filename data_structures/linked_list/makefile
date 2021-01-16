app: add_node.o main.o delete_node.o link_reverse.o tags
	gcc add_node.o main.o delete_node.o link_reverse.o -ggdb -o app
add_node.o:add_node.c myheaders.h
	gcc -c add_node.c
main.o:main.c myheaders.h
	gcc -c main.c 
delete_node.o:delete_node.c myheaders.h
	gcc -c delete_node.c
link_reverse.o:link_reverse.c myheaders.h
	gcc -c link_reverse.c
		
tags:main.c add_node.c myheaders.h delete_node.c
	ctags -R
clean:
	@rm -f *.o
