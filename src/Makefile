CC	= c++
CFLAGS	=
TARGET	= HelloWorld
SRCS	= main.cpp hello_world.cpp author.cpp
OBJS	= $(SRCS:.cpp=.o)
INCDIR	= -I../include
LIBDIR	=
LIBS	=

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBDIR) $(LIBS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

all: clean $(OBJS) $(TARGET)

clean:
	-rm -f $(OBJS) $(TARGET) *.d
