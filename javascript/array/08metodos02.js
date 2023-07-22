//foreach() muda a array com base em uma function
var arrayteste = ["agata","babaca","caio","diabo"]
arrayteste.forEach(function(nome,indice){
    console.log(`${indice+1}) ${nome}`)
})

// map() cria uma nova array com base na function
var num = [1,2,3,4,5]
var resultado = num.map(function(e){
    return e*e
})
console.log(resultado);

//filter,filtra com base em func

var par = num.filter(function (e) {
    return e%2 == 0
})
console.log(par);

//every and some

var Maispar = num.every(function (e) {
    return  e%2 ==0
})
var TemAlgumPar = num.some(function (e) {
    return e%2 ==0
})
console.log(Maispar);
console.log(TemAlgumPar);

// reduce 
const alunos = [
    {nome:'joao',nota: 7.3,bolsista:false},
    {nome:'Maria',nota: 9.2,bolsista:true},
    {nome:'Pedro',nota: 9.8,bolsista:false},
    {nome:'Ana',nota: 8.7,bolsista:true}
]

//desafio 1:todos os alunos sao bolsistas?

const todosBolsistas = (resultado,bolsista) => resultado && bolsista
console.log(alunos.map(a => a.bolsista).reduce(todosBolsistas))

//desafio 2 : algum aluno é bolsista?

const algumBolsista = (resultado,bolsista) => resultado || bolsista
console.log(alunos.map(a => a.bolsista).reduce(algumBolsista))


//indexof() , lastindexof()

var pesquisando = ['um', 2, 3, 4, 5, 6]
console.log(pesquisando.indexOf(function (e) {
    return e == String
}));