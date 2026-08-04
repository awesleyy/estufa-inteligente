# Estação Inteligente de Monitoramento (Estufa Edge)

## 📌 Sobre o Projeto
Este repositório contém o desenvolvimento do Projeto Integrador da bolsa de estudos PNAAT, focado em **Sistemas Embarcados, IoT e Edge AI**. 

O objetivo central é construir uma estação de monitoramento local capaz de simular a coleta de dados ambientais de uma estufa (temperatura, umidade e luminosidade), processar e validar as leituras, aplicar inteligência artificial diretamente na ponta (*Edge*) para detectar anomalias e registrar histórico local e em nuvem de forma resiliente.

---

## 🚨 Problema
Uma estufa agrícola necessita de monitoramento constante de suas condições microclimáticas para garantir a saúde do cultivo. Sistemas tradicionais dependem 100% de conectividade contínua com a nuvem, o que gera três grandes gargalos em ambientes agrícolas:

1. **Latência de Alertas:** Atraso ao tomar decisões críticas locais (ex.: acionar exaustores ou irrigação).
2. **Dependência de Conexão:** Perda de dados e histórico em momentos de instabilidade da rede de internet rural.
3. **Alto Consumo de Processamento/Dados:** Envio indiscriminado de dados brutos para a nuvem sem tratamento ou filtragem prévia no próprio dispositivo.

---

## 🎯 Objetivo
Desenvolver uma solução em arquitetura embarcada e *Edge Computing* que execute localmente as seguintes etapas:

* **Modelagem e Aquisição de Dados:** Representar e validar leituras físicas (temperatura, umidade e luminosidade) via firmware simulado.
* **Resiliência e Datalogger:** Tratar falhas de conexão salvando os dados validados em um histórico local em formato CSV, além de modelar a transmissão via protocolo **MQTT**.
* **Modelagem de Tarefas (RTOS):** Separar as responsabilidades do sistema (aquisição, armazenamento e alerta) em tarefas concorrentes e seguras utilizando filas de mensagens.
* **Detecção de Anomalias (Edge AI):** Treinar e embarcar um modelo de aprendizado de máquina leve para classificar condições normais e anormais diretamente no dispositivo, reduzindo o tempo de resposta (*latência*).
* **Otimização de Recursos:** Comparar o modelo treinado com uma versão otimizada, analisando o *trade-off* entre acurácia, latência e tamanho do arquivo final.

---

## 🚀 Resultado Esperado
Ao final do desenvolvimento (10 de agosto), o projeto entregará:

1. **Aplicação Integrada Executável (`app/main.py`):** Um fluxo coeso onde uma leitura simulada é gerada, validada contra limites físicos, submetida ao modelo de IA local para classificação e salva no histórico com registro de alertas.
2. **Histórico Local de Dados (`dados/`):** Arquivos CSV estruturados contendo o registro temporal de funcionamento da estufa.
3. **Modelos de IA Treinados e Otimizados (`edge_ai/`):** Classificador de anomalias compilado (`.pkl`) e comparativo detalhado de desempenho e latência.
4. **Documentação e Arquitetura Completa (`docs/` & `firmware/`):** Mapeamento de periféricos (GPIO, ADC, PWM, UART, I²C, SPI), análise de concorrência com RTOS, especificação MQTT e rotinas de interrupção com *debounce*.
5. **Repositório Rastreável:** Histórico de versionamento limpo utilizando **Git Flow** e **Conventional Commits**.

---

## 🛠️ Tecnologias e Conceitos Utilizados

* **Linguagens:** C (Fundamentos de firmware, estruturas e tipos) e Python 3 (Datalogger, simulações, RTOS e ML).
* **Hardware & Arquitetura (Conceitual):** Microcontroladores, GPIO, ADC, PWM, Comunicação Serial (UART, I²C, SPI), Polling e Interrupções.
* **Concorrência & SO Embarcado:** RTOS (Tarefas, Prioridades, Filas de Comunicação e Prevenção de Condição de Corrida).
* **IoT & Protocolos:** MQTT (Broker, Publisher, Subscriber, Tópicos e QoS) e Datalogger CSV local.
* **Edge AI & Otimização:** Scikit-Learn, Matriz de Confusão, Métricas de Classificação (Acurácia, Precisão, Recall), Latência de Inferência e Redução de Modelos.

---

## 📂 Estrutura do Repositório

```text
estacao-edge/
├── README.md                  # Documentação principal do projeto
├── diario.md                  # Registro diário de bordo e acompanhamento
├── .gitignore                # Arquivos ignorados pelo Git (C e Python)
├── requirements.txt           # Dependências Python do projeto
├── app/                       # Script de integração final
├── dados/                     # Datasets e arquivos CSV gerados
├── datalogger/                # Scripts de simulação e persistência local
├── docs/                      # Documentação teórica, cálculos e arquitetura
├── edge_ai/                   # Treinamento, modelos (.pkl) e scripts de inferência
├── firmware/                  # Lógica de aquisição e periféricos
├── fundamentos_c/             # Exercícios e modelagem de structs em C
└── rtos/                      # Simulação de concorrência e filas de mensagens