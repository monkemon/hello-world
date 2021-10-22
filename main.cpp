#include <iostream>
#include <memory>

int main(int argc, char** args)
{
    std::unique_ptr< std::string > message( new std::string( "hello, github" ) );

    std::cout << "You got a new message on address " << message.get() << std::endl;
    std::cout << "The message says:" << std::endl;
    std::cout << "\t" <<  *message   << std::endl;
}
