const prompt = require('prompt-sync')();

let nota1, nota2, nota3, media, recup;

    nota1 = Number(prompt("Digite o valor da 1° avaliação:"));
    nota2 = Number(prompt("Digite o valor da 2° avaliação:"));
    nota3 = Number(prompt("Digite o valor da 3° avaliação:"));

    media = (nota1+nota2+nota3)/3;
    media = media.toFixed(1);
    console.log(`Sua média este semestre foi ${media}`)
        if(media >= 7){
            console.log("Parabés! Você foi aprovado")
        } else if(media < 7){
            console.log("Você está na recupeeração!")
            recup = Number(prompt("Digite o valor da nota sua recuperação: "));
                media = (media+recup)/2;
            console.log(`Sua média após a recuperação é ${media}`)
            if(media >= 5){
                console.log("Prabés! Você passou na recuperação e está aprovado")
            } else 
            console.log("REPROVADO! Estude mais na próxima vez")
        }
