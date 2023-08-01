# teste

O código utiliza a abordagem de Gradiente Descendente para resolver o
problema das Oito Rainhas. Inicialmente, é criado um tabuleiro aleatório com
uma rainha por linha. Então, é calculado o custo atual do tabuleiro, que
corresponde ao número de pares de rainhas que se atacam. Em seguida, é
iniciado um loop que executa um número definido de iterações. A cada
iteração, são gerados vizinhos do tabuleiro atual, alterando a posição de uma
rainha em uma das linhas. O vizinho com o menor custo é escolhido como o
melhor vizinho. Se o custo do melhor vizinho for menor que o custo atual, o
tabuleiro atual é atualizado com o melhor vizinho. Se o custo do melhor vizinho
for igual ao custo atual, o número de iterações sem melhoria é incrementado.
Se esse número atingir 20, um novo tabuleiro aleatório é gerado e o custo atual
é atualizado. Se o custo atual for zero, isso significa que não há pares de
rainhas que se atacam, e a solução é retornada. Ao final das iterações, é
exibida a solução encontrada e o número de pares de rainhas que se atacam.
