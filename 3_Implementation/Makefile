PROJ_NAME = CALCULATOR
TEST_PROJ_NAME = Test_$(PROJ_NAME)


SRC = src/filter.c\
src/opamp.c\
src/timer.c\
src/battery.c\
src/reac.c

TEST_SRC = test/test.c\
unity/unity.c

INC = -Iinc\
-Iunity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -lm -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,./$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $(SRC) $(TEST_SRC) $(INC) -lm -o $(TEST_PROJ_NAME).$(EXEC)
	./$(TEST_PROJ_NAME).$(EXEC)

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) $(INC) -lm -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a main.c
	$(RM) *.gcda
	$(RM) *.gcno

valgrind: all
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)

clean:
	$(RM) *.gcda
	$(RM) *.gcno
