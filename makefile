pa3: main.o money.o account.o
	g++ -o main.o money.o account.o 

main.o: main.cpp
	g++ -c main.cpp

money.o: Money.cpp
	g++ -c Money.cpp

account.o: Account.cpp
	g++ -c Account.cpp