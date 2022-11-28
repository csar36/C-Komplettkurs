#include <iostream>
#include <chrono>
#include <thread>


int main()
{
    std::string answer;
    bool start_game = false;
    std::cout<<"Wollen Sie das Spiel starten ?" << std::endl;
    std::cin >> answer;
    if(answer == "Yes" || answer == "yes" || answer == "Ja" || answer == "ja")
        start_game = true;
    else
        std::cout << "Schade, Spiel wird beendet.. Ja, ja, Yes oder yes eingeben um das Spiel das nächste mal zu starten :)" << std::endl;

    while(start_game)
    {
        std::cout << "Wählen Sie 'w' um nach vorne zu laufen, 'd' um nach rechts zu laufen, 'a' um nach links zu laufen und 's' um  nach hinten zu laufen" << std::endl;
        std::cout << "Mit 'c' beenden Sie das Spiel" << std::endl;
        std::cin >> answer;
        if (answer == "w")
        {
            std::cout << "Sie gehen einen Schritt nach vorne" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        else if (answer == "a")
        {
            std::cout << "Sie gehen einen Schritt nach links" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        else if (answer == "s")
        {
            std::cout << "Sie gehen einen Schritt nach hinten" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        else if (answer == "d")
        {
            std::cout << "Sie gehen einen Schritt nach rechts" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        else if (answer == "c")
        {
            std::cout << "Sie haben das Spiel beendet .. :(" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            start_game = false;
        }
        else
        {
            std::cout << "Falsche Eingabe !" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }
    return 0;
}
