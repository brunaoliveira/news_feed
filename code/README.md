# ProfileManagement

Funções de ProfileManagement.hpp e ProfileManagement.cpp descritas abaixo:

### Constantes: 
DIRECTORY com o caminho para o diretório users/ onde os arquivos de usuários estão armazenados.

EXTENSION com o formato do arquivo (no caso, .txt)

### Métodos:
**createUserPath()**
    recebe o username informado pelo cliente e cria o caminho para o diretório onde constam os usuários. a extensão do arquivo também faz parte da concatenação. retorna uma string que será usada na abertura de arquivos.

    EXEMPLO:
    entrada: asvarella
    saída: users/asvarella.txt

**doesUserExist()**
    testa se determinado username já existe nos dados da aplicação. recebe como entrada um caminho para arquivo referente ao usuário informado. retorna 0 caso inexistente e 1 caso existente.

**followUser()**
    adiciona o usuário ativo na aplicação à lista de seguidores de um determinado usuário que ele informar. recebe como entradas um caminho para arquivo referente ao usuário informado e o username do usuário ativo no cliente. a adição é feita a partir de arquivo de texto. retorna 1 quando bem sucedida e 0 quando ocorre algum erro.
    OBS: precisa da checagem prévia da existência do usuário (feita em doesUserExist())

**signIn()**
    abre o arquivo do usuário que acabou de se conectar ao servidor. recebe como entrada um caminho para arquivo referente ao usuário informado. Se for um usuário existente, apenas abre e fecha o arquivo. Se for inexistente, criará o arquivo para este usuário e o fechará em seguida. //mais coisas acontecerão futuramente

# Utilities

Ainda não tem quase nada, mas é bom para implementar coisas que são úteis tanto para o servidor quanto para o cliente. 

**charToString()**
    converte uma entrada char para uma string a fim de tornar compatível com outras funcionalidades.
