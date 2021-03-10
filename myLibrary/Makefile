# build main.c
CC=gcc
CFILE=main.c

all: $(TARGET).exe $(TARGET)

main: main.
	$(CC) -g -o $(TARGET) $(CFILE)

main.exe: main.o
	$(CC) -o $(TARGET).exe $(TARGET).o

clean:
	rm main $(TARGET).o $(TARGET).exe
	del main $(TARGET).p $(TARGET).exe