CC=gcc
COMPILE=$(CC) -g
CFILES=$(dir /s *.c*)
OBJECT=main.o
TARGET=task
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)