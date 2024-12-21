# Conversor de Unidades

Este programa em C permite realizar conversões entre diferentes unidades de medida. As unidades cobertas incluem volume, comprimento, área e temperatura.

---

## Funcionalidades Principais

### Menu Principal
Ao executar o programa, o usuário pode escolher o tipo de conversão desejada por meio de um menu interativo:

1. Conversão de Volume
2. Conversão de Comprimento
3. Conversão de Área
4. Conversão de Temperatura
5. Conversão de Tempo
6. Outra funcionalidade (em desenvolvimento)
11. Sair

O menu principal é exibido continuamente até que o usuário escolha a opção de sair.

---

## Conversões Disponíveis

### 1. Volume
Esta funcionalidade está reservada para futuras implementações.

---
### 2. Comprimento
Converte entre diferentes unidades de comprimento:

- **Entrada e Saída:**
  - Quilômetro (km)
  - Metro (m)
  - Centímetro (cm)
  - Milímetro (mm)

- **Exemplo de uso:**
  - Inserir valor em metros e converter para quilômetros, centímetros ou milímetros.

### 3. Área
Converte entre diferentes unidades de área:

- **Unidades Suportadas:**
  - Quilômetro quadrado (km²)
  - Hectômetro quadrado (hm²)
  - Decâmetro quadrado (dam²)
  - Metro quadrado (m²)
  - Decímetro quadrado (dm²)
  - Centímetro quadrado (cm²)
  - Milímetro quadrado (mm²)

- **Exemplo de uso:**
  - Inserir área em metros quadrados e converter para centímetros quadrados.

### 4. Temperatura
Converte entre diferentes escalas de temperatura:

- **Opções:**
  - Celsius (C) para Fahrenheit (F)
  - Celsius (C) para Kelvin (K)
  - Fahrenheit (F) para Celsius (C)
  - Fahrenheit (F) para Kelvin (K)
  - Kelvin (K) para Celsius (C)
  - Kelvin (K) para Fahrenheit (F)

- **Exemplo de uso:**
  - Inserir temperatura em Celsius e converter para Kelvin.

### . Tempo
Converte entre diferentes unidades de medida de tempo:

- **Opções:**
  - Segundos
  - Minutos
  - Hora
  - Dia
  
- **Exemplo de uso:**
  - Inserir unidade de entrada minutos e converter para segundos.

## Como Usar
1. Compile o programa com um compilador C, por exemplo:
   ```
   gcc -o conversor conversor.c -lm
   ```
2. Execute o programa:
   ```
   ./conversor
   ```
3. Escolha o tipo de conversão desejada e siga as instruções exibidas no terminal.

---

## Contribuição
Sinta-se à vontade para sugerir melhorias ou adicionar novas funcionalidades. Para colaborar, clone o repositório e envie um pull request com suas alterações.

---

## Licença
Este projeto é de uso livre e pode ser modificado conforme necessário.

