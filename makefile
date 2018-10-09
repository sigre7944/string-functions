# path #

GTEST_DIR:= ${HOME}/googletest/googletest

all: executable

executable: gtest-all.o  libgtest.a
	g++ -isystem $(GTEST_DIR)/include -pthread string_test_case.c string.c string.h Gtest_main.c libgtest.a -o my_test

libgtest.a: gtest-all.o
	ar -rv libgtest.a gtest-all.o

gtest-all.o : 
	g++ -isystem $(GTEST_DIR)/include -I$(GTEST_DIR) -pthread -c $(GTEST_DIR)/src/gtest-all.cc 
	
clean: 
	-rm -f *.o *.a my_test