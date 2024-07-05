CC= gcc
CFLAGS= -Wall -g
BINS = driver.c functions.c

all: LAB3

%.o: %.c
	$(CC) $(OBJS) -c -o  $@ $<
	#EXAMPLE: gcc -Wall -g -c -o driver.o driver.c

LAB3: $(BINS)
		$(CC) $(CFLAGS) -o $(TARGET) $(LFLAGS)
run: LAB3
		./$< StudentData.csv out.txt
clean:
		$(RM) $(BINS)
		$(RM) LAB3
