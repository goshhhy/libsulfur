CFLAGS ?= -Wall -g
# xcb headers
CFLAGS != pkgconf --cflags xcb
OUT := libsulfur

OBJS := obj/conn.o
OBJS += obj/draw.o
OBJS += obj/color.o

LIBS != pkgconf --libs xcb

all: $(OUT).a

obj/%.o: src/%.c
	mkdir -p obj
	echo build $@
	$(CC) -c -o $@ $(LIBS) $(CFLAGS) -I./include $<

$(OUT).a: $(OBJS)
	ar	 rcs $@ $^

clean:
	rm -r $(OUT).a obj
