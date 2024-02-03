#include <iostream>
#include <map>

class Harl {
    private :
        void debug();
        void info();
        void warning();
        void error();
    public :
        void complain(std::string level);
		void (Harl::*func[4])(void);
};

