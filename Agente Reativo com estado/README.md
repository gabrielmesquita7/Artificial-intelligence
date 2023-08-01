# Algoritmo do Aspirador de Pó Reativo com Estado

Este repositório contém o código-fonte e a documentação de um agente reativo com estado de um aspirador de pó desenvolvido como parte do curso de Inteligência Artificial.

## Descrição do Problema

O objetivo deste projeto é simular o comportamento de um aspirador de pó reativo com estado que pode se mover apenas em dois lugares: direita e esquerda. O ambiente consiste em dois locais que podem estar sujos ou limpos. Portanto, há 8 estados possíveis para o ambiente. O agente aspirador de pó está posicionado em uma das posições iniciais e deve tomar decisões com base nas percepções do ambiente (estado atual) e em seu estado interno para limpar a área suja.

## Funcionamento do Agente

O agente reativo com estado segue a seguinte lógica para tomar decisões:

1. Se o local atual estiver sujo, o agente limpará o local.
2. Se o local atual estiver limpo, o agente verificará seu estado interno:
   a. Se estiver no estado "Explorando", o agente se moverá aleatoriamente para a direita ou esquerda.
   b. Se estiver no estado "Voltando", o agente voltará para a posição inicial (oposta à posição atual).
3. Após cada ação, o estado interno do agente será atualizado de acordo com a lógica do problema.

O agente possui memória e é capaz de armazenar seu estado interno para tomar decisões mais sofisticadas e eficientes.

## Estrutura do Repositório

O repositório está organizado da seguinte forma:

- **main.py**: Este é o arquivo principal do programa, que contém a implementação do algoritmo do aspirador de pó reativo com estado.

## Como Executar

1. Clone este repositório para sua máquina local.
2. Certifique-se de ter o Python (versão 3.x) instalado.
3. Navegue até o diretório do repositório clonado em seu terminal ou prompt de comando.
4. Execute o comando `python main.py` para iniciar a simulação do aspirador de pó reativo com estado.

## Resultados

A saída da simulação mostrará os estados do ambiente após cada ação tomada pelo aspirador de pó e as decisões do agente baseadas em seu estado interno. Você poderá observar como o agente reativo com estado interage com o ambiente e toma decisões com base nas percepções sensoriais e em seu estado interno.

## Considerações Finais

Este algoritmo de aspirador de pó reativo com estado é uma evolução do agente reativo simples, permitindo uma abordagem mais sofisticada para tomada de decisões e exploração do ambiente. A simulação serve como uma introdução ao conceito de agentes reativos com estado, preparando os alunos do curso de Inteligência Artificial para lidarem com problemas mais complexos e realistas de tomada de decisão em ambientes dinâmicos.

Esperamos que esta simulação ajude a consolidar os conceitos aprendidos na disciplina e estimule a exploração de algoritmos mais avançados em inteligência artificial com agentes com estado.

