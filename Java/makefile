CC=javac
FLAGS=

all: compile

compile: Example.java
	$(CC) $(FLAGS) Example.java
	jar cfe Example.jar Example Example.class

run: Example.jar
	java -jar Example.jar

clean:
	rm -f *.class *.jar
