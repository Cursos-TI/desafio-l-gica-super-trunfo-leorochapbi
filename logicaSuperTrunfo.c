# Função para cadastrar uma carta
def cadastrar_carta():
    print("\nCadastro de Carta")
    cidade = input("Nome da cidade: ")
    estado = input("Estado da cidade: ")
    codigo = input("Código da carta: ")
    populacao = int(input("População: "))
    area = float(input("Área (em km²): "))
    pib = float(input("PIB (em milhões de R$): "))
    pontos_turisticos = int(input("Número de pontos turísticos: "))
    
    carta = {
        "cidade": cidade,
        "estado": estado,
        "codigo": codigo,
        "populacao": populacao,
        "area": area,
        "pib": pib,
        "pontos_turisticos": pontos_turisticos
    }
    
    return carta

# Função para comparar duas cartas com base em um atributo escolhido
def comparar_cartas(carta1, carta2, atributo):
    if atributo == "populacao":
        if carta1["populacao"] > carta2["populacao"]:
            return carta1
        elif carta1["populacao"] < carta2["populacao"]:
            return carta2
        else:
            return None  # Empate
    
    elif atributo == "area":
        if carta1["area"] > carta2["area"]:
            return carta1
        elif carta1["area"] < carta2["area"]:
            return carta2
        else:
            return None  # Empate
    
    elif atributo == "pib":
        if carta1["pib"] > carta2["pib"]:
            return carta1
        elif carta1["pib"] < carta2["pib"]:
            return carta2
        else:
            return None  # Empate
    
    elif atributo == "pontos_turisticos":
        if carta1["pontos_turisticos"] > carta2["pontos_turisticos"]:
            return carta1
        elif carta1["pontos_turisticos"] < carta2["pontos_turisticos"]:
            return carta2
        else:
            return None  # Empate
    
    elif atributo == "densidade_populacional":
        densidade1 = carta1["populacao"] / carta1["area"]
        densidade2 = carta2["populacao"] / carta2["area"]
        if densidade1 < densidade2:  # Menor densidade vence
            return carta1
        elif densidade1 > densidade2:
            return carta2
        else:
            return None  # Empate

# Função para exibir os resultados
def exibir_resultados(carta1, carta2, vencedor):
    print("\nCarta 1:", carta1["cidade"], "-", carta1["estado"])
    print("População:", carta1["populacao"], "Área:", carta1["area"], "km²", "PIB:", carta1["pib"], "milhões de R$", "Pontos Turísticos:", carta1["pontos_turisticos"])
    
    print("\nCarta 2:", carta2["cidade"], "-", carta2["estado"])
    print("População:", carta2["populacao"], "Área:", carta2["area"], "km²", "PIB:", carta2["pib"], "milhões de R$", "Pontos Turísticos:", carta2["pontos_turisticos"])
    
    if vencedor:
        print(f"\nA carta vencedora é {vencedor['cidade']} - {vencedor['estado']}!")
    else:
        print("\nHouve um empate!")

# Função principal para rodar o sistema
def desafio_super_trunfo():
    print("Bem-vindo ao Desafio Super Trunfo - Países!")
    
    # Cadastro das cartas
    print("\nDigite os dados da primeira carta:")
    carta1 = cadastrar_carta()
    print("\nDigite os dados da segunda carta:")
    carta2 = cadastrar_carta()
    
    # Escolher o atributo para a comparação
    print("\nEscolha um atributo para comparar: populacao, area, pib, pontos_turisticos ou densidade_populacional")
    atributo = input("Digite o atributo: ").strip().lower()
    
    # Comparar as cartas
    vencedor = comparar_cartas(carta1, carta2, atributo)
    
    # Exibir os resultados
    exibir_resultados(carta1, carta2, vencedor)

# Rodando o programa
desafio_super_trunfo()
