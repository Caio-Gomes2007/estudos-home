const teste = {
    x: 1,
    y: 2,
    z: 3
};
// console.log('x' in teste); // true
// console.log('a' in teste); // false

function TesteProps(propriedade, objeto,NaoTem) {
    var prop = propriedade.toString(); // transformando em string
    if (prop in objeto) {
        console.log('Já existe')
    } else {
        objeto[prop] =NaoTem
        console.log('Ainda não exite será criada com o valor fornecido...foi criada');
        console.log('atual valor '+ objeto[prop])
        console.log(objeto)
    }
}
const Pessoa ={}
TesteProps('nome',Pessoa,'Caio')

