#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "===== 1. TEST DE CONSTRUCCION =====" << std::endl;
	FragTrap	frag("Fraggy");
	ScavTrap	scav("Scavvy");

	std::cout << "\n===== 2. TEST DE ATAQUE (FRAG USA EL DE CLAP) =====" << std::endl;
	// FragTrap no sobreescribe attack, usa el de ClapTrap (0 damage por defecto, 
	// pero en el constructor de Frag lo subimos a 30)
	frag.attack("un objetivo");
	scav.attack("un barril");

	std::cout << "\n===== 3. TEST DE HABILIDADES ESPECIALES =====" << std::endl;
	scav.guardGate();
	frag.highFivesGuys();

	std::cout << "\n===== 4. TEST DE FORMA CANONICA (COPIAS) =====" << std::endl;
	FragTrap	clon(frag);
	FragTrap	otro;
	
	otro = frag;
	clon.highFivesGuys();

	std::cout << "\n===== 5. TEST DE RESISTENCIA Y MUERTE =====" << std::endl;
	std::cout << "Fraggy recibe 100 de daño..." << std::endl;
	frag.takeDamage(100);
	frag.beRepaired(10); // No debería poder si tiene 0 HP
	frag.highFivesGuys();

	std::cout << "\n===== 6. FINALIZACION Y DESTRUCTORES =====" << std::endl;
	return (0);
}