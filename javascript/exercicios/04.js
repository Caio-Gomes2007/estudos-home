//04) Crie uma função que irá receber dois valores, o dividendo e o divisor. A função deverá imprimir o resultado
//e o resto da divisão destes dois valore
function Divi(dividendo, divisor) {
    let resultado = [dividendo/divisor,dividendo%divisor] 
    return resultado
}

console.log(Divi(8, 2));
