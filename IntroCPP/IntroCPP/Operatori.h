#pragma once

#include <iostream>


enum GiorniSettimana
{
	Lunedì, // Valore 0
	Martedì, // Valore 1
	Mercoledì = 5,
	Giovedì,
	Venerdì,
	Sabato,
	Domenica
};

class Mese
{
public: 

	Mese();

	GiorniSettimana giornoAttuale = Lunedì;

	int a;
	int b;


	// Operatori Aritmetici

	int Somma(int a, int b) {
		return a + b;
	}

	int Sottrazione(int a, int b) {
		return a - b;
	}

	int Moltiplicazione(int a, int b) {
		return a * b;
	}

	int Divisione(int a, int b) {
		return a / b;
	}

	int Modulo(int a, int b) {
		return a % b;
	}

	// Operatori di assegnazione

	void AssegnaValore(int valore) {
		a = valore; // Operatore di assegnazione =
	}

	void AggiungiEAssegna(int valore) {
		a += valore; // Operatore di assegnazione +=
		// a = a + valore;
	}

	void SottraiEAssegna(int valore) {
		a -= valore; // Operatore di assegnazione -=
		// a = a - valore;
	}

	void MoltiplicaEAssegna(int valore) {
		a *= valore; // Operatore di assegnazione *=
		// a = a * valore;
	}

	// Operatori Relazionali

	bool SonoUguali(int valore) {
		return a == valore; // Operatore di uguaglianza ==
	}

	inline bool SonoDiversi(int valore) {
		return a != valore; // Operatore di diversità !=
	}

	bool MaggioreDi(int valore) {
		return a > valore; // Operatore maggiore di >
	}

	bool MinoreDi(int valore) {
		return a < valore; // Operatore minore di <
	}

	bool MaggioreUgualeDi(int valore) {
		return a >= valore; // Operatore maggiore o uguale di >=
	}

	bool MinoreUgualeDi(int valore) {
		return a <= valore; // Operatore minore o uguale di <=
	}

	// Operatori Logici

	bool ELogico(bool condizione1, bool condizione2) {
		return condizione1 && condizione2; // Operatore AND logico &&
	}

	bool OLogico(bool condizione1, bool condizione2) {
		return condizione1 || condizione2; // Operatore OR logico ||
	}

	bool NegazioneLogica(bool condizione) {
		return !condizione; // Operatore NOT logico !
	}

	// Operatori di Incremento e Decremento

	int Incrementa() {
		a++; // Operatore di incremento ++
		++a; // Equivalente a a = a + 1;

		a = 2;
		return ++a + 2;
	}

	void Decrementa() {
		a--; // Operatore di decremento --
		--a; // Equivalente a a = a - 1;
	}

	// Operatore Ternario

	int ValoreAssoluto(int valore) {
		return (valore < 0) ? -valore : valore; // Operatore ternario ? :
	}

	// Operatore di inserimento e estrazione (stream)

	void StampaA() {
		std::cout << "Valore di a: " << a << std::endl; // Operatore di inserimento <<
	}

	void LeggiA() {
		std::cout << "Inserisci un valore per a: ";
		std::cin >> a; // Operatore di estrazione >>
	}

	// Operatori Bitwise

	int EBitwise(int valore) {

		unsigned char flags = 0b11011010; // Esempio di valore
		unsigned char maschera = 0b11111110; // Maschera per azzerare il bit 0

		flags = flags & maschera;
		// Risultato: 11011010 & 11111110 = 11011010 (il bit 0 è spento se era acceso, se era spento rimane spento)
		std::cout << "Nuovi flag (azzerato bit 0): " << (int)flags << std::endl;
		return a & valore; // Operatore AND bitwise &
	}

	int OBitwise(int valore) {
		return a | valore; // Operatore OR bitwise |
	}

	int XORBitwise(int valore) {
		return a ^ valore; // Operatore XOR bitwise ^
	}

	int NOTBitwise() {
		return ~a; // Operatore NOT bitwise ~
	}

	int ShiftSinistra(int posizioni) {
		return a << posizioni; // Operatore di shift a sinistra <<
	}

	int ShiftDestra(int posizioni) {
		return a >> posizioni; // Operatore di shift a destra >>
	}

	void EsempioIncremento() {
		// esempio operatore incremento
		Mese* meseCorrente = new Mese();
		int giorno = 0;

		giorno = meseCorrente->Incrementa();

		std::cout << "Valore giorno: " << giorno << std::endl;
	}

};