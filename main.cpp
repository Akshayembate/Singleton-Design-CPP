#include <iostream>

class Singleton
{
public:
    // public methode to acess the single instance of the class
    static Singleton& get()
    {
        static Singleton s_Instance;
        return s_Instance;
    }

    void showMessages() const
    {
        std::cout << "i'm a singleton class \n";
         
    }

    float RandomNumberGeneraor()
    {
        m_RandomNumber = static_cast<float>(rand())/static_cast<float>(RAND_MAX);
        //static_cast<float>(rand());

        return m_RandomNumber;
    }

private:
    Singleton() 
    {
        std::cout << "constructed singleton \n";
    }

    ~Singleton()
    {
        std::cout << "deleted singleton \n";
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    //static Singleton s_Instance;
    float m_RandomNumber ;
};

int main()
{
    Singleton& instance =  Singleton::get();
    instance.showMessages();

    std::cout << instance.RandomNumberGeneraor() << "\n";

    std::cin.get();
    return 0;
}