# FLAGS=-Wall -Werror -Wextra -std=c11
FLAGS=-Wall -Wextra -std=c11
CC=gcc $(FLAGS)
FILE=s21_calc
FILETEST=tests/*
FILEREPORT=s21_test_report
FILETESTO=s21_test
DIRREPORT=report
LIB=$(FILE).a
COVFLAG=-fprofile-arcs -ftest-coverage

OS = $(shell uname)

ifeq ($(OS), Darwin)
	TESTFLAGS=-pthread -lm -lcheck
	OPEN_CMD=open
else
	TESTFLAGS=-pthread -lcheck_pic -lrt -lm -lsubunit
	OPEN_CMD=xdg-open
endif


# all: clean $(FILE).a gcov_report

#######################################
all: temp

temp:
	$(CC) -fsanitize=address -g *.c $(TESTFLAGS)

compile:
	$(CC) *.c $(TESTFLAGS)

val:
	valgrind --tool=memcheck --leak-check=yes --track-origins=yes -s ./a.out
#######################################

o_files:
	$(CC) -c *.c

test: 
	$(CC) $(FILETEST).c *.c -o $(FILETESTO) $(TESTFLAGS)
	./$(FILETESTO)

test_val: 
	$(CC) $(FILETEST).c *.c -o $(FILETESTO) $(TESTFLAGS)
	valgrind --tool=memcheck --log-file="valgrind_check.log" --leak-check=yes \
	--track-origins=yes -s ./$(FILETESTO)

gcov_report:
	$(CC) $(COVFLAG) $(FILETEST).c *.c -o $(FILEREPORT) $(TESTFLAGS)
	./$(FILEREPORT)
	lcov -t "$(FILE)" -o test.info -c -d .  
	genhtml -o $(DIRREPORT) test.info
	$(OPEN_CMD) $(DIRREPORT)/index.html

rep: gcov_report

clean:
	rm -rf *.o *.a *.gcno *.gcda *.info *.log $(DIRREPORT) $(FILETESTO) $(FILEREPORT)

#style
cpp:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h

clang:
	cp ../materials/linters/.clang-format .clang-format
	clang-format -n *.c *.h
	clang-format -i *.c *.h 
	rm -rf .clang-format

check: cpp clang
