# 📚 Sistema de Gerenciamento de Biblioteca em C

Sistema simples para gerenciamento de biblioteca, permitindo adicionar, listar e buscar livros por autor.

## 🚀 Como Usar

### Instalação
```bash
git clone https://github.com/Pedr88/LibraryManager-C
cd LibraryManager-C
```

### Compilação e Execução
```bash
# Compilar o código
gcc -o main main.c

# Executar o programa
./main.exe
```

## ⚙️ Funcionalidades
- `Adicionar Livro`  
  Permite cadastrar um livro informando nome, autor, número de páginas e preço.
- `Exibir Livros`  
  Lista todos os livros cadastrados.
- `Buscar por Autor`  
  Exibe os livros escritos por um autor específico.
- `Contar Livros`  
  Mostra a quantidade total de livros na biblioteca.

## 📖 Exemplo de Uso

Ao iniciar o programa, um menu será exibido com as opções:
```bash
1. Adicionar Livro
2. Exibir Livros
3. Buscar por Autor
4. Contar Livros
5. Sair
```

## 🛠 Estrutura do Código
- **Estrutura `library`**: Define os atributos do livro (nome, autor, páginas, preço).
- **Função `main`**: Contém o loop principal e as interações com o usuário.
