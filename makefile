fruit_salad: driver.o fruit.o seed.o banana.o
	g++ -o fruit_salad driver.o fruit.o seed.o banana.o
driver.o: driver.cpp banana.h
	g++ -c driver.cpp
banana.o: banana.cpp fruit.h seed.h
	g++ -c banana.cpp
fruit.o: fruit.cpp fruit.h seed.h
	g++ -c fruit.cpp
seed.o: seed.cpp seed.h
	g++ -c seed.cpp
clean:
	rm.o* fruit_salad.o