> Tabela Hash - Professor Lucas
# Exercício: Implementação de Lista Telefônica com Hash Table
Você deverá implementar uma aplicação em C ou C++ que funcione como uma lista telefônica. A aplicação deverá utilizar uma tabela hash para armazenar pares de dados (nome e número de telefone) em memória, possibilitando uma busca rápida pelo número de telefone associado a um nome específico.

## Aluno
&copy; Leonardo Felipe Salgado - 2024

## Objetivo

Praticar o uso de tabelas hash para resolver problemas de indexação e busca eficiente. O aluno deve compreender e implementar uma estratégia de hash, bem como lidar com colisões.

## Requisitos

1. **Estrutura de Dados (Tabela Hash)**

   - [x] A lista telefônica deve ser implementada usando uma tabela hash. Utilize uma função hash para associar cada nome a um índice na tabela.
   - [x] Lide com colisões de dados, utilizando a técnica de _encadeamento_ (listas ligadas) ou _endereçamento aberto_ (linear probing, quadratic probing, etc.), conforme sua escolha. **Técnica escolhida:** _Redimensionamento dinâmico_.

2. **Armazenamento em Memória**

   - [x] O programa deve armazenar todos os dados em memória, sem uso de banco de dados ou arquivos externos.

3. **Funcionalidades da Lista Telefônica**

   - [x] **Adicionar novo contato:** Permitir que o usuário insira um nome e um número de telefone para adicioná-los à tabela hash.
   - [x] **Buscar contato:** Através de um nome fornecido pelo usuário, buscar o número de telefone correspondente e exibir na tela.
   - [x] **Remover contato:** Permitir que o usuário remova um contato, se ele existir na lista.
   - [x] **Mostrar todos os contatos:** Exibir todos os contatos armazenados na tabela hash (nome e número).

4. **Interface do Usuário**

   - [x] O programa deve ter uma interface simples de console, onde o usuário pode escolher as opções:
     - `1` - Adicionar contato
     - `2` - Buscar contato por nome
     - `3` - Remover contato
     - `4` - Exibir todos os contatos
     - `0` - Sair

5. **Medição de Desempenho**

   - [x] Calcule e exiba o tempo médio de busca e inserção de um contato (em milissegundos). Isso permitirá aos alunos compreenderem a eficiência da tabela hash em operações de busca e inserção.

   ```
      Escolha uma opcao:
      1 - Adicionar contato
      2 - Buscar contato por nome
      3 - Remover contato
      4 - Exibir todos os contatos
      0 - Sair
      Digite uma opcao: 1
      Nome do contato (sem espacos): Leonardo
      Numero do contato: 984402949
      Contato adicionado com sucesso!
      (Tempo de insercao: 0.1170 ms)

      Escolha uma opcao:
      1 - Adicionar contato
      2 - Buscar contato por nome
      3 - Remover contato
      4 - Exibir todos os contatos
      0 - Sair
      Digite uma opcao: 2
      Nome do contato: Leonardo
      Contato encontrado: (1) Leonardo - 984402949 (Tempo de busca: 0.0050 ms)
   ```

6. **Tratamento de Erros**
   - [x] Caso o usuário tente buscar ou remover um contato que não existe, exibir uma mensagem de erro apropriada.

   ```
      Escolha uma opcao:
      1 - Adicionar contato
      2 - Buscar contato por nome
      3 - Remover contato
      4 - Exibir todos os contatos
      0 - Sair
      Digite uma opcao: 2
      Nome do contato: Gilmar
      Contato nao encontrado.
   ```

   - [x] Caso de duplicidade de nomes (se desejado, permita a inserção de múltiplos números para um mesmo nome ou apenas um).

   ```
      Escolha uma opcao:
      1 - Adicionar contato
      2 - Buscar contato por nome
      3 - Remover contato
      4 - Exibir todos os contatos
      0 - Sair
      Digite uma opcao: 1
      Nome do contato (sem espacos): Leonardo
      Numero do contato: 9843463464
      Nome igual nao neh amigo, complica para o hash
      (Tempo de insercao: 0.0580 ms)
   ```
