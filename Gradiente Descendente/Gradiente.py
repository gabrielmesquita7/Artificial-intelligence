import random

def rainhas_atacam(rainha1, rainha2):
    return (rainha1[0] == rainha2[0] or  
            rainha1[1] == rainha2[1] or  
            abs(rainha1[0] - rainha2[0]) == abs(rainha1[1] - rainha2[1]))  

def num_rainhas_atacadas(tabuleiro):
    n = len(tabuleiro)
    count = 0
    for i in range(n):
        for j in range(i+1, n):
            if rainhas_atacam(tabuleiro[i], tabuleiro[j]):
                count += 1
    return count

def gradiente_descendente(num_iteracoes):
    tabuleiro = [(i,random.randint(0, 7),) for i in range(8)]  # uma rainha por linha
    print(f"Iteração 0 - Custo Atual: {num_rainhas_atacadas(tabuleiro)}")
    custo_atual = num_rainhas_atacadas(tabuleiro)
    num_iter_sem_melhoria = 0
    for i in range(num_iteracoes):
        melhor_vizinho = tabuleiro
        menor_custo = custo_atual
        for j in range(8):
            for k in range(8):
                vizinho = list(tabuleiro)
                vizinho[j] = (j, k)
                custo_vizinho = num_rainhas_atacadas(vizinho)
                if custo_vizinho < menor_custo:
                    menor_custo = custo_vizinho
                    melhor_vizinho = vizinho
        diferenca_custo = custo_atual - menor_custo
        if diferenca_custo == 0:
            num_iter_sem_melhoria += 1
        else:
            num_iter_sem_melhoria = 0
        if num_iter_sem_melhoria == 20:
            tabuleiro = [(i, random.randint(0, 7)) for i in range(8)]  
            custo_atual = num_rainhas_atacadas(tabuleiro)
            num_iter_sem_melhoria = 0
        else:
            tabuleiro = melhor_vizinho
            custo_atual = menor_custo
        print(f"Iteração {i+1} - Custo atual: {custo_atual} - Melhor vizinho encontrado: {menor_custo} - Diferença de custo: {diferenca_custo} - Iterações desde última melhoria: {num_iter_sem_melhoria}")
        if custo_atual == 0:
            return tabuleiro, i+1  
    return tabuleiro, num_iteracoes  

def main():
    solucao, num_iteracoes = gradiente_descendente(1000)
    print(f"Solução encontrada em {num_iteracoes} iterações:")
    for i in range(8):
        linha = ""
        for j in range(8):
            if (i, j) in solucao:
                linha += "Q "
            else:
                linha += ". "
        print(linha)
    print(f"Número de pares de rainhas que se atacam: {num_rainhas_atacadas(solucao)}")

if __name__ == "__main__":
    main()