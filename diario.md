# Diário de Bordo - Testes do Módulo de Temperaturas

**Data:** 05/08/2026  
**Módulo:** `fundamentos_c/temperaturas.c`  
**Função Testada:** `get_temperature_stats()`

---

## 📌 Descrição do Teste
Validação da função de análise de temperaturas em C utilizando entrada via terminal (`scanf`). Foram testados três cenários principais para garantir que os cálculos de **Média**, **Mínimo** e **Máximo** funcionem corretamente em diferentes contextos de dados.

---

## 🧪 Casos de Teste Executados

### 1. Teste com Valores Comuns
* **Entradas:** `23.5`, `18.0`, `31.2`, `25.0`, `20.1`
* **Saída Obtida:**
  * **Média:** `23.56`
  * **Mínimo:** `18.00`
  * **Máximo:** `31.20`
* **Status:** 🟢 Aprovado

---

### 2. Teste com Valores Repetidos
* **Entradas:** `25.0`, `25.0`, `25.0`, `25.0`, `25.0`
* **Saída Obtida:**
  * **Média:** `25.00`
  * **Mínimo:** `25.00`
  * **Máximo:** `25.00`
* **Status:** 🟢 Aprovado

---

### 3. Teste com Valores Negativos e Mistos
* **Entradas:** `-5.0`, `-12.3`, `-2.5`, `0.0`, `-8.1`
* **Saída Obtida:**
  * **Média:** `-5.58`
  * **Mínimo:** `-12.30`
  * **Máximo:** `0.00`
* **Status:** 🟢 Aprovado

---

## 🛠️ Correções Realizadas durante a Compilação
- **Erro de include:** Ajustado o caminho de `#include "temperaturas.h"` para `#include "fundamentos_c/temperaturas.h"` no arquivo `main.c`.
- **Redefinição de struct:** Removida a redeclaração da `struct temperature_status` no arquivo `temperaturas.c`, mantendo-a apenas no arquivo de cabeçalho `temperaturas.h`.