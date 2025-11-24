#pragma once

#include <string>

class IInterfaccia {

public:
	//Distruttore virtuale: obbligatorio
	virtual ~IInterfaccia() = default;

	// Metodi puri virtuali: obbligatorio implementarlo nella classe derivata
	virtual void interact() = 0;

	// Metodo virtual; non obbbligatorio implementarlo nella classe derivata
	virtual void displayMessage() {
		std::cout << "Implementazione: " << std::endl;
	}
};