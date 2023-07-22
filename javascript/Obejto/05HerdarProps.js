const pai = {
    x: 1,
    y: 2,
    z: 3
};
const filho = Object.create(pai);
console.log(pai);
console.log(filho);
console.log(filho.x);
console.log(filho.y);
console.log(filho.z);

function HerdaProps(propriedade, objeto, NaoTem) {
    var prop = propriedade.toString(); // transformando em string
    if (objeto.hasOwnProperty(prop)) {
        console.log('É propriedade propria');
    } else {
        objeto[prop] = NaoTem;
        console.log('A propriedade ' +prop+' é herdada');
        console.log('criando propriendade propria baseada no valor dado...')
        console.log('Criando...')
        console.log('criado')
        console.log('Valor atual: ' + propriedade+':'+objeto[prop]);
        console.log('valor total do objeto...')
        console.log(objeto);
    }
}
HerdaProps('x', filho, 'X');
