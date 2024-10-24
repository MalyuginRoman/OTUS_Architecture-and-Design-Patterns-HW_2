all:
	g++ -std=c++17 moving.cpp -o moving
	g++ -std=c++17 movingTest.cpp -lcppunit -o movingTest
test:
	chmod +x equation
	./movingTest
clean:
	$(RM) moving movingTest
