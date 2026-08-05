# CÁLCULOS ELÉTRICOS - LEI DE OHM

Documento com a resolução de exercícios básicos aplicando a Primeira Lei de Ohm ($V = R \cdot I$).

---

## Exercício 1: Encontrar a Tensão ($V$)

**Enunciado:**
Um circuito possui um resistor de $20\,\Omega$ atravessado por uma corrente elétrica de $3\,\text{A}$. Qual é a tensão aplicada a esse circuito?

* **Fórmula:**
  $$V = R \cdot I$$

* **Substituição:**
  $$V = 20 \cdot 3$$

* **Resultado:**
  $$V = 60\,\text{V}$$

---

## Exercício 2: Encontrar a Corrente ($I$)

**Enunciado:**
Uma lâmpada é conectada a uma bateria de $12\,\text{V}$. Sabendo que a resistência do filamento da lâmpada é de $4\,\Omega$, qual é a corrente elétrica que circula por ela?

* **Fórmula:**
  $$I = \frac{V}{R}$$

* **Substituição:**
  $$I = \frac{12}{4}$$

* **Resultado:**
  $$I = 3\,\text{A}$$

---

## Exercício 3: Encontrar a Resistência ($R$)

**Enunciado:**
Um equipamento opera ligado a uma rede de $220\,\text{V}$ e consome uma corrente de $20\,\text{A}$. Qual é o valor da resistência elétrica desse equipamento?

* **Fórmula:**
  $$R = \frac{V}{I}$$

* **Substituição:**
  $$R = \frac{220}{20}$$

* **Resultado:**
  $$R = 11\,\Omega$$

---

## Exercício 4: Encontrar a Potência ($P$)

**Enunciado:**
Um chuveiro elétrico está ligado a uma rede de $220\,\text{V}$ e é percorrido por uma corrente de $25\,\text{A}$. Qual é a potência elétrica desse chuveiro?

* **Dados:**
  * Tensão ($V$) = $220\,\text{V}$
  * Corrente ($I$) = $25\,\text{A}$
  * Potência ($P$) = ?

* **Fórmula:**
  $$P = V \cdot I$$

* **Substituição:**
  $$P = 220 \cdot 25$$

* **Resultado:**
  $$P = 5500\,\text{W} \quad (5{,}5\,\text{kW})$$

---

## Exercício 5: Encontrar a Energia Elétrica ($E$)

**Enunciado:**
Um ar-condicionado com potência de $1500\,\text{W}$ ($1{,}5\,\text{kW}$) funciona durante $8\,\text{horas}$ por dia. Quanta energia elétrica em $\text{kWh}$ esse aparelho consome em um dia?

* **Dados:**
  * Potência ($P$) = $1{,}5\,\text{kW}$
  * Tempo ($\Delta t$) = $8\,\text{h}$
  * Energia ($E$) = ?

* **Fórmula:**
  $$E = P \cdot \Delta t$$

* **Substituição:**
  $$E = 1{,}5 \cdot 8$$

* **Resultado:**
  $$E = 12\,\text{kWh}$$

---

## Exercício 6: Consumo Mensal e Custo Financeiro

**Enunciado:**
Uma TV de $100\,\text{W}$ ($0{,}1\,\text{kW}$) permanece ligada durante $5\,\text{horas}$ todos os dias durante um mês de $30\,\text{dias}$. Sabendo que a tarifa é de R$ 0,80 por $\text{kWh}$, determine o consumo mensal e o custo final.

* **a) Consumo mensal de energia:**
  $$E_{\text{dia}} = 0{,}1\,\text{kW} \cdot 5\,\text{h} = 0{,}5\,\text{kWh/dia}$$
  $$E_{\text{mês}} = 0{,}5\,\text{kWh/dia} \cdot 30\,\text{dias} = 15\,\text{kWh}$$

* **b) Custo total:**
  $$\text{Custo} = 15\,\text{kWh} \cdot \text{R\$ } 0{,}80$$
  $$\text{Custo} = \text{R\$ } 12{,}00$$

---

## Exercício 7: Resistor Limitador para LED Vermelho (Fonte de 5V)

**Enunciado:**
Um LED vermelho funciona com uma tensão de $2\,\text{V}$ e precisa de uma corrente de $20\,\text{mA}$ ($0{,}02\,\text{A}$) para brilhar com segurança. Sabendo que ele será ligado ao pino de $5\,\text{V}$ do Arduino, qual deve ser o valor da resistência do resistor limitador?

* **Dados:**
  * $V_{\text{fonte}} = 5\,\text{V}$
  * $V_{\text{LED}} = 2\,\text{V}$
  * $I = 20\,\text{mA} = 0{,}02\,\text{A}$
  * $R = ?$

* **Fórmula:**
  $$R = \frac{V_{\text{fonte}} - V_{\text{LED}}}{I}$$

* **Substituição:**
  $$R = \frac{5 - 2}{0{,}02}$$
  $$R = \frac{3}{0{,}02}$$

* **Resultado:**
  $$R = 150\,\Omega$$

---

## Exercício 8: Resistor Limitador para LED Azul (Fonte de 12V)

**Enunciado:**
Um LED azul possui uma queda de tensão de $3{,}2\,\text{V}$ e opera com corrente de $20\,\text{mA}$ ($0{,}02\,\text{A}$). Qual deve ser o valor da resistência para conectá-lo com segurança a uma bateria de $12\,\text{V}$?

* **Dados:**
  * $V_{\text{fonte}} = 12\,\text{V}$
  * $V_{\text{LED}} = 3{,}2\,\text{V}$
  * $I = 20\,\text{mA} = 0{,}02\,\text{A}$
  * $R = ?$

* **Fórmula:**
  $$R = \frac{V_{\text{fonte}} - V_{\text{LED}}}{I}$$

* **Substituição:**
  $$R = \frac{12 - 3{,}2}{0{,}02}$$
  $$R = \frac{8{,}8}{0{,}02}$$

* **Resultado:**
  $$R = 440\,\Omega$$