# Simple Library Management System

Este é um sistema simples de gerenciamento de biblioteca escrito em C. O programa permite adicionar informações sobre livros, exibir detalhes dos livros armazenados, listar livros de um autor específico e mostrar a contagem total de livros na biblioteca.

## Funcionalidades

1.  **Adicionar Informações de Livro**: Permite ao usuário adicionar o nome do livro, autor, número de páginas e preço.
2.  **Exibir Informações de Livros**: Mostra todas as informações dos livros que foram adicionados.
3.  **Listar Livros por Autor**: Exibe livros que foram escritos por um autor específico fornecido pelo usuário.
4.  **Contagem de Livros**: Mostra o número total de livros armazenados na biblioteca.

## Como Usar

1.  Clone o repositório:
    
    `git clone https://github.com/Pedr88/LibraryManager-C`
    
2.  Compile o código:
    
    `gcc -o main main.c`
    
3.  Execute o programa:
    
    `./main.exe`
    
4.  Utilize o menu para interagir com o sistema:
    
    -   **1**: Adicionar informações de livro
    -   **2**: Exibir informações de livros
    -   **3**: Listar livros de um autor específico
    -   **4**: Mostrar o número de livros na biblioteca
    -   **5**: Sair do programa

## Estrutura do Código

-   **Estrutura `library`**: Define os atributos para um livro, incluindo nome, autor, número de páginas e preço.
-   **Função `main`**: Contém o loop principal e o menu que permite ao usuário selecionar a operação desejada.

## Exemplo de Uso

Ao iniciar o programa, você verá um menu com as opções disponíveis. O programa irá pedir para inserir a opção desejada e, conforme a opção selecionada, solicitará as informações necessárias.

## Notas

-   **Limitações**: O tamanho dos campos `bookName` e `author` está limitado a 20 caracteres. Para nomes maiores, você pode ajustar os tamanhos dos arrays.
-   **Validação**: O código atual não inclui validação extensiva de entrada. A validação pode ser adicionada para melhorar a robustez do programa.
