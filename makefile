lab4:	p3Lab4_IngridDominguez.o Parqueo.o Carro.o
	g++ p3Lab4_IngridDominguez.o Parqueo.o Carro.o -o lab4

p3Lab4_IngridDominguez.o: p3Lab4_IngridDominguez.cpp Parqueo.h Carro.h
	g++ -c p3Lab4_IngridDominguez.cpp

Parqueo.o: Parqueo.h Parqueo.cpp Carro.h
	g++ -c Parqueo.cpp

Carro.o: Carro.h Carro.cpp
	g++ -c Carro.cpp
