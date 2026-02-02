#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "===== 1. TEST DE CONSTRUCCION Y HERENCIA =====" << std::endl;
	ScavTrap	scavvy("Scavvy");
	std::cout << "Vida inicial (debe ser 100): " << std::endl;
	scavvy.takeDamage(0); // Truco para ver si los HP son 100 indirectamente

	std::cout << "\n===== 2. TEST DE ATAQUE (SOBREESCRITO) =====" << std::endl;
	// Debe usar el mensaje de ScavTrap y quitar 20 de daño
	scavvy.attack("un barril");

	std::cout << "\n===== 3. TEST DE FORMA ORTODOXA (COPIAS) =====" << std::endl;
	ScavTrap	clon(scavvy);
	ScavTrap	otro("Temporal");
	otro = scavvy;

	std::cout << "\n===== 4. TEST DE HABILIDAD ESPECIAL =====" << std::endl;
	scavvy.guardGate();
	clon.guardGate();

	std::cout << "\n===== 5. TEST DE AGOTAMIENTO DE ENERGIA =====" << std::endl;
	std::cout << "Scavvy va a intentar atacar 51 veces..." << std::endl;
	for (int i = 0; i < 51; i++)
	{
		scavvy.attack("la pared");
	}

	std::cout << "\n===== 6. TEST DE MUERTE =====" << std::endl;
	scavvy.takeDamage(150);
	scavvy.beRepaired(10); // No debería poder repararse si está muerto
	scavvy.attack("un fantasma");

	std::cout << "\n===== 7. FINALIZACION (ORDEN DE DESTRUCTORES) =====" << std::endl;
	return (0);
}