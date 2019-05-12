all: empresa.o endereco.o pessoa.o vagas.o desempregado.o main.cpp
	g++ -o main main.cpp empresa.o endereco.o pessoa.o vagas.o desempregado.o

empresa.o: empresa.cpp
	g++ -o empresa.o -c empresa.cpp


endereco.o: endereco.cpp
	g++ -o endereco.o -c endereco.cpp

pessoa.o: pessoa.cpp
	g++ -o pessoa.o -c pessoa.cpp

vagas.o: vagas.cpp
	g++ -o vagas.o -c vagas.cpp

desempregado.o: desempregado.cpp
	g++ -o desempregado.o -c desempregado.cpp

clean:
	rm -f *.o

run:
	./main