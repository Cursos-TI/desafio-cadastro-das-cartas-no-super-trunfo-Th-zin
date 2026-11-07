
#  Super Trunfo - Comparador de Cidades em C

Projeto desenvolvido em linguagem C para simular uma disputa no estilo **Super Trunfo**, utilizando dados demográficos e econômicos de cidades brasileiras. O sistema permite a exibição das cartas e a escolha dinâmica de dois atributos para realizar a comparação e determinar a cidade vencedora.

---

##  Funcionalidades

- **Exibição de Cartas:** Apresenta dados detalhados das cidades cadastrais (Estado, Código, População, Área, PIB, Pontos Turísticos e cálculo automático da Densidade Demográfica).
- **Menu Dinâmico:** Interface via terminal para seleção do 1º e do 2º atributo de comparação (impedindo a repetição da mesma opção).
- **Lógica de Comparação Customizada:**
  - Para a **Densidade Demográfica**, a regra é invertida: **o menor valor vence**.
  - Para os demais atributos (População, Área, PIB, Pontos Turísticos), **o maior valor vence**.
- **Cálculo de Pontuação Total:** Soma os valores dos dois atributos escolhidos para cada carta e define a vencedora ou se houve empate.

---

##  Tecnologias Utilizadas

- **Linguagem:** C (padrão C99 ou superior)
- **Compilador Recomendado:** GCC / Clang
- **Biblioteca Padrão:** `<stdio.h>`

---

##  Estrutura do Código

| Função | Descrição |
| :--- | :--- |
| `exibirCarta()` | Imprime os dados estruturados de uma carta/cidade no terminal. |
| `exibirMenu()` | Exibe as opções de atributos disponíveis, ocultando o atributo já selecionado. |
| `compararAtributos()` | Retorna a comparação individual entre dois valores com base nas regras do jogo. |
| `main()` | Gerencia os dados das cartas, fluxo do menu, leitura de entradas (`scanf`), soma e exibição dos resultados. |

---

##  Como Executar o Projeto

### Pré-requisitos
Certifique-se de ter um compilador C instalado em seu sistema (como GCC no Linux/macOS ou MinGW no Windows).


