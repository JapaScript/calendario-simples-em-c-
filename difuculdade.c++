#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <ctime>

int main() {
    char re[3];
    char r[2];
    int m, d;
    std::vector<std::string> resu = {"", ""};
    std::cout << "digite o mes e/ou o dia\n";
    std::cout << "m[mes] d[dia]: ";
    std::cin >> r;
    
    while(strcmp(r, "d") != 0 && strcmp(r, "m") != 0 ){
        std::cout << "Sala incorreta ou inexistente\n";
        std::cout << "m[mes] d[dia]: ";
        std::cin >> r;
    }

    if(strcmp(r,"m")==0){
        std::cout << "digite o mes: ";
        std::cin >> m;
        while (m < 1 || m > 12)
        {
            std::cout << "Mes invalido\n";
            std::cout << "Apenas numeros de 1 a 12 sao aceitos: ";
            std::cin >> m;
        }
        switch(m){
            case 1:
                resu[0]= "Janeiro";
                break;
            case 2:
                resu[0]= "Fevereiro";
                break;
            case 3:
                resu[0]= "Março";
                break;
            case 4:
                resu[0]= "Abril";
                break;
            case 5: 
                resu[0]= "Maio";
                break;
            case 6:
                resu[0]= "Junho";
                break;
            case 7:
                resu[0]= "Julho";
                break;
            case 8:
                resu[0]= "Agosto";
                break;
            case 9:
                resu[0]= "Setembro";
                break;
            case 10:
                resu[0]= "Outubro";
                break;
            case 11:
                resu[0]= "Novembro";
                break;
            case 12:
                resu[0]= "Dezembro";
                break;
        } 
        std::cout << "deseja digitar o dia? S/N";
        std::cin >> re;
    }
  
    if(strcmp(re, "s") == 0 || strcmp(r, "d") == 0){
        std::cout << "digite o dia: ";
        std::cin >> d;
        while (d < 1 || d > 7)
        {
            std::cout << "Dia invalido\n";
            std::cout << "Apenas numeros de 1 a 7 sao aceitos: ";
            std::cin >> d;
        }
        
        switch(d){
            case 1:
                resu[1]= "Domingo";
                break;
            case 2:
                resu[1]= "Segunda-Feira";
                break;
            case 3:
                resu[1]= "Terça-Feira";
                break;
            case 4:
                resu[1]= "Quarta-Feira";

                break;
            case 5:
                resu[1]= "Quinta-Feira";
                break;
            case 6: 
                resu[1]= "Sexta-Feira";
                break;
            case 7:
                resu[1]= "Sabado";
                break;
        }
    }
    if (!resu[0].empty()) {
            std::cout << "mes: " << resu[0];
        }
    if (!resu[1].empty()) {
            std::cout << ", Dia: " << resu[1];
        }

    std::time_t tempo_atual = std::time(nullptr);

    std::tm* hora_local = std::localtime(&tempo_atual);

    std::cout << "\n Hora da execucao: " << hora_local->tm_hour << ":" << hora_local->tm_min << ":" << hora_local->tm_sec << std::endl;
    return 0;
    
    
}