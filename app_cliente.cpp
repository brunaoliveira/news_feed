#include <iostream> 
#include <string> 
#include <pthread.h> // necessario para criar as threads
#include <termios.h>
#include <unistd.h> //acesso ao POSIX
#include <ctime>


using namespace std;
//#include "client_tcp.cpp" //nao sei se ta certo

bool validateStr(string str);
bool is_number(const std::string& s);
int selectPort();


struct thread_data
{
  int thread_id;
  int port;
};

pthread_t listenNewMessagesThread;

int main(int argc, char *argv[]){
 
    if(argc < 4){
            fprintf(stderr,"Por favor siga o exemplo abaixo:\n ./app_cliente <perfil> <endereço do servidor> <porta>\n");
            exit(1); 
        }

string perfil = string(argv[1]);
string ip = string(argv[2]);
string porta = string(argv[3]);

if (validateStr(perfil)==true)
exit(1);

std::cout << "perfil: " << perfil << " ip: " << ip << " porta: " << porta << std::endl;

}

bool validateStr(string str){
  if (str.length()<4)
  {
    std::cout<<"Erro: O nome do perfil deve possuir mais de 4 caracteres"<< std::endl;
    return  true;  
  }
  else if (str.length()>20)
  {
    std::cout << "Erro: O nome do perfil deve possuir menos de 20 caracteres" << std::endl;
    return true;
  }
  else
  {
    return false;
    }
}
