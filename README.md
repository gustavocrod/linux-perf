# Uso da ferramenta perf, no sistema operacional Linux.

____
### 1. Introdução

Perf pode ser definido como um conjunto de ferramentas baseados na interface `perf_events` do kernel. 
Há um comando que também é perf, que realiza a interface entre o usuário e o subsistema (interface) `perf_events`.
O perf é uma ferramenta de análise, monitoramento e depuração baseada em eventos, ou seja, os eventos devem ser
predefinidos para que seja possível coletá-los e processá-los durante o processo de análise.

Esses eventos mensuráveis podem ser vistos na figura abaixo e compreendem: Eventos de *hardware*, eventos de *software*, *tracepoints* dinÂmicos e estáticos.

![Interface do perf_events](perf_events_map.png Eventos mensuráveis pela ferramenta perf)

____
### 2. Bancada de testes

##### 2.1 Hardware

    - Placa-mãe Gigabyte H110M-H
    - 2x8 8192 MB RAM DDR4 2133 MHz
    - Intel Core i5 6400:
        * Núcleos: 4 Cores e 4 Threads
        * Clock: Frequência base 2.70 GHz e Frequência turbo max 3.30 GHz 
        * Cache: L1 Cache 256kB; L2 Cache 1024 kB; L3 Cache 6144 kB

##### 2.2 Sistema Operacional

    - Ubuntu 18.04.1
    - Kernel 5.4.0-65-generic
 ____

Estudo baseado em: 
Linux kernel profiling with perf: https://perf.wiki.kernel.org/index.php/Tutorial
EMPREGO DO PERF NA MEDIÇÃO E ANÁLISE DO TEMPO DE RESPOSTA DE TAREFAS NO LINUX: https://repositorio.ufsc.br/bitstream/handle/123456789/211642/PEAS0312-D.pdf?sequence=-1&isAllowed=y
