
## Repetição

- limite (verificação)
- inicilização
- atualização

motivacao:

> contar de 1 ate 8

```c
int contador = 1; // inicilização


while(contador <= 8) { // verificação
  printf("%d\n", contador); // faça algo
  contador++; // atualização
}
```

### problema do estoque

- ritmo de compra (ex. 10)
- ritmo de venda (ex. 3)
- so fecha quando o estoque zerar

```c
int estoque = 14;

while(estoque != 0) {
  if(estoque > 0) {
    puts("estou vendendo... ");
    estoque -= 3;
  } else if (estoque < 0) {
    puts("estou comprando... ");
    estoque += 10;
  }
}
```

### for

```c
for(/*inicializacao*/;/*verificacao*/;/*atualizacao*/) {
  // faça algo
}
```

```c
for(int contador = 1;contador <= 8; contador++) {
  
}
```

### função

a funcao eh um passo a passo

- pode ter retorno
- pode ter entrada

motivacoes:

- reuso
- legibilidade

```c
void say_hello(char* nome) {
  printf("hello, %s\n", nome);
}

double perimetro_do_circulo(double raio) {
  int PI = 3.14;
  return raio * 2 * PI;
}
```

### função recursiva

> ver mais sobre divisao e conquista

a funcao chama a si mesma

loop infinito:

```c
void dizer_oi_e_repete() {
  puts("oi");
  dizer_oi_e_repete();
}
```

contando com recursao:

```c
void count(int num) {
  // caso base
  if(num == 0) // verificacao
    return;

  printf("%d\n", num);
  count(num - 1); // atualizacao
}

int main() {
  count(8); // inicializacao
}
```

count(3) -> count(2) -> count(1) -> count(0)

### Estrutura de uma recursao

- Caso base (verificação)
- Caso recursivo (atualização)
- Faça algo

### Fibonacci
