const prompt = require("prompt-sync")(); /* Fazendo o REQUERIMENTO da biblioteca prompt-sync para executar o resultado do código no TERMINAL.*/

let numero, contador, res;

    numero = Number(prompt("Digite ro número que deseja imprimir a tabuada: "));
    /*Utilizando a estrutura de repetição FOR para criar o loop de uma tabuada definada até a multiplcação por 10*/
    for(contador = 1; contador <=10; contador++){
        res= numero*contador

        console.log(`${numero} x ${contador} = ${res}`)
    }
    