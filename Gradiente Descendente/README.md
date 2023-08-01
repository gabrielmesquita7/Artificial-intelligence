# Resolvendo o Problema das Oito Rainhas com Gradiente Descendente

Este repositório contém o código-fonte e a documentação de um algoritmo que utiliza a abordagem de Gradiente Descendente para resolver o famoso problema das Oito Rainhas.

## Descrição do Problema

O problema das Oito Rainhas consiste em posicionar oito rainhas em um tabuleiro de xadrez de 8x8 de tal forma que nenhuma rainha ataque outra. Isso significa que não pode haver duas rainhas em uma mesma linha, coluna ou diagonal.

## Funcionamento do Algoritmo

O algoritmo utiliza a técnica de Gradiente Descendente para encontrar uma solução para o problema das Oito Rainhas. Inicialmente, é criado um tabuleiro aleatório com uma rainha por linha. Em seguida, é calculado o custo atual do tabuleiro, que corresponde ao número de pares de rainhas que se atacam.

Em seguida, é iniciado um loop que executa um número definido de iterações. A cada iteração, são gerados vizinhos do tabuleiro atual, alterando a posição de uma rainha em uma das linhas. O vizinho com o menor custo é escolhido como o melhor vizinho.

Se o custo do melhor vizinho for menor que o custo atual, o tabuleiro atual é atualizado com o melhor vizinho. Se o custo do melhor vizinho for igual ao custo atual, o número de iterações sem melhoria é incrementado. Se esse número atingir um limite (por exemplo, 20), um novo tabuleiro aleatório é gerado e o custo atual é atualizado.

O algoritmo continua iterando até que o custo atual seja zero, o que significa que não há pares de rainhas que se atacam. Nesse momento, a solução é retornada.

## Como Executar

1. Clone este repositório para sua máquina local.
2. Certifique-se de ter o Python (versão 3.x) instalado.
3. Navegue até o diretório do repositório clonado em seu terminal ou prompt de comando.
4. Execute o comando `python main.py`, substituindo `main.py` pelo nome do arquivo Python que contém o código do algoritmo.

## Resultados

Após a execução do algoritmo, será exibida a solução encontrada para o problema das Oito Rainhas, representada pelo tabuleiro com a posição das rainhas, e o número de pares de rainhas que se atacam.

Espera-se que o algoritmo encontre uma solução ótima ou próxima da ótima para o problema das Oito Rainhas, onde nenhuma rainha se ataca.

## Considerações Finais

O algoritmo de Gradiente Descendente é uma abordagem interessante para resolver o problema das Oito Rainhas e pode ser aplicado a outros problemas de otimização. Este projeto serve como uma introdução ao conceito de otimização e resolução de problemas combinatórios utilizando técnicas inteligentes.

Esperamos que este repositório seja útil para a compreensão do algoritmo e suas aplicações em problemas reais de inteligência artificial e otimização.

Se tiver dúvidas, sugestões ou melhorias, sinta-se à vontade para contribuir para este projeto!
