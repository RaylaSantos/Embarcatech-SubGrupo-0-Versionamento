# Conversor de Unidades

Este programa em C permite realizar conversões entre diferentes unidades de medida. As unidades cobertas incluem volume, comprimento, área, temperatura e tempo.

---

## Funcionalidades Principais

### Menu Principal
Ao executar o programa, o usuário pode escolher o tipo de conversão desejada por meio de um menu interativo:

1. Conversão de Volume
2. Conversão de Comprimento
3. Conversão de Área
4. Conversão de Temperatura
5. Conversão de Tempo
6. conversão de Potencia
11. Sair

O menu principal é exibido continuamente até que o usuário escolha a opção de sair.

---

## Conversões Disponíveis

### 1. Volume
Converte entre diferentes unidades de volume:

- **Unidades Suportadas:**
  - Metro cúbico (m³)
  - Decímetro cúbico (dm³)
  - Centímetro cúbico (cm³)
  - Milímetro cúbico (mm³)

- **Exemplo de uso:**
  - Inserir valor em metros cúbicos e converter para decímetros cúbicos.

---
### 2. Comprimento
Converte entre diferentes unidades de comprimento:

- **Entrada e Saída:**
  - Quilômetro (km)
  - Metro (m)
  - Centímetro (cm)
  - Milímetro (mm)
  - Polegada (pol)

- **Exemplo de uso:**
  - Inserir valor em metros e converter para quilômetros, centímetros ou polegadas.

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

### 5. Tempo
Converte entre diferentes unidades de medida de tempo:

- **Opções:**
  - Segundos
  - Minutos
  - Horas
  - Dias


- **Exemplo de uso:**
  - Inserir valor em minutos e converter para segundos.

### 6. Unidade de medida de armazenamento
Converte entre diferentes unidades de medida de armazenamento:

**Opções:**

| Número | Opção |
|--------|-------|
| 0      | Bit   |
| 1      | Byte  |
| 2      | KB    |
| 3      | MB    |
| 4      | GB    |
| 5      | TB    |

Cada unidade está definida da seguinte forma:

| Unidade | Definição           |
|---------|---------------------|
| bit     | Unidade básica de dados |
| byte    | 1 byte = 8 bits     |
| KB      | 1 KB = 1.000 bytes  |
| MB      | 1 MB = 1.000 KB     |
| GB      | 1 GB = 1.000 MB     |
| TB      | 1 TB = 1.000 GB               |

**Exemplo de uso**
  - Converter 1000 bits em KB

---

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

