//      main.cpp
//      
//      Copyright 2013 delphi <delphi@delphi-desktop>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.


#include <iostream>

class A
{
public:	
	int Say( const char* msg );
	int doSomething( const char* order );
};


int A::Say( const char* msg )
{	
	std::cout << msg << std::endl;
	return 0;
}

int A::doSomething( const char* order )
{
	return Say( order );
}


int main(int argc, char** argv)
{
	std::cout << "hello world -- main.cpp\n" ;	

	A a;
	a.doSomething("doSomething");
	return 0;
}
