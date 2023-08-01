# Aprendizagem com Exemplos para Previsão do Tempo de Entrega

Este repositório contém o código-fonte e a documentação de um algoritmo que realiza aprendizagem com exemplos para prever o tempo de entrega de pedidos de entrega. O algoritmo utiliza dados de avaliações do entregador, localização do restaurante, localização de entrega e o tempo real de entrega para realizar a previsão.

## Descrição do Problema

O objetivo deste projeto é prever o tempo de entrega de um pedido de entrega com base em características específicas, como avaliações do entregador, localização do restaurante, localização de entrega e distância entre os pontos. A previsão do tempo de entrega é um problema comum em logística e serviços de entrega, e pode ser útil para melhorar a experiência do cliente e otimizar a operação logística.

## Funcionamento do Algoritmo

O algoritmo utiliza o modelo de regressão linear fornecido pela biblioteca `scikit-learn` para realizar a aprendizagem com exemplos. A etapa inicial é ler os dados de treinamento a partir de um arquivo CSV, que contém as seguintes colunas:
- `Delivery_person_Ratings`: Avaliações do entregador
- `Restaurant_latitude`: Latitude do restaurante
- `Restaurant_longitude`: Longitude do restaurante
- `Delivery_location_latitude`: Latitude da localização de entrega
- `Delivery_location_longitude`: Longitude da localização de entrega
- `Time_taken(min)`: Tempo de entrega em minutos

Em seguida, é realizada a limpeza dos dados, onde o valor da coluna `Time_taken(min)` é extraído para transformar em um valor numérico.

A função `calculate_distance` é utilizada para calcular a distância euclidiana entre as coordenadas do restaurante e a localização de entrega. Isso adiciona uma coluna de `Distance` ao conjunto de dados, representando a distância entre esses pontos.

O algoritmo então utiliza o modelo de regressão linear para aprender a relação entre as características (avaliações do entregador, distância, etc.) e o tempo de entrega. É possível fazer previsões usando o modelo treinado para novos dados, estimando o tempo de entrega com base nas características fornecidas.

## Como Executar

1. Clone este repositório para sua máquina local.
2. Certifique-se de ter o Python (versão 3.x) instalado, bem como as bibliotecas `numpy`, `pandas` e `scikit-learn`.
3. Coloque os dados de treinamento em um arquivo CSV chamado `data.csv`, seguindo o mesmo formato descrito acima.

## Resultados

Após a execução do algoritmo, o modelo de regressão linear será treinado com os dados de treinamento fornecidos no arquivo `data.csv`. O algoritmo calculará os coeficientes de regressão e poderá ser usado para fazer previsões de tempo de entrega com base nas características fornecidas.

É importante ressaltar que os resultados podem variar dependendo dos dados de treinamento e das características utilizadas para a previsão. É recomendado testar diferentes conjuntos de dados e características para obter uma previsão mais precisa.

## Considerações Finais

Este algoritmo é uma introdução ao aprendizado de máquina utilizando regressão linear para previsão de tempo de entrega. É possível melhorar o desempenho do modelo utilizando outras técnicas de aprendizado de máquina e explorando diferentes características e pré-processamentos de dados.

Esperamos que este repositório seja útil para a compreensão dos conceitos básicos de aprendizagem com exemplos e suas aplicações em problemas reais de previsão e otimização.

Se tiver dúvidas, sugestões ou melhorias, sinta-se à vontade para contribuir para este projeto!
