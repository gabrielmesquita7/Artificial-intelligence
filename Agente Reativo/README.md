# Algoritmo do Aspirador de Pó Reativo Simples

Este repositório contém o código-fonte e a documentação de um agente reativo simples de um aspirador de pó desenvolvido como parte do curso de Inteligência Artificial.

## Descrição do Problema

O objetivo deste projeto é simular o comportamento de um aspirador de pó reativo simples que pode se mover apenas em dois lugares: direita e esquerda. O ambiente consiste em dois locais que podem estar sujos ou limpos. Portanto, há 8 estados possíveis para o ambiente. O agente aspirador de pó está posicionado em uma das posições iniciais e deve tomar decisões com base nas percepções do ambiente (estado atual) para limpar a área suja.

## Funcionamento do Agente

O agente reativo simples segue a seguinte lógica para tomar decisões:

1. Se o local atual estiver sujo, o agente limpará o local.
2. Se o local atual estiver limpo, o agente se moverá para o outro local (se houver) para verificar e limpar se estiver sujo.

O agente não possui memória ou planejamento a longo prazo, apenas reage instantaneamente com base nas informações sensoriais.

## Como Executar

1. Clone este repositório para sua máquina local.
2. Certifique-se de ter o Python (versão 3.x) instalado.
3. Navegue até o diretório do repositório clonado em seu terminal ou prompt de comando.
4. Execute o comando `python main.py` para iniciar a simulação do aspirador de pó reativo simples.

## Resultados

A saída da simulação mostrará os estados do ambiente após cada ação tomada pelo aspirador de pó. Você poderá observar como o agente reativo simples interage com o ambiente e toma decisões com base nas percepções sensoriais.

## Considerações Finais

Este algoritmo de aspirador de pó reativo simples é apenas uma das muitas abordagens possíveis na área de inteligência artificial. A simulação serve como uma introdução ao conceito de agentes reativos, permitindo aos alunos do curso de Inteligência Artificial experimentarem com conceitos básicos de IA e tomada de decisão em ambientes simples.

Esperamos que esta simulação ajude a solidificar os conceitos aprendidos na disciplina e inspire a exploração de algoritmos mais complexos e avançados em inteligência artificial.
