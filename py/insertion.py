def insertion_cres(lista):#pega o dado a ser tratado
    n = len(lista)#pega o tamanho da lista
    for i in range(1, n):#começa do segundo elemento do array e vai até o ultimo
        chave = lista[i]#A chave vai pegar a primeira posição a ser utilizada pra comparar
        j = i-1#representa o primeiro elemento do subarray que será comparado com a chave
        while j >= 0 and lista[j]> chave:#verifica se a posiçção é maior que a chave para poder comparar
            lista[j+1] = lista[j]#move o  maior elemento do subarray pra frente colocando o elemento comparado no sub array
            j = j-1 #decrementa o elemento pra evitar loop infinito
        lista[j+1] = chave# busca outro elemento a ser comparado

def insertion_decres(lista):
    n = len(lista)
    for i in range(1, n):
        chave = lista[i]
        j = i-1
        while j >= 0 and lista[j]< chave:
            lista[j+1] = lista[j]
            j = j-1
        lista[j+1] = chave
