#ifndef BRAIN_H
# define BRAIN_H

# include <string>

class Brain
{
	private:
		std::string ideas[100];
	
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& copy);

		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
};

#endif //BRAIN_H
