#ifndef TE_H
#define TE_H
#include <string>
using namespace std;
class TE {
	private: 
		int objetoI;
		double objetoD;
		char objetoC;
		string objetoS;
	
	public:
		TE();
		
		
		void setInt(int);
		void setDouble(double);
		void setChar(char);
		void setString(string);
		
		int getInt();
		double getDouble();
		char getChar();
		string getString();
	
};
#endif