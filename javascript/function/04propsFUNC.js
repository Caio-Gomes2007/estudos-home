//this aponta por objeto no seu escopo 
const pessoa = {
    nome: 'caio',
    idade: 16,
    ola: function () {
        console.log(`ola meu nome é ${this.nome} , tenho ${this.idade} anos`);
    }
}
pessoa.ola()

// bind vincula o this 

function f(y) { return this.x + y }
var o = { x: 1 }
var g = f.bind(o)
console.log(g(2));