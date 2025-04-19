# File2Clip - Copiador de Arquivos para Clipboard

## 📝 Descrição
File2Clip é um utilitário de linha de comando para Linux que copia o conteúdo de arquivos diretamente para a área de transferência (clipboard), sem necessidade de abrir o arquivo manualmente.

## 🛠️ Como Compilar

```bash
g++ -o file2clip file2clip.cpp
```

## 📥 Instalação

```bash
sudo mv file2clip /usr/local/bin/
```

## 🚀 Como Usar

```bash
file2clip <arquivo>
```

Exemplo:
```bash
file2clip script.py
```

## 📋 Pré-requisitos
- Linux (testado em distribuições baseadas em Debian/Ubuntu)
- xclip instalado:

```bash
sudo apt install xclip
```

## 🔧 Funcionalidades
- Copia conteúdo de qualquer arquivo texto para o clipboard
- Extremamente leve e rápido
- Não requer interface gráfica

## ⚠️ Limitações
- Funciona apenas em Linux
- Requer xclip instalado
- Não verifica se o arquivo existe antes de tentar copiar

## 📜 Licença
MIT - Livre para uso e modificação

