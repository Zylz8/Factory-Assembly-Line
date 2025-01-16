/*

Name: Jackey Zhou
Student ID: 164431223
Email: jzhou200@myseneca.ca
Section: NCC

Declaration:
I have done all the coding by myself and only copied the code
that my professor provided to complete my workshops and assignments.

*/


#ifndef SENECA_LINEMANAGER_H
#define SENECA_LINEMANAGER_H
#include <vector>
#include <string>
#include "Workstation.h"



namespace seneca
{
	class LineManager
	{
		std::vector<Workstation*> m_activeLine;
		size_t m_cntCustomerOrder;
		Workstation* m_firstStation;

	public:
		LineManager(const std::string& file, const std::vector<Workstation*>& stations);

		void reorderStations();
		bool run(std::ostream& os);
		void display(std::ostream& os) const;
	};


}

#endif


