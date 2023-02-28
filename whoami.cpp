// Knock, Knock, Neo.
#include <iostream>

class Me {
  public:
    Me(){};

    void sayHello() const { 
      std::cout << "Welcome to my profile!\n"; 
  }

  public:
    std::string name = "Arthur Ottoni";
    std::string age = "18";
    std::string skills = "Pentester, Bug-Hunter, CTF-Player";
    std::string tech = "Linux, Git, Docker, Python, C/C++, JavaScript, SQL, PHP";
    std::string extra = "x86_64 assembly, BrainFuck";

  private:
    std::string secret = "Nothing Here...";
};

int main() {
  Me arthur;

  arthur.sayHello();

  return EXIT_SUCCESS;
}
