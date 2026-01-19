# Tópico 11 - Operador Módulo (Resto %): A matemática do resto. Uso para verificar par/ímpar e ciclos.

**O Desafio: A Fábrica de Tempo**

Você vai construir um conversor de segundos para o formato "Humano" (Horas:Minutos:Segundos).

**Enunciado:** Receba um número inteiro gigante representando segundos totais (ex: o tempo de duração de um filme ou o uptime de um servidor) e converta para o formato H:M:S.

**Requisitos Técnicos:**
- Use int para tudo (não queremos vírgulas aqui).
- Use / para descobrir os inteiros (quantas horas cheias).
- Use % para descobrir o que sobrou para a próxima etapa.
- Imprima formatado: 3665 segundos equivalem a 1h 1min 5s.

**Casos de Teste**


| Entrada (Segundos) | Saída (Tempo Formatado) |
| :---: | :---: |
| 3665 | 1h 1min 5s |
| 60 | 0h 1min 0s |
| 3600 | 1h 0min 0s |