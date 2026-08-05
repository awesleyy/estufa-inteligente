# 📓 Diário de Bordo — Ciclo de Estudos

**Data:** 05/08/2026  
**Projeto:** Estufa Inteligente / Fundamentos em C & Eletrônica  
**Status do Ciclo:** 🟢 Concluído

---

## 🎯 Objetivos do Ciclo
1. Testar e validar o módulo de análise estatística de temperaturas em C (`get_temperature_stats`).
2. Resolver e documentar exercícios de **Lei de Ohm**, consumo de energia e dimensionamento de resistores para LEDs.
3. Configurar a automação de compilação via `Makefile` em ambiente Windows.

---

## 🧪 1. Validação do Módulo de Temperaturas (`fundamentos_c/temperaturas.c`)

A função `get_temperature_stats()` foi testada via terminal (`scanf`) para garantir o cálculo correto de **Média**, **Mínimo** e **Máximo** em 5 leituras térmicas.

### Tabela de Resultados dos Testes

| Caso de Teste | Entradas (ºC) | Média | Mínimo | Máximo | Status |
| :--- | :--- | :---: | :---: | :---: | :---: |
| **1. Valores Comuns** | `23.5`, `18.0`, `31.2`, `25.0`, `20.1` | `23.56` | `18.00` | `31.20` | 🟢 Aprovado |
| **2. Valores Repetidos** | `25.0`, `25.0`, `25.0`, `25.0`, `25.0` | `25.00` | `25.00` | `25.00` | 🟢 Aprovado |
| **3. Valores Negativos** | `-5.0`, `-12.3`, `-2.5`, `0.0`, `-8.1` | `-5.58` | `-12.30` | `0.00` | 🟢 Aprovado |

---

## 🛠️ 2. Resolução de Problemas Técnicos

Durante a compilação do projeto em C, surgiram dois pequenos obstáculos resolvidos no processo:

* **Include Path no `main.c`:**
  * *Problema:* O compilador não localizou `#include "temperaturas.h"`.
  * *Solução:* Ajustado o caminho relativo para `#include "fundamentos_c/temperaturas.h"`.
* **Redeclaração de Types/Structs:**
  * *Problema:* Conflito de tipos (`conflicting types for temperature_status`) ao declarar a `struct` no `.h` e no `.c`.
  * *Solução:* Mantida a definição da `struct` e protótipo **apenas** no header (`temperaturas.h`), deixando o arquivo de implementação (`temperaturas.c`) limpo.

---

## 💡 3. Principais Aprendizados

### 🔌 Eletrônica & Física Aplicada
* **Grandezas Fundamentais:** Fixação das relações entre Tensão ($V$), Corrente ($I$), Resistência ($R$) e Potência ($P$).
* **Lei de Ohm:** Aplicação da fórmula $V = R \cdot I$ para isolar e calcular qualquer uma das três grandezas.
* **Cálculo de Consumo:** Conversão de potência em $\text{W}$ para energia em $\text{kWh}$ ($E = P \cdot \Delta t$) e estimativa de custos financeiros na conta de luz.
* **Resistor Limitador para LED:** Compreensão de que o resistor deve consumir a tensão excedente da fonte ($V_{\text{resistor}} = V_{\text{fonte}} - V_{\text{LED}}$), resultando na fórmula:
  $$R = \frac{V_{\text{fonte}} - V_{\text{LED}}}{I}$$

### 💻 Programação C & Automação
* **Tipos Estruturados (`struct`):** Uso de `struct` como retorno de função para agrupar múltiplos valores (`media`, `minimo`, `maximo`).
* **Makefiles no Windows:** Ajuste de sintaxe para chamadas de sistema no Windows (`mkdir`, `del /f /q`), regras de alvo (`all`, `run`, `clean`) e flags do compilador (`-Wall -Wextra -g3 -I.`).

---

## ⚠️ 4. Dificuldades Encontradas
1. **Organização do Header / Modularização:** Gerenciar inclusões entre pastas (`app/` vs `fundamentos_c/`) sem duplicar definições de tipos.
2. **Compatibilidade do Makefile:** Tratar as diferenças de comandos de terminal nativos do Windows ao construir a automação da compilação.

---

## 🚀 5. Próximos Passos
- [ ] **Eletrônica Digital:** Iniciar estudos em portas lógicas, circuitos combinacionais e álgebra de Boole.
- [ ] **Arquitetura Embarcada:** Compreender o funcionamento interno de microcontroladores (registradores, memória, GPIOs e periféricos).