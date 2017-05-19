CFLAGS = -g -Wall -Wshadow
GCC = gcc $(CFLAGS)
SRCS = proj2.c tree.c
OBJS = $(SRCS:%.c=%.o)

proj2: $(OBJS)
	$(GCC) $(OBJS) -o proj2

.c.o:
	$(GCC) $(CFLAGS) -c $*.c

clean:
	rm -f *.o a.out proj2
