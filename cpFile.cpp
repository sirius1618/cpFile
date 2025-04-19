#include <iostream> 
#include <cstdlib>

using namespace std;

void copiarClipBord(const string& file) {
  string comando = "cat " + file +" | xclip -selection clipboard";
  system(comando.c_str());
}

int main(int argc, char* argv[]) {
    if (argc != 2) { 
      cout << "Uso: " << argv[0] << " <arquivo>" << endl; 
      cout << "Exemplo: " << argv[0] << " programa.py" << endl;
      return 1;
   }

  string caminhoFile = argv[1];
  copiarClipBord(caminhoFile);
  cout << "Arquivo copiado!" << endl;
  return 0;
}
